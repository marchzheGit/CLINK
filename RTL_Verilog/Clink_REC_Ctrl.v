/* =======================================================
 * FileName: Clink_REC_Ctrl.v
 * Designer: Zhe
 * EmailAdr: zhechen@ucla.edu
 * Modified: 18:00 03/08/2018
 * Describe: Control state machine for Clink REC module.
 * ======================================================*/

`timescale 1ns/1ns

module Clink_REC_Ctrl (
    input              clock,
    input              reset_n,

    input              clink_rec_start,
    output reg         clink_finish,

    output reg [2:0]   iter_n,
    output     [2:0]   curr_s,

    input      [9:0]   lut_mvm_addr,
    input      [9:0]   lut_rec_addr,
    output     [9:0]   lut_addr
);

localparam  IDLE       =  3'b000;
localparam  I_RECV     =  3'b001;
localparam  G_RECV     =  3'b010;
localparam  F_RECV     =  3'b011;
localparam  O_RECV     =  3'b100;
localparam  C_RECV     =  3'b101;
localparam  FINISH     =  3'b110;

reg  [2:0]  state;
reg  [2:0]  next_state;

assign      curr_s  =  state;

reg         sel_rec_addr;

assign      lut_addr = sel_rec_addr? lut_rec_addr : lut_mvm_addr;

//------------------- Combinational FSM ---------------------
always @(*) begin
    case (state)
        IDLE: begin
            if (clink_rec_start) begin
                next_state = I_RECV;
            end
            else begin
                next_state = IDLE;
            end
        end
        I_RECV: begin
            next_state = G_RECV;
        end
        G_RECV: begin
            next_state = F_RECV;
        end
        F_RECV: begin
            next_state = O_RECV;
        end
        O_RECV: begin
            next_state = C_RECV;
        end
        C_RECV: begin
            if (iter_n == 3'd4) begin
                next_state = FINISH;
            end
            else begin
                next_state = I_RECV;
            end
        end
        FINISH: begin
            next_state = IDLE;
        end
    endcase
end

//--------------------- Sequential FSM -------------------------
always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        state <= IDLE;
    end
    else begin
        state <= next_state;
    end
end

//--------------------- Output FSM ---------------------------
always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        iter_n <= 3'd0;
        clink_finish <= 1'b0;
        sel_rec_addr <= 1'b0;
    end
    else begin
        case (state)
            IDLE: begin
                iter_n <= 3'd0;
                clink_finish <= 1'b0;
                sel_rec_addr <= 1'b0;
            end
            I_RECV: begin
                iter_n <= iter_n;
                clink_finish <= 1'b0;
                sel_rec_addr <= 1'b0;
            end
            G_RECV: begin
                iter_n <= iter_n;
                clink_finish <= 1'b0;
                sel_rec_addr <= 1'b0;
            end
            F_RECV: begin
                iter_n <= iter_n;
                clink_finish <= 1'b0;
                sel_rec_addr <= 1'b1;
            end
            O_RECV: begin
                iter_n <= iter_n;
                clink_finish <= 1'b0;
                sel_rec_addr <= 1'b0;
            end
            C_RECV: begin
                iter_n <= iter_n + 1'b1;
                clink_finish <= 1'b0;
                sel_rec_addr <= 1'b0;
            end
            FINISH: begin
                iter_n <= iter_n;
                clink_finish <= 1'b1;
                sel_rec_addr <= 1'b0;
            end
            default: begin
                iter_n <= 3'd0;
                clink_finish <= 1'b0;
                sel_rec_addr <= 1'b0;
            end
        endcase
    end
end

endmodule

