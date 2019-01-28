/*======================================================
 *  FileName:  Clink.v
 *  Designer:  Zhe
 *  EmailAdr:  zhechen@ucla.edu
 *  Modified:  16:22 03/07/2018
 *  Describe:  Compact LSTM Inference Kernel
 *             16-bit weights with 5 hidden nodes
 ======================================================*/

`include "../src/Clink_Ctrl.v"
`include "../src/Clink_MVM.v"
`include "../src/Clink_REC.v"

`timescale 1ns/1ns

module Clink #(
    parameter  LUT_SIZE  =  12'd1024
)(
    input           clock,
    input           reset_n,

    input           param_ld_start,
    input   [15:0]  param_ld_data,
    input           param_set,

    input           clink_start,
    input   [15:0]  clink_input,
    output          clink_finish,
    output  [15:0]  clink_output,

    output  [9:0]   lut_addr,
    input   [15:0]  lut_data,

    output  [4:0]   weight_addr,
    input   [15:0]  weight_bias,
    input   [15:0]  weight_in,
    input   [15:0]  weight_h1,
    input   [15:0]  weight_h2,
    input   [15:0]  weight_h3,
    input   [15:0]  weight_h4,
    input   [15:0]  weight_h5
);

wire [15:0]  rec_wb;
wire [15:0]  rec_w1;
wire [15:0]  rec_w2;
wire [15:0]  rec_w3;
wire [15:0]  rec_w4;
wire [15:0]  rec_w5;

wire         mvm_enable;
wire         mvm_isTanh;

wire [9:0]   lut_mvm_addr;
wire [9:0]   lut_rec_addr;
wire [1:0]   mvm_sel;

wire [2:0]   iter_n;
wire [2:0]   curr_s;

wire [15:0]  in_d;

wire [15:0]  h1_cur_d;
wire [15:0]  h2_cur_d;
wire [15:0]  h3_cur_d;
wire [15:0]  h4_cur_d;
wire [15:0]  h5_cur_d;

wire [15:0]  h1_pre_d;
wire [15:0]  h2_pre_d;
wire [15:0]  h3_pre_d;
wire [15:0]  h4_pre_d;
wire [15:0]  h5_pre_d;

Clink_Ctrl U_Clink_Ctrl(
    .clock(clock),
    .reset_n(reset_n),

    .param_ld_start(param_ld_start),
    .param_ld_data(param_ld_data),
    .param_set(param_set),

    .rec_wb(rec_wb),
    .rec_w1(rec_w1),
    .rec_w2(rec_w2),
    .rec_w3(rec_w3),
    .rec_w4(rec_w4),
    .rec_w5(rec_w5),

    .clink_input(clink_input),
    .in_d(in_d),

    .h1_cur_d(h1_cur_d),
    .h2_cur_d(h2_cur_d),
    .h3_cur_d(h3_cur_d),
    .h4_cur_d(h4_cur_d),
    .h5_cur_d(h5_cur_d),

    .h1_pre_d(h1_pre_d),
    .h2_pre_d(h2_pre_d),
    .h3_pre_d(h3_pre_d),
    .h4_pre_d(h4_pre_d),
    .h5_pre_d(h5_pre_d),

    .clink_start(clink_start),
    .clink_finish(clink_finish),

    .weight_addr(weight_addr),
    .mvm_enable(mvm_enable),
    .mvm_isTanh(mvm_isTanh),

    .iter_n(iter_n),
    .curr_s(curr_s),

    .lut_mvm_addr(lut_mvm_addr),
    .lut_rec_addr(lut_rec_addr),
    .lut_addr(lut_addr)
);

Clink_MVM #(
    .LUT_SIZE(LUT_SIZE)
) U_Clink_MVM (
    .clock(clock),
    .reset_n(reset_n),
    .enable(mvm_enable),
    .isTanh(mvm_isTanh),

    .in_d(in_d),
    .h1_d(h1_pre_d),
    .h2_d(h2_pre_d),
    .h3_d(h3_pre_d),
    .h4_d(h4_pre_d),
    .h5_d(h5_pre_d),

    .weight_bias(weight_bias),
    .weight_in(weight_in),
    .weight_h1(weight_h1),
    .weight_h2(weight_h2),
    .weight_h3(weight_h3),
    .weight_h4(weight_h4),
    .weight_h5(weight_h5),

    .mvm_output(lut_mvm_addr),
    .mvm_sel(mvm_sel)
);

Clink_REC # (
    .LUT_SIZE(LUT_SIZE)
) U_Clink_REC (
    .clock(clock),
    .reset_n(reset_n),

    .wb(rec_wb),
    .w1(rec_w1),
    .w2(rec_w2),
    .w3(rec_w3),
    .w4(rec_w4),
    .w5(rec_w5),

    .mvm_sel(mvm_sel),
    .lut_data(lut_data),

    .iter_n(iter_n),
    .curr_s(curr_s),

    .rec_output(lut_rec_addr),

    .h1_d(h1_cur_d),
    .h2_d(h2_cur_d),
    .h3_d(h3_cur_d),
    .h4_d(h4_cur_d),
    .h5_d(h5_cur_d),

    .out_d(clink_output)
);

endmodule

