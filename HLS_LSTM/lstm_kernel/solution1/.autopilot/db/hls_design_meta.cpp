#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("mode", 1, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("init", 1, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("sampleinput", 16, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("max_v", 16, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("min_v", 16, hls_in, 4, "ap_none", "in_data", 1),
	Port_Property("weight_Addr_A", 32, hls_out, 5, "bram", "MemPortADDR2", 1),
	Port_Property("weight_EN_A", 1, hls_out, 5, "bram", "MemPortCE2", 1),
	Port_Property("weight_WEN_A", 2, hls_out, 5, "bram", "MemPortWE2", 1),
	Port_Property("weight_Din_A", 16, hls_out, 5, "bram", "MemPortDIN2", 1),
	Port_Property("weight_Dout_A", 16, hls_in, 5, "bram", "MemPortDOUT2", 1),
	Port_Property("weight_Clk_A", 1, hls_out, 5, "bram", "mem_clk", 1),
	Port_Property("weight_Rst_A", 1, hls_out, 5, "bram", "mem_rst", 1),
	Port_Property("lstm_out", 16, hls_out, 6, "ap_vld", "out_data", 1),
	Port_Property("lstm_out_ap_vld", 1, hls_out, 6, "ap_vld", "out_vld", 1),
};
const char* HLS_Design_Meta::dut_name = "lstm_kernel";
