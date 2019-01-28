/* =========================================================
 * FileName: Clink_ParamData_Update.v
 * Designer: Zhe
 * EmailAdr: zhechen@ucla.edu
 * Modified: 16:09 03/08/2018
 * Describe: Set parameters; Update data (input sample and
 *           hidden node states) for each inference.
 * =======================================================*/

`timescale 1ns/1ns

module Clink_ParamData_Update (
    input               clock,
    input               reset_n,

    input               param_ld_start,
    input      [15:0]   param_ld_data,
    input               param_set,

    output reg [15:0]   rec_wb,
    output reg [15:0]   rec_w1,
    output reg [15:0]   rec_w2,
    output reg [15:0]   rec_w3,
    output reg [15:0]   rec_w4,
    output reg [15:0]   rec_w5,

    input               clink_start,
    input      [15:0]   clink_input,
    output reg [15:0]   in_d,

    input      [15:0]   h1_cur_d,
    input      [15:0]   h2_cur_d,
    input      [15:0]   h3_cur_d,
    input      [15:0]   h4_cur_d,
    input      [15:0]   h5_cur_d,

    output reg [15:0]   h1_pre_d,
    output reg [15:0]   h2_pre_d,
    output reg [15:0]   h3_pre_d,
    output reg [15:0]   h4_pre_d,
    output reg [15:0]   h5_pre_d
);

reg [15:0] param_ld_wb;
reg [15:0] param_ld_w1;
reg [15:0] param_ld_w2;
reg [15:0] param_ld_w3;
reg [15:0] param_ld_w4;
reg [15:0] param_ld_w5;

reg [2:0]  cnt_ld_cyc;
reg        param_ld_ena;
wire       param_ld_finish = (cnt_ld_cyc == 3'd5);

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        cnt_ld_cyc   <= 3'd0;
        param_ld_ena <= 1'b0;
    end
    else begin
        if (param_ld_start) begin
            cnt_ld_cyc   <= 3'd0;
            param_ld_ena <= 1'b1;
        end
        else begin
            cnt_ld_cyc   <= param_ld_ena? (cnt_ld_cyc + 1'b1) : cnt_ld_cyc;
            param_ld_ena <= param_ld_finish? 1'b0 : param_ld_ena;
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        param_ld_wb <= 16'd0;
        param_ld_w1 <= 16'd0;
        param_ld_w2 <= 16'd0;
        param_ld_w3 <= 16'd0;
        param_ld_w4 <= 16'd0;
        param_ld_w5 <= 16'd0;
    end
    else begin
        if (param_ld_ena) begin
            param_ld_wb <= param_ld_data;
            param_ld_w1 <= param_ld_wb;
            param_ld_w2 <= param_ld_w1;
            param_ld_w3 <= param_ld_w2;
            param_ld_w4 <= param_ld_w3;
            param_ld_w5 <= param_ld_w4;
        end
        else begin
            param_ld_wb <= param_ld_wb;
            param_ld_w1 <= param_ld_w1;
            param_ld_w2 <= param_ld_w2;
            param_ld_w3 <= param_ld_w3;
            param_ld_w4 <= param_ld_w4;
            param_ld_w5 <= param_ld_w5;
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        rec_wb <= 16'd0;
        rec_w1 <= 16'd0;
        rec_w2 <= 16'd0;
        rec_w3 <= 16'd0;
        rec_w4 <= 16'd0;
        rec_w5 <= 16'd0;
    end
    else begin
        if (param_set) begin
            rec_wb <= param_ld_wb;
            rec_w1 <= param_ld_w1;
            rec_w2 <= param_ld_w2;
            rec_w3 <= param_ld_w3;
            rec_w4 <= param_ld_w4;
            rec_w5 <= param_ld_w5;
        end
        else begin
            rec_wb <= rec_wb;
            rec_w1 <= rec_w1;
            rec_w2 <= rec_w2;
            rec_w3 <= rec_w3;
            rec_w4 <= rec_w4;
            rec_w5 <= rec_w5;
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        in_d <= 16'd0;
    end
    else begin
        if (clink_start) begin
            in_d <= clink_input;
        end
        else begin
            in_d <= in_d;
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        h1_pre_d <= 16'd0;
        h2_pre_d <= 16'd0;
        h3_pre_d <= 16'd0;
        h4_pre_d <= 16'd0;
        h5_pre_d <= 16'd0;
    end
    else begin
        if (clink_start) begin
            h1_pre_d <= h1_cur_d;
            h2_pre_d <= h2_cur_d;
            h3_pre_d <= h3_cur_d;
            h4_pre_d <= h4_cur_d;
            h5_pre_d <= h5_cur_d;
        end
        else begin
            h1_pre_d <= h1_pre_d;
            h2_pre_d <= h2_pre_d;
            h3_pre_d <= h3_pre_d;
            h4_pre_d <= h4_pre_d;
            h5_pre_d <= h5_pre_d;
        end
    end
end

endmodule

