/* ================================================
 * FileName:  Clink_REC.v
 * Designer:  Zhe
 * EmailAdr:  zhechen@ucla.edu
 * Modified:  20:27 03/07/2018
 * Describe:  REC: Recurrent connections
 *            update cell node and hidden node on
 *            the recurrent connection paths.
 * ===============================================*/

`timescale 1ns/1ns

module Clink_REC #(
    parameter   LUT_SIZE = 12'd1024
)(
    input              clock,
    input              reset_n,

    input      [15:0]  wb,
    input      [15:0]  w1,
    input      [15:0]  w2,
    input      [15:0]  w3,
    input      [15:0]  w4,
    input      [15:0]  w5,

    input      [1:0]   mvm_sel,
    input      [15:0]  lut_data,

    input      [2:0]   iter_n,
    input      [2:0]   curr_s,

    output     [9:0]   rec_output,

    output reg [15:0]  h1_d,
    output reg [15:0]  h2_d,
    output reg [15:0]  h3_d,
    output reg [15:0]  h4_d,
    output reg [15:0]  h5_d,

    output reg [15:0]  out_d
);

localparam  I_RECV = 3'b001;
localparam  G_RECV = 3'b010;
localparam  F_RECV = 3'b011;
localparam  O_RECV = 3'b100;
localparam  C_RECV = 3'b101;
localparam  FINISH = 3'b110;

reg  [15:0]  c1_d;
reg  [15:0]  c2_d;
reg  [15:0]  c3_d;
reg  [15:0]  c4_d;
reg  [15:0]  c5_d;

reg  [15:0]  pre_mul_reg;
reg  [15:0]  acc_reg;

reg  [15:0]  tanh_g;
reg  [15:0]  sigmoid_f;
reg  [15:0]  tanh_c;

reg  [15:0]  sel_w_d;
reg  [15:0]  sel_h_d;
reg  [15:0]  sel_c_d;

reg  [15:0]  mul_d1;
reg  [15:0]  mul_d2;

reg  [1:0]   rec_sel;

wire [27:0]  mul_result;

assign  mul_result = $signed(mul_d1) * $signed(mul_d2);

wire [15:0]  acc_update_c = ($signed(acc_reg) >>> 5) << 1;

assign  rec_output = ($signed(acc_update_c) >= 0)? acc_update_c[9:0] : (-acc_update_c[9:0]);

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        pre_mul_reg <= 16'd0;
    end
    else if ((curr_s == I_RECV) || (curr_s == O_RECV)) begin
        if (mvm_sel == 2'd0) begin
            pre_mul_reg <= 16'd4095;
        end
        else if (mvm_sel == 2'd1) begin
            pre_mul_reg <= lut_data;
        end
        else if (mvm_sel == 2'd2) begin
            pre_mul_reg <= 16'd4096 - lut_data;
        end
        else begin
            pre_mul_reg <= 16'd1;
        end
    end
    else begin
        pre_mul_reg  <=  pre_mul_reg;
    end
end

always @(*) begin
    case (mvm_sel)
        2'd0: tanh_g = 16'd4096;
        2'd1: tanh_g = (lut_data << 1) - 16'd4096;
        2'd2: tanh_g = 16'd4096 - (lut_data << 1);
        2'd3: tanh_g = -16'd4096;
        default: tanh_g = 16'd0;
    endcase
end

always @(*) begin
    case (mvm_sel)
        2'd0: sigmoid_f = 16'd4095;
        2'd1: sigmoid_f = lut_data;
        2'd2: sigmoid_f = 16'd4096 - lut_data;
        2'd3: sigmoid_f = 16'd1;
        default: sigmoid_f = 16'd0;
    endcase
end

always @(*) begin
    case (rec_sel)
        2'd0: tanh_c = 16'd4096;
        2'd1: tanh_c = (lut_data << 1) - 16'd4096;
        2'd2: tanh_c = 16'd4096 - (lut_data << 1);
        2'd3: tanh_c = -16'd4096;
        default: tanh_c = 16'd0;
    endcase
end

always @(*) begin
    case (iter_n)
        3'd1: sel_w_d = w1;
        3'd2: sel_w_d = w2;
        3'd3: sel_w_d = w3;
        3'd4: sel_w_d = w4;
        3'd5: sel_w_d = w5;
        default: sel_w_d = 16'd0;
    endcase
end

always @(*) begin
    case (iter_n)
        3'd1: sel_h_d = h1_d;
        3'd2: sel_h_d = h2_d;
        3'd3: sel_h_d = h3_d;
        3'd4: sel_h_d = h4_d;
        3'd5: sel_h_d = h5_d;
        default: sel_h_d = 16'd0;
    endcase
end

always @(*) begin
    case (iter_n)
        3'd0: sel_c_d = c1_d;
        3'd1: sel_c_d = c2_d;
        3'd2: sel_c_d = c3_d;
        3'd3: sel_c_d = c4_d;
        3'd4: sel_c_d = c5_d;
        default: sel_c_d = 16'd0;
    endcase
end

always @(*) begin
    case (curr_s)
        I_RECV: mul_d1 = sel_w_d;
        G_RECV: mul_d1 = tanh_g;
        F_RECV: mul_d1 = sigmoid_f;
        C_RECV: mul_d1 = tanh_c;
        FINISH: mul_d1 = sel_w_d;
        default: mul_d1 = 16'd0;
    endcase
end

always @(*) begin
    case (curr_s)
        I_RECV: mul_d2 = sel_h_d;
        G_RECV: mul_d2 = pre_mul_reg;
        F_RECV: mul_d2 = sel_c_d;
        C_RECV: mul_d2 = pre_mul_reg;
        FINISH: mul_d2 = sel_h_d;
        default: mul_d2 = 16'd0;
    endcase
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        h1_d <= 16'd0;
        h2_d <= 16'd0;
        h3_d <= 16'd0;
        h4_d <= 16'd0;
        h5_d <= 16'd0;
    end
    else begin
        if (curr_s == C_RECV) begin
            case (iter_n)
                3'd0: begin
                    h1_d <= ($signed(mul_result) >>> 12);
                    h2_d <= h2_d;
                    h3_d <= h3_d;
                    h4_d <= h4_d;
                    h5_d <= h5_d;
                end
                3'd1: begin
                    h1_d <= h1_d;
                    h2_d <= ($signed(mul_result) >>> 12);
                    h3_d <= h3_d;
                    h4_d <= h4_d;
                    h5_d <= h5_d;
                end
                3'd2: begin
                    h1_d <= h1_d;
                    h2_d <= h2_d;
                    h3_d <= ($signed(mul_result) >>> 12);
                    h4_d <= h4_d;
                    h5_d <= h5_d;
                end
                3'd3: begin
                    h1_d <= h1_d;
                    h2_d <= h2_d;
                    h3_d <= h3_d;
                    h4_d <= ($signed(mul_result) >>> 12);
                    h5_d <= h5_d;
                end
                3'd4: begin
                    h1_d <= h1_d;
                    h2_d <= h2_d;
                    h3_d <= h3_d;
                    h4_d <= h4_d;
                    h5_d <= ($signed(mul_result) >>> 12);
                end
                default: begin
                    h1_d <= h1_d;
                    h2_d <= h2_d;
                    h3_d <= h3_d;
                    h4_d <= h4_d;
                    h5_d <= h5_d;
                end
            endcase
        end
        else begin
            h1_d <= h1_d;
            h2_d <= h2_d;
            h3_d <= h3_d;
            h4_d <= h4_d;
            h5_d <= h5_d;
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        c1_d <= 16'd0;
        c2_d <= 16'd0;
        c3_d <= 16'd0;
        c4_d <= 16'd0;
        c5_d <= 16'd0;
    end
    else begin
        if (curr_s == O_RECV) begin
            case (iter_n)
                3'd0: begin
                    c1_d <= acc_update_c;
                    c2_d <= c2_d;
                    c3_d <= c3_d;
                    c4_d <= c4_d;
                    c5_d <= c5_d;
                end
                3'd1: begin
                    c1_d <= c1_d;
                    c2_d <= acc_update_c;
                    c3_d <= c3_d;
                    c4_d <= c4_d;
                    c5_d <= c5_d;
                end
                3'd2: begin
                    c1_d <= c1_d;
                    c2_d <= c2_d;
                    c3_d <= acc_update_c;
                    c4_d <= c4_d;
                    c5_d <= c5_d;
                end
                3'd3: begin
                    c1_d <= c1_d;
                    c2_d <= c2_d;
                    c3_d <= c3_d;
                    c4_d <= acc_update_c;
                    c5_d <= c5_d;
                end
                3'd4: begin
                    c1_d <= c1_d;
                    c2_d <= c2_d;
                    c3_d <= c3_d;
                    c4_d <= c4_d;
                    c5_d <= acc_update_c;
                end
                default: begin
                    c1_d <= c1_d;
                    c2_d <= c2_d;
                    c3_d <= c3_d;
                    c4_d <= c4_d;
                    c5_d <= c5_d;
                end
            endcase
        end
        else begin
            c1_d <= c1_d;
            c2_d <= c2_d;
            c3_d <= c3_d;
            c4_d <= c4_d;
            c5_d <= c5_d;
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        acc_reg <= 16'd0;
    end
    else begin
        if (curr_s == I_RECV) begin
            acc_reg <= 16'd0;
        end
        else if (curr_s == G_RECV) begin
            acc_reg <= acc_reg + ($signed(mul_result) >>> 12);
        end
        else if (curr_s == F_RECV) begin
            acc_reg <= acc_reg + ($signed(mul_result) >>> 8);
        end
        else begin
            acc_reg <= acc_reg;
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        rec_sel <= 2'd0;
    end
    else begin
        if (curr_s == O_RECV) begin
            if ($signed(acc_update_c) >= 1024) begin
                rec_sel <= 2'd0;
            end
            else if ($signed(acc_update_c) >= 0) begin
                rec_sel <= 2'd1;
            end
            else if ($signed(acc_update_c) > -1024) begin
                rec_sel <= 2'd2;
            end
            else begin
                rec_sel <= 2'd3;
            end
        end
    end
end

always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        out_d <= 16'd0;
    end
    else begin
        if ((curr_s == I_RECV) && (iter_n == 3'd0)) begin
            out_d <= wb;
        end
        else if ((curr_s == I_RECV) || (curr_s == FINISH)) begin
            out_d <= out_d + ($signed(mul_result) >>> 12);
        end
        else begin
            out_d <= out_d;
        end
    end
end

endmodule
