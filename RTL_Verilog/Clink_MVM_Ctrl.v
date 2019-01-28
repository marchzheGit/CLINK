/* ======================================================
 * FileName: Clink_MVM_Ctrl.v
 * Designer: Zhe
 * EmailAdr: zhechen@ucla.edu
 * Modified: 20:40 03/08/2018
 * Describe: Control state machine for Clink MVM module.
 * ======================================================*/

`timescale 1ns/1ns

module Clink_MVM_Ctrl (
    input             clock,
    input             reset_n,

    input             clink_start,
    output            clink_rec_start,
    output reg        mvm_enable,
    output reg        mvm_isTanh,

    output reg [4:0]  weight_addr
);

localparam  IDLE        =  3'b000;
localparam  I_READY     =  3'b001;
localparam  G_READY     =  3'b010;
localparam  F_READY     =  3'b011;
localparam  O_READY     =  3'b100;
localparam  C_READY     =  3'b101;

reg  [2:0]   state;
reg  [2:0]   next_state;

reg  [2:0]   iter_n;

assign       clink_rec_start = ((iter_n == 3'd0) && (state == O_READY));

//-------------- Combinational FSM -------------------
always @(*) begin
    case (state)
        IDLE: begin
            if (clink_start) begin
                next_state = I_READY;
            end
            else begin
                next_state = IDLE;
            end
        end
        I_READY: begin
            next_state = G_READY;
        end
        G_READY: begin
            next_state = F_READY;
        end
        F_READY: begin
            next_state = O_READY;
        end
        O_READY: begin
            next_state = C_READY;
        end
        C_READY: begin
            if (iter_n == 3'd4) begin
                next_state = IDLE;
            end
            else begin
                next_state = I_READY;
            end
        end 
    endcase
end

//--------------- Sequential FSM ----------------------
always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        state <= IDLE;
    end
    else begin
        state <= next_state;
    end
end

//--------------- Output FSM ---------------------------
always @(posedge clock or negedge reset_n) begin
    if (~reset_n) begin
        iter_n <= 3'd0;
        mvm_enable <= 1'b0;
        mvm_isTanh <= 1'b0;
        weight_addr <= 5'd0;
    end
    else begin
        case (state)
            IDLE: begin
                iter_n <= 3'd0;
                mvm_isTanh <= 1'b0;
                if (clink_start) begin
                    mvm_enable <= 1'b1;
                    weight_addr <= weight_addr + 1'b1;
                end
                else begin
                    mvm_enable <= 1'b0;
                    weight_addr <= 5'd0;
                end
            end
            I_READY: begin
                iter_n <= iter_n;
                mvm_enable <= 1'b1;
                mvm_isTanh <= 1'b0;
                weight_addr <= weight_addr + 1'b1;
            end
            G_READY: begin
                iter_n <= iter_n;
                mvm_enable <= 1'b1;
                mvm_isTanh <= 1'b0;
                weight_addr <= weight_addr + 1'b1;
            end
            F_READY: begin
                iter_n <= iter_n;
                mvm_enable <= 1'b1;
                mvm_isTanh <= 1'b0;
                if (iter_n == 3'd4) begin
                    weight_addr <= 5'd0;
                end
                else begin
                    weight_addr <= weight_addr + 1'b1;
                end
            end
            O_READY: begin
                iter_n <= iter_n;
                if (iter_n == 3'd4) begin
                    mvm_enable <= 1'b0;
                end
                else begin
                    mvm_enable <= 1'b1;
                end
                mvm_isTanh <= 1'b1;
                weight_addr <= weight_addr;
            end
            C_READY: begin
                iter_n <= iter_n + 1'b1;
                mvm_enable <= mvm_enable;
                mvm_isTanh <= 1'b0;
                if (iter_n == 3'd4) begin
                    weight_addr <= 5'd0;
                end
                else begin
                    weight_addr <= weight_addr + 1'b1;
                end
            end
            default: begin
                iter_n <= 3'd0;
                mvm_enable <= 1'b0;
                mvm_isTanh <= 1'b0;
                weight_addr <= 5'd0;
            end
        endcase
    end
end

endmodule

