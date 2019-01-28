/* ================================================
 * FileName:  Clink_MVM.v
 * Designer:  Zhe
 * EmailAdr:  zhechen@ucla.edu
 * Modified:  16:55 03/07/2018
 * Describe:  Matrix vector multiplication kernel
 * ===============================================*/

`timescale 1ns/1ns

module Clink_MVM #(
    parameter   LUT_SIZE   =  12'd1024
)(
    input              clock,
    input              reset_n,
    input              enable,
    input              isTanh,

    input      [15:0]  in_d,
    input      [15:0]  h1_d,
    input      [15:0]  h2_d,
    input      [15:0]  h3_d,
    input      [15:0]  h4_d,
    input      [15:0]  h5_d,

    input      [15:0]  weight_bias,
    input      [15:0]  weight_in,
    input      [15:0]  weight_h1,
    input      [15:0]  weight_h2,
    input      [15:0]  weight_h3,
    input      [15:0]  weight_h4,
    input      [15:0]  weight_h5,

    output     [9:0]   mvm_output,
    output reg [1:0]   mvm_sel
);

reg    [15:0]  bias_reg;
reg    [27:0]  prod_in;
reg    [27:0]  prod_h1;
reg    [27:0]  prod_h2;
reg    [27:0]  prod_h3;
reg    [27:0]  prod_h4;
reg    [27:0]  prod_h5;

reg    [15:0]  acc_1;
reg    [15:0]  acc_2;

reg    [15:0]  mvm_result;

wire   [15:0]  mvm_result_abs = ($signed(mvm_result) >= 0)? mvm_result : (-mvm_result);
assign         mvm_output     = isTanh? (mvm_result_abs[8:0] << 1): mvm_result_abs[9:0];

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        bias_reg  <=  16'd0;
        prod_in   <=  28'd0;
        prod_h1   <=  28'd0;
        prod_h2   <=  28'd0;
        prod_h3   <=  28'd0;
        prod_h4   <=  28'd0;
        prod_h5   <=  28'd0;
    end
    else if (enable) begin
        bias_reg  <=  weight_bias;
        /*
        prod_in   <=  ($signed(in_d) * $signed(weight_in)) >>> 12;
        prod_h1   <=  ($signed(h1_d) * $signed(weight_h1)) >>> 12;
        prod_h2   <=  ($signed(h2_d) * $signed(weight_h2)) >>> 12;
        prod_h3   <=  ($signed(h3_d) * $signed(weight_h3)) >>> 12;
        prod_h4   <=  ($signed(h4_d) * $signed(weight_h4)) >>> 12;
        prod_h5   <=  ($signed(h5_d) * $signed(weight_h5)) >>> 12;
        */
        prod_in   <=  (($signed(in_d[15:6]) * $signed(weight_in[11:4])) <<< weight_in[3:0]) >>> 4;
        prod_h1   <=  (($signed(h1_d[15:6]) * $signed(weight_h1[11:4])) <<< weight_h1[3:0]) >>> 4;
        prod_h2   <=  (($signed(h2_d[15:6]) * $signed(weight_h2[11:4])) <<< weight_h2[3:0]) >>> 4;
        prod_h3   <=  (($signed(h3_d[15:6]) * $signed(weight_h3[11:4])) <<< weight_h3[3:0]) >>> 4;
        prod_h4   <=  (($signed(h4_d[15:6]) * $signed(weight_h4[11:4])) <<< weight_h4[3:0]) >>> 4;
        prod_h5   <=  (($signed(h5_d[15:6]) * $signed(weight_h5[11:4])) <<< weight_h5[3:0]) >>> 4;
        /*
        prod_in   <=  weight_in[7]? (((-$signed(in_d)) <<< weight_in[3:0]) >>> 12):
                                    ((( $signed(in_d)) <<< weight_in[3:0]) >>> 12);
        prod_h1   <=  weight_h1[7]? (((-$signed(h1_d)) <<< weight_h1[3:0]) >>> 12):
                                    ((( $signed(h1_d)) <<< weight_h1[3:0]) >>> 12);
        prod_h2   <=  weight_h2[7]? (((-$signed(h2_d)) <<< weight_h2[3:0]) >>> 12):
                                    ((( $signed(h2_d)) <<< weight_h2[3:0]) >>> 12);
        prod_h3   <=  weight_h3[7]? (((-$signed(h3_d)) <<< weight_h3[3:0]) >>> 12):
                                    ((( $signed(h3_d)) <<< weight_h3[3:0]) >>> 12);
        prod_h4   <=  weight_h4[7]? (((-$signed(h4_d)) <<< weight_h4[3:0]) >>> 12):
                                    ((( $signed(h4_d)) <<< weight_h4[3:0]) >>> 12);
        prod_h5   <=  weight_h5[7]? (((-$signed(h5_d)) <<< weight_h5[3:0]) >>> 12):
                                    ((( $signed(h5_d)) <<< weight_h5[3:0]) >>> 12);
        */
    end
    else begin
        bias_reg  <=  bias_reg;
        prod_in   <=  prod_in;
        prod_h1   <=  prod_h1;
        prod_h2   <=  prod_h2;
        prod_h3   <=  prod_h3;
        prod_h4   <=  prod_h4;
        prod_h5   <=  prod_h5;
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        acc_1  <=  16'd0;
        acc_2  <=  16'd0;
    end
    else begin
        acc_1  <=  bias_reg + prod_in + prod_h1;
        acc_2  <=  prod_h2 + prod_h3 + prod_h4 + prod_h5;
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        mvm_result <= 16'd0;
    end
    else begin
        mvm_result <= ($signed(acc_1) + $signed(acc_2)) >>> 5;
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        mvm_sel <= 2'd0;
    end
    else begin
        if ($signed(mvm_result) > 1024) begin
            mvm_sel <= 2'd0;
        end
        else if ($signed(mvm_result) >= 0) begin
            mvm_sel <= 2'd1;
        end
        else if ($signed(mvm_result) > -1024) begin
            mvm_sel <= 2'd2;
        end
        else begin
            mvm_sel <= 2'd3;
        end
    end
end

endmodule

