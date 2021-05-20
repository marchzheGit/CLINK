set moduleName lstm_kernel
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {lstm_kernel}
set C_modelType { void 0 }
set C_modelArgList {
	{ mode uint 1 regular  }
	{ init uint 1 regular  }
	{ sampleinput uint 16 regular  }
	{ max_v uint 16 regular  }
	{ min_v uint 16 regular  }
	{ weight int 16 regular {bram 1800 { 1 } 2 1 }  }
	{ lstm_out int 16 regular {pointer 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "mode", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "mode","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "init", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "init","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "sampleinput", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "sampleinput","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "max_v", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "max_v","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "min_v", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "min_v","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "weight", "interface" : "bram", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "weight","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 1799,"step" : 1}]}]}]} , 
 	{ "Name" : "lstm_out", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "lstm_out","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ mode sc_in sc_lv 1 signal 0 } 
	{ init sc_in sc_lv 1 signal 1 } 
	{ sampleinput sc_in sc_lv 16 signal 2 } 
	{ max_v sc_in sc_lv 16 signal 3 } 
	{ min_v sc_in sc_lv 16 signal 4 } 
	{ weight_Addr_A sc_out sc_lv 32 signal 5 } 
	{ weight_EN_A sc_out sc_logic 1 signal 5 } 
	{ weight_WEN_A sc_out sc_lv 2 signal 5 } 
	{ weight_Din_A sc_out sc_lv 16 signal 5 } 
	{ weight_Dout_A sc_in sc_lv 16 signal 5 } 
	{ weight_Clk_A sc_out sc_logic 1 signal 5 } 
	{ weight_Rst_A sc_out sc_logic 1 signal 5 } 
	{ lstm_out sc_out sc_lv 16 signal 6 } 
	{ lstm_out_ap_vld sc_out sc_logic 1 outvld 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "mode", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "mode", "role": "default" }} , 
 	{ "name": "init", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "init", "role": "default" }} , 
 	{ "name": "sampleinput", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "sampleinput", "role": "default" }} , 
 	{ "name": "max_v", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "max_v", "role": "default" }} , 
 	{ "name": "min_v", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "min_v", "role": "default" }} , 
 	{ "name": "weight_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight", "role": "Addr_A" }} , 
 	{ "name": "weight_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight", "role": "EN_A" }} , 
 	{ "name": "weight_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight", "role": "WEN_A" }} , 
 	{ "name": "weight_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weight", "role": "Din_A" }} , 
 	{ "name": "weight_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "weight", "role": "Dout_A" }} , 
 	{ "name": "weight_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight", "role": "Clk_A" }} , 
 	{ "name": "weight_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight", "role": "Rst_A" }} , 
 	{ "name": "lstm_out", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "lstm_out", "role": "default" }} , 
 	{ "name": "lstm_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "lstm_out", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51"],
		"CDFG" : "lstm_kernel",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2258", "EstimateLatencyMax" : "3964",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mode", "Type" : "None", "Direction" : "I"},
			{"Name" : "init", "Type" : "None", "Direction" : "I"},
			{"Name" : "sampleinput", "Type" : "None", "Direction" : "I"},
			{"Name" : "max_v", "Type" : "None", "Direction" : "I"},
			{"Name" : "min_v", "Type" : "None", "Direction" : "I"},
			{"Name" : "weight", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "lstm_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "weight_l", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "h_state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "lut_sigmoid", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "lut_tanh", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "c_state", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_l_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.h_state_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lut_sigmoid_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lut_tanh_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_state_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_state_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_udiv_32ns_32ns_16_36_seq_1_U1", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U2", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U3", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U4", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U5", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U6", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U7", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U8", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U9", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U10", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U11", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U12", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U13", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U14", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U15", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U16", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U17", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U18", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U19", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U20", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16ns_16s_28_3_1_U21", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U22", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U23", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U24", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U25", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U26", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U27", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U28", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U29", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U30", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U31", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U32", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U33", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U34", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U35", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U36", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U37", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U38", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U39", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U40", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U41", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U42", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_32_3_1_U43", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U44", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lstm_kernel_mul_mul_16s_16s_28_3_1_U45", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	lstm_kernel {
		mode {Type I LastRead 0 FirstWrite -1}
		init {Type I LastRead 0 FirstWrite -1}
		sampleinput {Type I LastRead 0 FirstWrite -1}
		max_v {Type I LastRead 0 FirstWrite -1}
		min_v {Type I LastRead 0 FirstWrite -1}
		weight {Type I LastRead 57 FirstWrite -1}
		lstm_out {Type O LastRead -1 FirstWrite 58}
		weight_l {Type IO LastRead -1 FirstWrite -1}
		h_state {Type IO LastRead -1 FirstWrite -1}
		lut_sigmoid {Type I LastRead -1 FirstWrite -1}
		lut_tanh {Type I LastRead -1 FirstWrite -1}
		c_state {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2258", "Max" : "3964"}
	, {"Name" : "Interval", "Min" : "2259", "Max" : "3965"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
]}

set Spec2ImplPortList { 
	mode { ap_none {  { mode in_data 0 1 } } }
	init { ap_none {  { init in_data 0 1 } } }
	sampleinput { ap_none {  { sampleinput in_data 0 16 } } }
	max_v { ap_none {  { max_v in_data 0 16 } } }
	min_v { ap_none {  { min_v in_data 0 16 } } }
	weight { bram {  { weight_Addr_A MemPortADDR2 1 32 }  { weight_EN_A MemPortCE2 1 1 }  { weight_WEN_A MemPortWE2 1 2 }  { weight_Din_A MemPortDIN2 1 16 }  { weight_Dout_A MemPortDOUT2 0 16 }  { weight_Clk_A mem_clk 1 1 }  { weight_Rst_A mem_rst 1 1 } } }
	lstm_out { ap_vld {  { lstm_out out_data 1 16 }  { lstm_out_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
	{ weight 2 }
	{ weight_l 2 }
}
