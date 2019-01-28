/* =================================================
 * FileName: Clink_Ctrl.v
 * Designer: Zhe
 * EmailAdr: zhechen@ucla.edu
 * Modified: 20:18 03/07/2018
 * Describe: Clink Ctrl state machine module
 * ===============================================*/

`include "../src/Clink_ParamData_Update.v"
`include "../src/Clink_MVM_Ctrl.v"
`include "../src/Clink_REC_Ctrl.v"

`timescale 1ns/1ns

module Clink_Ctrl (
    input               clock,
    input               reset_n,

    input               param_ld_start,
    input      [15:0]   param_ld_data,
    input               param_set,

    output     [15:0]   rec_wb,
    output     [15:0]   rec_w1,
    output     [15:0]   rec_w2,
    output     [15:0]   rec_w3,
    output     [15:0]   rec_w4,
    output     [15:0]   rec_w5,

    input      [15:0]   clink_input,
    output     [15:0]   in_d,

    input      [15:0]   h1_cur_d,
    input      [15:0]   h2_cur_d,
    input      [15:0]   h3_cur_d,
    input      [15:0]   h4_cur_d,
    input      [15:0]   h5_cur_d,

    output     [15:0]   h1_pre_d,
    output     [15:0]   h2_pre_d,
    output     [15:0]   h3_pre_d,
    output     [15:0]   h4_pre_d,
    output     [15:0]   h5_pre_d,

    input               clink_start,
    output              clink_finish,

    output     [4:0]    weight_addr,
    output              mvm_enable,
    output              mvm_isTanh,

    output     [2:0]    iter_n,
    output     [2:0]    curr_s,

    input      [9:0]    lut_mvm_addr,
    input      [9:0]    lut_rec_addr,
    output     [9:0]    lut_addr
);

Clink_ParamData_Update U_ParamData_Update (
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

    .clink_start(clink_start),
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
    .h5_pre_d(h5_pre_d)
);

Clink_MVM_Ctrl U_Clink_MVM_Ctrl (
    .clock(clock),
    .reset_n(reset_n),

    .clink_start(clink_start),
    .clink_rec_start(clink_rec_start),
    .mvm_enable(mvm_enable),
    .mvm_isTanh(mvm_isTanh),

    .weight_addr(weight_addr)
);

Clink_REC_Ctrl U_Clink_REC_Ctrl (
    .clock(clock),
    .reset_n(reset_n),

    .clink_rec_start(clink_rec_start),
    .clink_finish(clink_finish),

    .iter_n(iter_n),
    .curr_s(curr_s),

    .lut_mvm_addr(lut_mvm_addr),
    .lut_rec_addr(lut_rec_addr),
    .lut_addr(lut_addr)
);

endmodule

