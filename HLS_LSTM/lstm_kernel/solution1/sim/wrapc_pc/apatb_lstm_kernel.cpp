// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;

// apint = int16
#define int16 short
// apint = int24
#define int24 int
// apint = int32
#define int32 int
// apint = uint1
#define uint1 bool
// apint = uint8
#define uint8 char

// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "mode"
#define AUTOTB_TVIN_mode  "../tv/cdatafile/c.lstm_kernel.autotvin_mode.dat"
// wrapc file define: "sampleinput"
#define AUTOTB_TVIN_sampleinput  "../tv/cdatafile/c.lstm_kernel.autotvin_sampleinput.dat"
// wrapc file define: "scale_fac"
#define AUTOTB_TVIN_scale_fac  "../tv/cdatafile/c.lstm_kernel.autotvin_scale_fac.dat"
// wrapc file define: "scale_mul"
#define AUTOTB_TVIN_scale_mul  "../tv/cdatafile/c.lstm_kernel.autotvin_scale_mul.dat"
// wrapc file define: "weight"
#define AUTOTB_TVIN_weight  "../tv/cdatafile/c.lstm_kernel.autotvin_weight.dat"
// wrapc file define: "lstm_out"
#define AUTOTB_TVOUT_lstm_out  "../tv/cdatafile/c.lstm_kernel.autotvout_lstm_out.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "lstm_out"
#define AUTOTB_TVOUT_PC_lstm_out  "../tv/rtldatafile/rtl.lstm_kernel.autotvout_lstm_out.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			mode_depth = 0;
			sampleinput_depth = 0;
			scale_fac_depth = 0;
			scale_mul_depth = 0;
			weight_depth = 0;
			lstm_out_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{mode " << mode_depth << "}\n";
			total_list << "{sampleinput " << sampleinput_depth << "}\n";
			total_list << "{scale_fac " << scale_fac_depth << "}\n";
			total_list << "{scale_mul " << scale_mul_depth << "}\n";
			total_list << "{weight " << weight_depth << "}\n";
			total_list << "{lstm_out " << lstm_out_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int mode_depth;
		int sampleinput_depth;
		int scale_fac_depth;
		int scale_mul_depth;
		int weight_depth;
		int lstm_out_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void lstm_kernel (
uint1 mode,
int24 sampleinput,
uint8 scale_fac,
uint8 scale_mul,
int32 weight[17024],
int16* lstm_out);

extern "C" void AESL_WRAP_lstm_kernel (
uint1 mode,
int24 sampleinput,
uint8 scale_fac,
uint8 scale_mul,
int32 weight[17024],
int16* lstm_out)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "lstm_out"
		aesl_fh.read(AUTOTB_TVOUT_PC_lstm_out, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_lstm_out, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_lstm_out, AESL_token); // data

			sc_bv<16> *lstm_out_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'lstm_out', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'lstm_out', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					lstm_out_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_lstm_out, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_lstm_out))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: lstm_out
				{
					// bitslice(15, 0)
					// {
						// celement: lstm_out(15, 0)
						// {
							sc_lv<16>* lstm_out_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: lstm_out(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(lstm_out[0]) != NULL) // check the null address if the c port is array or others
								{
									lstm_out_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(lstm_out_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: lstm_out(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : lstm_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : lstm_out[0]
								// output_left_conversion : lstm_out[i_0]
								// output_type_conversion : (lstm_out_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(lstm_out[0]) != NULL) // check the null address if the c port is array or others
								{
									lstm_out[i_0] = (lstm_out_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] lstm_out_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "mode"
		char* tvin_mode = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mode);

		// "sampleinput"
		char* tvin_sampleinput = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sampleinput);

		// "scale_fac"
		char* tvin_scale_fac = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_scale_fac);

		// "scale_mul"
		char* tvin_scale_mul = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_scale_mul);

		// "weight"
		char* tvin_weight = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_weight);

		// "lstm_out"
		char* tvout_lstm_out = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_lstm_out);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_mode, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mode, tvin_mode);

		sc_bv<1> mode_tvin_wrapc_buffer;

		// RTL Name: mode
		{
			// bitslice(0, 0)
			{
				// celement: mode(0, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : mode
						// sub_1st_elem          : 
						// ori_name_1st_elem     : mode
						// regulate_c_name       : mode
						// input_type_conversion : mode
						if (&(mode) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> mode_tmp_mem;
							mode_tmp_mem = mode;
							mode_tvin_wrapc_buffer.range(0, 0) = mode_tmp_mem.range(0, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mode, "%s\n", (mode_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mode, tvin_mode);
		}

		tcl_file.set_num(1, &tcl_file.mode_depth);
		sprintf(tvin_mode, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mode, tvin_mode);

		// [[transaction]]
		sprintf(tvin_sampleinput, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sampleinput, tvin_sampleinput);

		sc_bv<24> sampleinput_tvin_wrapc_buffer;

		// RTL Name: sampleinput
		{
			// bitslice(23, 0)
			{
				// celement: sampleinput(23, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : sampleinput
						// sub_1st_elem          : 
						// ori_name_1st_elem     : sampleinput
						// regulate_c_name       : sampleinput
						// input_type_conversion : sampleinput
						if (&(sampleinput) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<24> sampleinput_tmp_mem;
							sampleinput_tmp_mem = sampleinput;
							sampleinput_tvin_wrapc_buffer.range(23, 0) = sampleinput_tmp_mem.range(23, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_sampleinput, "%s\n", (sampleinput_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sampleinput, tvin_sampleinput);
		}

		tcl_file.set_num(1, &tcl_file.sampleinput_depth);
		sprintf(tvin_sampleinput, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sampleinput, tvin_sampleinput);

		// [[transaction]]
		sprintf(tvin_scale_fac, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_scale_fac, tvin_scale_fac);

		sc_bv<8> scale_fac_tvin_wrapc_buffer;

		// RTL Name: scale_fac
		{
			// bitslice(7, 0)
			{
				// celement: scale_fac(7, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : scale_fac
						// sub_1st_elem          : 
						// ori_name_1st_elem     : scale_fac
						// regulate_c_name       : scale_fac
						// input_type_conversion : scale_fac
						if (&(scale_fac) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> scale_fac_tmp_mem;
							scale_fac_tmp_mem = scale_fac;
							scale_fac_tvin_wrapc_buffer.range(7, 0) = scale_fac_tmp_mem.range(7, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_scale_fac, "%s\n", (scale_fac_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_scale_fac, tvin_scale_fac);
		}

		tcl_file.set_num(1, &tcl_file.scale_fac_depth);
		sprintf(tvin_scale_fac, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_scale_fac, tvin_scale_fac);

		// [[transaction]]
		sprintf(tvin_scale_mul, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_scale_mul, tvin_scale_mul);

		sc_bv<8> scale_mul_tvin_wrapc_buffer;

		// RTL Name: scale_mul
		{
			// bitslice(7, 0)
			{
				// celement: scale_mul(7, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : scale_mul
						// sub_1st_elem          : 
						// ori_name_1st_elem     : scale_mul
						// regulate_c_name       : scale_mul
						// input_type_conversion : scale_mul
						if (&(scale_mul) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> scale_mul_tmp_mem;
							scale_mul_tmp_mem = scale_mul;
							scale_mul_tvin_wrapc_buffer.range(7, 0) = scale_mul_tmp_mem.range(7, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_scale_mul, "%s\n", (scale_mul_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_scale_mul, tvin_scale_mul);
		}

		tcl_file.set_num(1, &tcl_file.scale_mul_depth);
		sprintf(tvin_scale_mul, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_scale_mul, tvin_scale_mul);

		// [[transaction]]
		sprintf(tvin_weight, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_weight, tvin_weight);

		sc_bv<32>* weight_tvin_wrapc_buffer = new sc_bv<32>[17024];

		// RTL Name: weight
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: weight(31, 0)
				{
					// carray: (0) => (17023) @ (1)
					for (int i_0 = 0; i_0 <= 17023; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : weight[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : weight[0]
						// regulate_c_name       : weight
						// input_type_conversion : weight[i_0]
						if (&(weight[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> weight_tmp_mem;
							weight_tmp_mem = weight[i_0];
							weight_tvin_wrapc_buffer[hls_map_index].range(31, 0) = weight_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 17024; i++)
		{
			sprintf(tvin_weight, "%s\n", (weight_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_weight, tvin_weight);
		}

		tcl_file.set_num(17024, &tcl_file.weight_depth);
		sprintf(tvin_weight, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_weight, tvin_weight);

		// release memory allocation
		delete [] weight_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		lstm_kernel(mode, sampleinput, scale_fac, scale_mul, weight, lstm_out);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_lstm_out, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_lstm_out, tvout_lstm_out);

		sc_bv<16>* lstm_out_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: lstm_out
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: lstm_out(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : lstm_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : lstm_out[0]
						// regulate_c_name       : lstm_out
						// input_type_conversion : lstm_out[i_0]
						if (&(lstm_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> lstm_out_tmp_mem;
							lstm_out_tmp_mem = lstm_out[i_0];
							lstm_out_tvout_wrapc_buffer[hls_map_index].range(15, 0) = lstm_out_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_lstm_out, "%s\n", (lstm_out_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_lstm_out, tvout_lstm_out);
		}

		tcl_file.set_num(1, &tcl_file.lstm_out_depth);
		sprintf(tvout_lstm_out, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_lstm_out, tvout_lstm_out);

		// release memory allocation
		delete [] lstm_out_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "mode"
		delete [] tvin_mode;
		// release memory allocation: "sampleinput"
		delete [] tvin_sampleinput;
		// release memory allocation: "scale_fac"
		delete [] tvin_scale_fac;
		// release memory allocation: "scale_mul"
		delete [] tvin_scale_mul;
		// release memory allocation: "weight"
		delete [] tvin_weight;
		// release memory allocation: "lstm_out"
		delete [] tvout_lstm_out;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}


// apint = int16
#undef int16

// apint = int24
#undef int24

// apint = int32
#undef int32

// apint = uint1
#undef uint1

// apint = uint8
#undef uint8
