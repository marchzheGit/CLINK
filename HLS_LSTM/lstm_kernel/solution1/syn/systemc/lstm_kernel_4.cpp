#include "lstm_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lstm_kernel::thread_add_ln304_fu_4971_p2() {
    add_ln304_fu_4971_p2 = (!zext_ln302_1_fu_4950_p1.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln302_1_fu_4950_p1.read()) + sc_biguint<6>(ap_const_lv6_14));
}

void lstm_kernel::thread_add_ln305_fu_4981_p2() {
    add_ln305_fu_4981_p2 = (!zext_ln302_1_reg_7760.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln302_1_reg_7760.read()) + sc_bigint<6>(ap_const_lv6_28));
}

void lstm_kernel::thread_add_ln306_fu_4990_p2() {
    add_ln306_fu_4990_p2 = (!zext_ln302_reg_7755.read().is_01() || !ap_const_lv7_3C.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln302_reg_7755.read()) + sc_biguint<7>(ap_const_lv7_3C));
}

void lstm_kernel::thread_add_ln311_1_fu_5199_p2() {
    add_ln311_1_fu_5199_p2 = (!shl_ln311_1_fu_5179_p3.read().is_01() || !zext_ln311_3_fu_5195_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(shl_ln311_1_fu_5179_p3.read()) + sc_biguint<9>(zext_ln311_3_fu_5195_p1.read()));
}

void lstm_kernel::thread_add_ln311_2_fu_5234_p2() {
    add_ln311_2_fu_5234_p2 = (!add_ln311_3_fu_5229_p2.read().is_01() || !zext_ln309_2_reg_7839.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln311_3_fu_5229_p2.read()) + sc_biguint<9>(zext_ln309_2_reg_7839.read()));
}

void lstm_kernel::thread_add_ln311_3_fu_5229_p2() {
    add_ln311_3_fu_5229_p2 = (!add_ln311_1_reg_7904.read().is_01() || !ap_const_lv9_50.is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln311_1_reg_7904.read()) + sc_biguint<9>(ap_const_lv9_50));
}

void lstm_kernel::thread_add_ln311_4_fu_5077_p2() {
    add_ln311_4_fu_5077_p2 = (!zext_ln311_2_fu_5073_p1.read().is_01() || !zext_ln311_fu_5062_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln311_2_fu_5073_p1.read()) + sc_biguint<12>(zext_ln311_fu_5062_p1.read()));
}

void lstm_kernel::thread_add_ln311_5_fu_5209_p2() {
    add_ln311_5_fu_5209_p2 = (!zext_ln311_6_fu_5205_p1.read().is_01() || !add_ln311_4_reg_7876.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln311_6_fu_5205_p1.read()) + sc_biguint<12>(add_ln311_4_reg_7876.read()));
}

void lstm_kernel::thread_add_ln311_fu_5031_p2() {
    add_ln311_fu_5031_p2 = (!shl_ln_fu_5023_p3.read().is_01() || !ap_const_lv7_4.is_01())? sc_lv<7>(): (sc_biguint<7>(shl_ln_fu_5023_p3.read()) + sc_biguint<7>(ap_const_lv7_4));
}

void lstm_kernel::thread_add_ln312_1_fu_5246_p2() {
    add_ln312_1_fu_5246_p2 = (!zext_ln311_5_fu_5239_p1.read().is_01() || !ap_const_lv10_1E0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln311_5_fu_5239_p1.read()) + sc_biguint<10>(ap_const_lv10_1E0));
}

void lstm_kernel::thread_add_ln312_2_fu_5252_p2() {
    add_ln312_2_fu_5252_p2 = (!add_ln312_1_fu_5246_p2.read().is_01() || !zext_ln309_1_reg_7834.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln312_1_fu_5246_p2.read()) + sc_biguint<10>(zext_ln309_1_reg_7834.read()));
}

void lstm_kernel::thread_add_ln312_3_fu_5105_p2() {
    add_ln312_3_fu_5105_p2 = (!zext_ln312_2_fu_5101_p1.read().is_01() || !zext_ln312_fu_5090_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln312_2_fu_5101_p1.read()) + sc_biguint<12>(zext_ln312_fu_5090_p1.read()));
}

void lstm_kernel::thread_add_ln312_4_fu_5214_p2() {
    add_ln312_4_fu_5214_p2 = (!zext_ln311_6_fu_5205_p1.read().is_01() || !add_ln312_3_reg_7881.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln311_6_fu_5205_p1.read()) + sc_biguint<12>(add_ln312_3_reg_7881.read()));
}

void lstm_kernel::thread_add_ln312_fu_5037_p2() {
    add_ln312_fu_5037_p2 = (!shl_ln_fu_5023_p3.read().is_01() || !ap_const_lv7_5.is_01())? sc_lv<7>(): (sc_biguint<7>(shl_ln_fu_5023_p3.read()) + sc_biguint<7>(ap_const_lv7_5));
}

void lstm_kernel::thread_add_ln313_1_fu_5264_p2() {
    add_ln313_1_fu_5264_p2 = (!zext_ln311_4_fu_5257_p1.read().is_01() || !ap_const_lv11_370.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln311_4_fu_5257_p1.read()) + sc_biguint<11>(ap_const_lv11_370));
}

void lstm_kernel::thread_add_ln313_2_fu_5270_p2() {
    add_ln313_2_fu_5270_p2 = (!add_ln313_1_fu_5264_p2.read().is_01() || !zext_ln309_reg_7828.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln313_1_fu_5264_p2.read()) + sc_biguint<11>(zext_ln309_reg_7828.read()));
}

void lstm_kernel::thread_add_ln313_3_fu_5133_p2() {
    add_ln313_3_fu_5133_p2 = (!zext_ln313_2_fu_5129_p1.read().is_01() || !zext_ln313_fu_5118_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln313_2_fu_5129_p1.read()) + sc_biguint<12>(zext_ln313_fu_5118_p1.read()));
}

void lstm_kernel::thread_add_ln313_4_fu_5219_p2() {
    add_ln313_4_fu_5219_p2 = (!zext_ln311_6_fu_5205_p1.read().is_01() || !add_ln313_3_reg_7886.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln311_6_fu_5205_p1.read()) + sc_biguint<12>(add_ln313_3_reg_7886.read()));
}

void lstm_kernel::thread_add_ln313_fu_5043_p2() {
    add_ln313_fu_5043_p2 = (!shl_ln_fu_5023_p3.read().is_01() || !ap_const_lv7_6.is_01())? sc_lv<7>(): (sc_biguint<7>(shl_ln_fu_5023_p3.read()) + sc_biguint<7>(ap_const_lv7_6));
}

void lstm_kernel::thread_add_ln314_1_fu_5275_p2() {
    add_ln314_1_fu_5275_p2 = (!zext_ln311_4_fu_5257_p1.read().is_01() || !ap_const_lv11_500.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln311_4_fu_5257_p1.read()) + sc_bigint<11>(ap_const_lv11_500));
}

void lstm_kernel::thread_add_ln314_2_fu_5281_p2() {
    add_ln314_2_fu_5281_p2 = (!add_ln314_1_fu_5275_p2.read().is_01() || !zext_ln309_reg_7828.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln314_1_fu_5275_p2.read()) + sc_biguint<11>(zext_ln309_reg_7828.read()));
}

void lstm_kernel::thread_add_ln314_3_fu_5161_p2() {
    add_ln314_3_fu_5161_p2 = (!zext_ln314_2_fu_5157_p1.read().is_01() || !zext_ln314_fu_5146_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln314_2_fu_5157_p1.read()) + sc_biguint<12>(zext_ln314_fu_5146_p1.read()));
}

void lstm_kernel::thread_add_ln314_4_fu_5224_p2() {
    add_ln314_4_fu_5224_p2 = (!zext_ln311_6_fu_5205_p1.read().is_01() || !add_ln314_3_reg_7891.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln311_6_fu_5205_p1.read()) + sc_biguint<12>(add_ln314_3_reg_7891.read()));
}

void lstm_kernel::thread_add_ln314_fu_5049_p2() {
    add_ln314_fu_5049_p2 = (!shl_ln_fu_5023_p3.read().is_01() || !ap_const_lv7_7.is_01())? sc_lv<7>(): (sc_biguint<7>(shl_ln_fu_5023_p3.read()) + sc_biguint<7>(ap_const_lv7_7));
}

void lstm_kernel::thread_add_ln319_fu_5326_p2() {
    add_ln319_fu_5326_p2 = (!zext_ln318_fu_5310_p1.read().is_01() || !ap_const_lv10_290.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln318_fu_5310_p1.read()) + sc_bigint<10>(ap_const_lv10_290));
}

void lstm_kernel::thread_add_ln320_fu_5340_p2() {
    add_ln320_fu_5340_p2 = (!zext_ln318_reg_7971.read().is_01() || !ap_const_lv10_2A4.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln318_reg_7971.read()) + sc_bigint<10>(ap_const_lv10_2A4));
}

void lstm_kernel::thread_add_ln321_fu_5353_p2() {
    add_ln321_fu_5353_p2 = (!zext_ln318_reg_7971.read().is_01() || !ap_const_lv10_2B8.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln318_reg_7971.read()) + sc_bigint<10>(ap_const_lv10_2B8));
}

void lstm_kernel::thread_add_ln322_fu_5366_p2() {
    add_ln322_fu_5366_p2 = (!zext_ln318_reg_7971.read().is_01() || !ap_const_lv10_2CC.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln318_reg_7971.read()) + sc_bigint<10>(ap_const_lv10_2CC));
}

void lstm_kernel::thread_add_ln348_10_fu_2433_p2() {
    add_ln348_10_fu_2433_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_D.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_D));
}

void lstm_kernel::thread_add_ln348_11_fu_2477_p2() {
    add_ln348_11_fu_2477_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_E.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_E));
}

void lstm_kernel::thread_add_ln348_12_fu_2482_p2() {
    add_ln348_12_fu_2482_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_F.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_F));
}

void lstm_kernel::thread_add_ln348_13_fu_2536_p2() {
    add_ln348_13_fu_2536_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_10.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_10));
}

void lstm_kernel::thread_add_ln348_14_fu_2541_p2() {
    add_ln348_14_fu_2541_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_11.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_11));
}

void lstm_kernel::thread_add_ln348_15_fu_2603_p2() {
    add_ln348_15_fu_2603_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_12.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_12));
}

void lstm_kernel::thread_add_ln348_16_fu_2608_p2() {
    add_ln348_16_fu_2608_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_13.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_13));
}

void lstm_kernel::thread_add_ln348_17_fu_2563_p2() {
    add_ln348_17_fu_2563_p2 = (!zext_ln348_3_fu_2524_p1.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln348_3_fu_2524_p1.read()) + sc_bigint<5>(ap_const_lv5_14));
}

void lstm_kernel::thread_add_ln348_18_fu_2681_p2() {
    add_ln348_18_fu_2681_p2 = (!zext_ln348_2_fu_2652_p1.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln348_2_fu_2652_p1.read()) + sc_bigint<6>(ap_const_lv6_24));
}

void lstm_kernel::thread_add_ln348_19_fu_2726_p2() {
    add_ln348_19_fu_2726_p2 = (!zext_ln348_2_reg_6027.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln348_2_reg_6027.read()) + sc_bigint<6>(ap_const_lv6_2C));
}

void lstm_kernel::thread_add_ln348_1_fu_2340_p2() {
    add_ln348_1_fu_2340_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_4.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_4));
}

void lstm_kernel::thread_add_ln348_20_fu_2860_p2() {
    add_ln348_20_fu_2860_p2 = (!zext_ln348_1_fu_2839_p1.read().is_01() || !ap_const_lv7_44.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln348_1_fu_2839_p1.read()) + sc_bigint<7>(ap_const_lv7_44));
}

void lstm_kernel::thread_add_ln348_21_fu_2897_p2() {
    add_ln348_21_fu_2897_p2 = (!zext_ln348_1_reg_6132.read().is_01() || !ap_const_lv7_4C.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln348_1_reg_6132.read()) + sc_bigint<7>(ap_const_lv7_4C));
}

void lstm_kernel::thread_add_ln348_2_fu_2345_p2() {
    add_ln348_2_fu_2345_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_5.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_5));
}

void lstm_kernel::thread_add_ln348_3_fu_2358_p2() {
    add_ln348_3_fu_2358_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_6.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_6));
}

void lstm_kernel::thread_add_ln348_4_fu_2363_p2() {
    add_ln348_4_fu_2363_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_7.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_7));
}

void lstm_kernel::thread_add_ln348_5_fu_2376_p2() {
    add_ln348_5_fu_2376_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_8.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_8));
}

void lstm_kernel::thread_add_ln348_6_fu_2381_p2() {
    add_ln348_6_fu_2381_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_9.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_9));
}

void lstm_kernel::thread_add_ln348_7_fu_2402_p2() {
    add_ln348_7_fu_2402_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_A.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_A));
}

void lstm_kernel::thread_add_ln348_8_fu_2407_p2() {
    add_ln348_8_fu_2407_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_B.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_B));
}

void lstm_kernel::thread_add_ln348_9_fu_2428_p2() {
    add_ln348_9_fu_2428_p2 = (!add_ln348_reg_5720.read().is_01() || !ap_const_lv8_C.is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln348_reg_5720.read()) + sc_biguint<8>(ap_const_lv8_C));
}

void lstm_kernel::thread_add_ln348_fu_2300_p2() {
    add_ln348_fu_2300_p2 = (!zext_ln348_4_fu_2284_p1.read().is_01() || !zext_ln348_5_fu_2296_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln348_4_fu_2284_p1.read()) + sc_biguint<8>(zext_ln348_5_fu_2296_p1.read()));
}

void lstm_kernel::thread_add_ln352_fu_2939_p2() {
    add_ln352_fu_2939_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_1831_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_indvar_flatten_phi_fu_1831_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void lstm_kernel::thread_add_ln357_10_fu_3490_p2() {
    add_ln357_10_fu_3490_p2 = (!reg_2031.read().is_01() || !trunc_ln357_9_reg_6728.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2031.read()) + sc_biguint<16>(trunc_ln357_9_reg_6728.read()));
}

void lstm_kernel::thread_add_ln357_11_fu_3508_p2() {
    add_ln357_11_fu_3508_p2 = (!reg_2017.read().is_01() || !trunc_ln357_s_reg_6743.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2017.read()) + sc_biguint<16>(trunc_ln357_s_reg_6743.read()));
}

void lstm_kernel::thread_add_ln357_12_fu_3723_p2() {
    add_ln357_12_fu_3723_p2 = (!reg_2045.read().is_01() || !trunc_ln357_10_reg_6758.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2045.read()) + sc_biguint<16>(trunc_ln357_10_reg_6758.read()));
}

void lstm_kernel::thread_add_ln357_13_fu_3651_p2() {
    add_ln357_13_fu_3651_p2 = (!reg_2031.read().is_01() || !trunc_ln357_11_reg_6773.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2031.read()) + sc_biguint<16>(trunc_ln357_11_reg_6773.read()));
}

void lstm_kernel::thread_add_ln357_14_fu_3728_p2() {
    add_ln357_14_fu_3728_p2 = (!reg_1999.read().is_01() || !trunc_ln357_12_reg_6783.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1999.read()) + sc_biguint<16>(trunc_ln357_12_reg_6783.read()));
}

void lstm_kernel::thread_add_ln357_15_fu_3656_p2() {
    add_ln357_15_fu_3656_p2 = (!reg_2036.read().is_01() || !trunc_ln357_13_reg_6793.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2036.read()) + sc_biguint<16>(trunc_ln357_13_reg_6793.read()));
}

void lstm_kernel::thread_add_ln357_16_fu_3733_p2() {
    add_ln357_16_fu_3733_p2 = (!reg_2045.read().is_01() || !trunc_ln357_14_reg_6803.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2045.read()) + sc_biguint<16>(trunc_ln357_14_reg_6803.read()));
}

void lstm_kernel::thread_add_ln357_17_fu_3683_p2() {
    add_ln357_17_fu_3683_p2 = (!reg_2031.read().is_01() || !trunc_ln357_15_reg_6824.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2031.read()) + sc_biguint<16>(trunc_ln357_15_reg_6824.read()));
}

void lstm_kernel::thread_add_ln357_18_fu_3738_p2() {
    add_ln357_18_fu_3738_p2 = (!reg_1999.read().is_01() || !trunc_ln357_16_reg_6845.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1999.read()) + sc_biguint<16>(trunc_ln357_16_reg_6845.read()));
}

void lstm_kernel::thread_add_ln357_19_fu_3688_p2() {
    add_ln357_19_fu_3688_p2 = (!reg_2036.read().is_01() || !trunc_ln357_17_reg_6855.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2036.read()) + sc_biguint<16>(trunc_ln357_17_reg_6855.read()));
}

void lstm_kernel::thread_add_ln357_1_fu_3287_p2() {
    add_ln357_1_fu_3287_p2 = (!reg_1994.read().is_01() || !trunc_ln1_reg_6488.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1994.read()) + sc_biguint<16>(trunc_ln1_reg_6488.read()));
}

void lstm_kernel::thread_add_ln357_20_fu_3743_p2() {
    add_ln357_20_fu_3743_p2 = (!reg_2036.read().is_01() || !trunc_ln357_18_reg_6875.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2036.read()) + sc_biguint<16>(trunc_ln357_18_reg_6875.read()));
}

void lstm_kernel::thread_add_ln357_21_fu_3033_p2() {
    add_ln357_21_fu_3033_p2 = (!zext_ln357_1_fu_3018_p1.read().is_01() || !zext_ln357_3_fu_3029_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln357_1_fu_3018_p1.read()) + sc_biguint<12>(zext_ln357_3_fu_3029_p1.read()));
}

void lstm_kernel::thread_add_ln357_22_fu_3105_p2() {
    add_ln357_22_fu_3105_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_4.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_4));
}

void lstm_kernel::thread_add_ln357_23_fu_3110_p2() {
    add_ln357_23_fu_3110_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_5.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_5));
}

void lstm_kernel::thread_add_ln357_24_fu_3123_p2() {
    add_ln357_24_fu_3123_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_6));
}

void lstm_kernel::thread_add_ln357_25_fu_3128_p2() {
    add_ln357_25_fu_3128_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_7.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_7));
}

void lstm_kernel::thread_add_ln357_26_fu_3163_p2() {
    add_ln357_26_fu_3163_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_8.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_8));
}

void lstm_kernel::thread_add_ln357_27_fu_3168_p2() {
    add_ln357_27_fu_3168_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_9.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_9));
}

void lstm_kernel::thread_add_ln357_28_fu_3207_p2() {
    add_ln357_28_fu_3207_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_A));
}

void lstm_kernel::thread_add_ln357_29_fu_3212_p2() {
    add_ln357_29_fu_3212_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_B));
}

void lstm_kernel::thread_add_ln357_2_fu_3323_p2() {
    add_ln357_2_fu_3323_p2 = (!reg_2031.read().is_01() || !trunc_ln357_1_reg_6523.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2031.read()) + sc_biguint<16>(trunc_ln357_1_reg_6523.read()));
}

void lstm_kernel::thread_add_ln357_30_fu_3242_p2() {
    add_ln357_30_fu_3242_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_C));
}

void lstm_kernel::thread_add_ln357_31_fu_3247_p2() {
    add_ln357_31_fu_3247_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_D));
}

void lstm_kernel::thread_add_ln357_32_fu_3277_p2() {
    add_ln357_32_fu_3277_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_E.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_E));
}

void lstm_kernel::thread_add_ln357_33_fu_3282_p2() {
    add_ln357_33_fu_3282_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_F.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_F));
}

void lstm_kernel::thread_add_ln357_34_fu_3313_p2() {
    add_ln357_34_fu_3313_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void lstm_kernel::thread_add_ln357_35_fu_3318_p2() {
    add_ln357_35_fu_3318_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void lstm_kernel::thread_add_ln357_36_fu_3349_p2() {
    add_ln357_36_fu_3349_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_12.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_12));
}

void lstm_kernel::thread_add_ln357_37_fu_3354_p2() {
    add_ln357_37_fu_3354_p2 = (!add_ln357_21_reg_6233.read().is_01() || !ap_const_lv12_13.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln357_21_reg_6233.read()) + sc_biguint<12>(ap_const_lv12_13));
}

void lstm_kernel::thread_add_ln357_38_fu_3139_p2() {
    add_ln357_38_fu_3139_p2 = (!zext_ln357_11_fu_3136_p1.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<4>(): (sc_biguint<4>(zext_ln357_11_fu_3136_p1.read()) + sc_biguint<4>(ap_const_lv4_4));
}

void lstm_kernel::thread_add_ln357_39_fu_3145_p2() {
    add_ln357_39_fu_3145_p2 = (!zext_ln357_10_fu_3133_p1.read().is_01() || !ap_const_lv5_C.is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln357_10_fu_3133_p1.read()) + sc_biguint<5>(ap_const_lv5_C));
}

void lstm_kernel::thread_add_ln357_3_fu_3359_p2() {
    add_ln357_3_fu_3359_p2 = (!reg_1999.read().is_01() || !trunc_ln357_2_reg_6568.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1999.read()) + sc_biguint<16>(trunc_ln357_2_reg_6568.read()));
}

void lstm_kernel::thread_add_ln357_40_fu_3184_p2() {
    add_ln357_40_fu_3184_p2 = (!zext_ln357_10_reg_6329.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln357_10_reg_6329.read()) + sc_bigint<5>(ap_const_lv5_14));
}

void lstm_kernel::thread_add_ln357_41_fu_3189_p2() {
    add_ln357_41_fu_3189_p2 = (!zext_ln357_9_fu_3173_p1.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln357_9_fu_3173_p1.read()) + sc_biguint<6>(ap_const_lv6_1C));
}

void lstm_kernel::thread_add_ln357_42_fu_3225_p2() {
    add_ln357_42_fu_3225_p2 = (!zext_ln357_9_reg_6388.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln357_9_reg_6388.read()) + sc_bigint<6>(ap_const_lv6_24));
}

void lstm_kernel::thread_add_ln357_43_fu_3646_p2() {
    add_ln357_43_fu_3646_p2 = (!zext_ln357_9_reg_6388_pp1_iter1_reg.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln357_9_reg_6388_pp1_iter1_reg.read()) + sc_bigint<6>(ap_const_lv6_2C));
}

void lstm_kernel::thread_add_ln357_44_fu_3677_p2() {
    add_ln357_44_fu_3677_p2 = (!zext_ln357_8_fu_3670_p1.read().is_01() || !ap_const_lv7_3C.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln357_8_fu_3670_p1.read()) + sc_biguint<7>(ap_const_lv7_3C));
}

void lstm_kernel::thread_add_ln357_45_fu_3705_p2() {
    add_ln357_45_fu_3705_p2 = (!zext_ln357_8_reg_6880.read().is_01() || !ap_const_lv7_44.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln357_8_reg_6880.read()) + sc_bigint<7>(ap_const_lv7_44));
}

void lstm_kernel::thread_add_ln357_46_fu_3710_p2() {
    add_ln357_46_fu_3710_p2 = (!zext_ln357_8_reg_6880.read().is_01() || !ap_const_lv7_4C.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln357_8_reg_6880.read()) + sc_bigint<7>(ap_const_lv7_4C));
}

void lstm_kernel::thread_add_ln357_4_fu_3385_p2() {
    add_ln357_4_fu_3385_p2 = (!reg_2036.read().is_01() || !trunc_ln357_3_reg_6608.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2036.read()) + sc_biguint<16>(trunc_ln357_3_reg_6608.read()));
}

void lstm_kernel::thread_add_ln357_5_fu_3403_p2() {
    add_ln357_5_fu_3403_p2 = (!reg_2004.read().is_01() || !trunc_ln357_4_reg_6638.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_2004.read()) + sc_biguint<16>(trunc_ln357_4_reg_6638.read()));
}

void lstm_kernel::thread_add_ln357_6_fu_3421_p2() {
    add_ln357_6_fu_3421_p2 = (!reg_1994.read().is_01() || !trunc_ln357_5_reg_6658.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1994.read()) + sc_biguint<16>(trunc_ln357_5_reg_6658.read()));
}

void lstm_kernel::thread_add_ln357_7_fu_3439_p2() {
    add_ln357_7_fu_3439_p2 = (!reg_2009.read().is_01() || !trunc_ln357_6_reg_6678.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2009.read()) + sc_biguint<16>(trunc_ln357_6_reg_6678.read()));
}

void lstm_kernel::thread_add_ln357_8_fu_3456_p2() {
    add_ln357_8_fu_3456_p2 = (!lstm_state_load_47_reg_6533.read().is_01() || !trunc_ln357_7_reg_6698.read().is_01())? sc_lv<16>(): (sc_biguint<16>(lstm_state_load_47_reg_6533.read()) + sc_biguint<16>(trunc_ln357_7_reg_6698.read()));
}

void lstm_kernel::thread_add_ln357_9_fu_3473_p2() {
    add_ln357_9_fu_3473_p2 = (!reg_2013.read().is_01() || !trunc_ln357_8_reg_6713.read().is_01())? sc_lv<16>(): (sc_biguint<16>(reg_2013.read()) + sc_biguint<16>(trunc_ln357_8_reg_6713.read()));
}

void lstm_kernel::thread_add_ln357_fu_2993_p2() {
    add_ln357_fu_2993_p2 = (!zext_ln357_fu_2989_p1.read().is_01() || !shl_ln357_mid2_fu_2971_p3.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln357_fu_2989_p1.read()) + sc_biguint<7>(shl_ln357_mid2_fu_2971_p3.read()));
}

void lstm_kernel::thread_add_ln366_10_fu_4210_p2() {
    add_ln366_10_fu_4210_p2 = (!reg_2021.read().is_01() || !reg_2036.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_2021.read()) + sc_biguint<16>(reg_2036.read()));
}

void lstm_kernel::thread_add_ln366_12_fu_4242_p2() {
    add_ln366_12_fu_4242_p2 = (!reg_2026.read().is_01() || !reg_1999.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_2026.read()) + sc_bigint<16>(reg_1999.read()));
}

void lstm_kernel::thread_add_ln366_13_fu_4258_p2() {
    add_ln366_13_fu_4258_p2 = (!reg_1980.read().is_01() || !reg_2009.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1980.read()) + sc_biguint<16>(reg_2009.read()));
}

void lstm_kernel::thread_add_ln366_16_fu_4284_p2() {
    add_ln366_16_fu_4284_p2 = (!reg_1984.read().is_01() || !reg_2031.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1984.read()) + sc_biguint<16>(reg_2031.read()));
}

void lstm_kernel::thread_add_ln366_21_fu_3808_p2() {
    add_ln366_21_fu_3808_p2 = (!zext_ln366_fu_3793_p1.read().is_01() || !zext_ln366_2_fu_3804_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln366_fu_3793_p1.read()) + sc_biguint<12>(zext_ln366_2_fu_3804_p1.read()));
}

void lstm_kernel::thread_add_ln366_22_fu_3883_p2() {
    add_ln366_22_fu_3883_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_4.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_4));
}

void lstm_kernel::thread_add_ln366_23_fu_3888_p2() {
    add_ln366_23_fu_3888_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_5.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_5));
}

void lstm_kernel::thread_add_ln366_24_fu_3918_p2() {
    add_ln366_24_fu_3918_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_6.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_6));
}

void lstm_kernel::thread_add_ln366_25_fu_3923_p2() {
    add_ln366_25_fu_3923_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_7.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_7));
}

void lstm_kernel::thread_add_ln366_26_fu_3954_p2() {
    add_ln366_26_fu_3954_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_8.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_8));
}

void lstm_kernel::thread_add_ln366_27_fu_3959_p2() {
    add_ln366_27_fu_3959_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_9.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_9));
}

void lstm_kernel::thread_add_ln366_28_fu_3989_p2() {
    add_ln366_28_fu_3989_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_A));
}

void lstm_kernel::thread_add_ln366_29_fu_3994_p2() {
    add_ln366_29_fu_3994_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_B));
}

void lstm_kernel::thread_add_ln366_30_fu_4061_p2() {
    add_ln366_30_fu_4061_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_C));
}

void lstm_kernel::thread_add_ln366_31_fu_4066_p2() {
    add_ln366_31_fu_4066_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_D));
}

void lstm_kernel::thread_add_ln366_32_fu_4092_p2() {
    add_ln366_32_fu_4092_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_E.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_E));
}

void lstm_kernel::thread_add_ln366_33_fu_4097_p2() {
    add_ln366_33_fu_4097_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_F.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_F));
}

void lstm_kernel::thread_add_ln366_34_fu_4148_p2() {
    add_ln366_34_fu_4148_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void lstm_kernel::thread_add_ln366_35_fu_4153_p2() {
    add_ln366_35_fu_4153_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void lstm_kernel::thread_add_ln366_36_fu_4190_p2() {
    add_ln366_36_fu_4190_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_12.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_12));
}

void lstm_kernel::thread_add_ln366_37_fu_4195_p2() {
    add_ln366_37_fu_4195_p2 = (!add_ln366_21_reg_7000.read().is_01() || !ap_const_lv12_13.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln366_21_reg_7000.read()) + sc_biguint<12>(ap_const_lv12_13));
}

void lstm_kernel::thread_add_ln366_38_fu_4007_p2() {
    add_ln366_38_fu_4007_p2 = (!zext_ln366_8_fu_4003_p1.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln366_8_fu_4003_p1.read()) + sc_bigint<5>(ap_const_lv5_14));
}

void lstm_kernel::thread_add_ln366_39_fu_4013_p2() {
    add_ln366_39_fu_4013_p2 = (!zext_ln366_7_fu_3999_p1.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln366_7_fu_3999_p1.read()) + sc_bigint<6>(ap_const_lv6_24));
}

void lstm_kernel::thread_add_ln366_40_fu_4079_p2() {
    add_ln366_40_fu_4079_p2 = (!zext_ln366_7_reg_7168.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln366_7_reg_7168.read()) + sc_bigint<6>(ap_const_lv6_2C));
}

void lstm_kernel::thread_add_ln366_41_fu_4114_p2() {
    add_ln366_41_fu_4114_p2 = (!zext_ln362_reg_6971.read().is_01() || !ap_const_lv7_44.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln362_reg_6971.read()) + sc_bigint<7>(ap_const_lv7_44));
}

void lstm_kernel::thread_add_ln366_42_fu_4119_p2() {
    add_ln366_42_fu_4119_p2 = (!zext_ln362_reg_6971.read().is_01() || !ap_const_lv7_4C.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln362_reg_6971.read()) + sc_bigint<7>(ap_const_lv7_4C));
}

void lstm_kernel::thread_add_ln366_4_fu_4037_p2() {
    add_ln366_4_fu_4037_p2 = (!reg_1984.read().is_01() || !reg_2009.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1984.read()) + sc_biguint<16>(reg_2009.read()));
}

void lstm_kernel::thread_add_ln366_8_fu_4124_p2() {
    add_ln366_8_fu_4124_p2 = (!reg_2021.read().is_01() || !reg_1994.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_2021.read()) + sc_bigint<16>(reg_1994.read()));
}

void lstm_kernel::thread_add_ln366_9_fu_4166_p2() {
    add_ln366_9_fu_4166_p2 = (!reg_1980.read().is_01() || !reg_1999.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1980.read()) + sc_bigint<16>(reg_1999.read()));
}

void lstm_kernel::thread_add_ln366_fu_3764_p2() {
    add_ln366_fu_3764_p2 = (!zext_ln362_fu_3760_p1.read().is_01() || !ap_const_lv7_54.is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln362_fu_3760_p1.read()) + sc_bigint<7>(ap_const_lv7_54));
}

void lstm_kernel::thread_add_ln409_fu_4722_p2() {
    add_ln409_fu_4722_p2 = (!trunc_ln409_2_reg_7616.read().is_01() || !trunc_ln409_1_reg_7606.read().is_01())? sc_lv<20>(): (sc_biguint<20>(trunc_ln409_2_reg_7616.read()) + sc_biguint<20>(trunc_ln409_1_reg_7606.read()));
}

void lstm_kernel::thread_and_ln375_fu_4449_p2() {
    and_ln375_fu_4449_p2 = (grp_fu_2178_p2.read() & xor_ln375_fu_4443_p2.read());
}

void lstm_kernel::thread_and_ln377_fu_4539_p2() {
    and_ln377_fu_4539_p2 = (grp_fu_2184_p2.read() & tmp_52_reg_7467.read());
}

void lstm_kernel::thread_and_ln384_fu_4474_p2() {
    and_ln384_fu_4474_p2 = (grp_fu_2178_p2.read() & xor_ln384_fu_4468_p2.read());
}

void lstm_kernel::thread_and_ln386_fu_4560_p2() {
    and_ln386_fu_4560_p2 = (icmp_ln386_fu_4554_p2.read() & tmp_56_reg_7472.read());
}

void lstm_kernel::thread_and_ln393_fu_4631_p2() {
    and_ln393_fu_4631_p2 = (grp_fu_2178_p2.read() & xor_ln393_fu_4625_p2.read());
}

void lstm_kernel::thread_and_ln395_fu_4685_p2() {
    and_ln395_fu_4685_p2 = (grp_fu_2184_p2.read() & tmp_60_reg_7582.read());
}

void lstm_kernel::thread_and_ln402_fu_4505_p2() {
    and_ln402_fu_4505_p2 = (icmp_ln402_fu_4499_p2.read() & xor_ln402_fu_4493_p2.read());
}

void lstm_kernel::thread_and_ln404_fu_4578_p2() {
    and_ln404_fu_4578_p2 = (grp_fu_2184_p2.read() & tmp_64_reg_7495.read());
}

void lstm_kernel::thread_and_ln413_fu_4800_p2() {
    and_ln413_fu_4800_p2 = (icmp_ln413_fu_4795_p2.read() & xor_ln413_fu_4789_p2.read());
}

void lstm_kernel::thread_and_ln415_fu_4850_p2() {
    and_ln415_fu_4850_p2 = (icmp_ln415_fu_4844_p2.read() & tmp_68_reg_7672.read());
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[46];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[47];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[48];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[49];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[50];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[51];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[52];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[53];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[54];
}

void lstm_kernel::thread_ap_CS_fsm_pp0_stage9() {
    ap_CS_fsm_pp0_stage9 = ap_CS_fsm.read()[55];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[57];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[58];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage10() {
    ap_CS_fsm_pp1_stage10 = ap_CS_fsm.read()[67];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage11() {
    ap_CS_fsm_pp1_stage11 = ap_CS_fsm.read()[68];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage12() {
    ap_CS_fsm_pp1_stage12 = ap_CS_fsm.read()[69];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage13() {
    ap_CS_fsm_pp1_stage13 = ap_CS_fsm.read()[70];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage14() {
    ap_CS_fsm_pp1_stage14 = ap_CS_fsm.read()[71];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage15() {
    ap_CS_fsm_pp1_stage15 = ap_CS_fsm.read()[72];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage16() {
    ap_CS_fsm_pp1_stage16 = ap_CS_fsm.read()[73];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage17() {
    ap_CS_fsm_pp1_stage17 = ap_CS_fsm.read()[74];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage18() {
    ap_CS_fsm_pp1_stage18 = ap_CS_fsm.read()[75];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage19() {
    ap_CS_fsm_pp1_stage19 = ap_CS_fsm.read()[76];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage2() {
    ap_CS_fsm_pp1_stage2 = ap_CS_fsm.read()[59];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage3() {
    ap_CS_fsm_pp1_stage3 = ap_CS_fsm.read()[60];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage4() {
    ap_CS_fsm_pp1_stage4 = ap_CS_fsm.read()[61];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage5() {
    ap_CS_fsm_pp1_stage5 = ap_CS_fsm.read()[62];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage6() {
    ap_CS_fsm_pp1_stage6 = ap_CS_fsm.read()[63];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage7() {
    ap_CS_fsm_pp1_stage7 = ap_CS_fsm.read()[64];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage8() {
    ap_CS_fsm_pp1_stage8 = ap_CS_fsm.read()[65];
}

void lstm_kernel::thread_ap_CS_fsm_pp1_stage9() {
    ap_CS_fsm_pp1_stage9 = ap_CS_fsm.read()[66];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[99];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[100];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage10() {
    ap_CS_fsm_pp3_stage10 = ap_CS_fsm.read()[109];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage11() {
    ap_CS_fsm_pp3_stage11 = ap_CS_fsm.read()[110];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage12() {
    ap_CS_fsm_pp3_stage12 = ap_CS_fsm.read()[111];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage13() {
    ap_CS_fsm_pp3_stage13 = ap_CS_fsm.read()[112];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage14() {
    ap_CS_fsm_pp3_stage14 = ap_CS_fsm.read()[113];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage15() {
    ap_CS_fsm_pp3_stage15 = ap_CS_fsm.read()[114];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage16() {
    ap_CS_fsm_pp3_stage16 = ap_CS_fsm.read()[115];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage17() {
    ap_CS_fsm_pp3_stage17 = ap_CS_fsm.read()[116];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[101];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage3() {
    ap_CS_fsm_pp3_stage3 = ap_CS_fsm.read()[102];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage4() {
    ap_CS_fsm_pp3_stage4 = ap_CS_fsm.read()[103];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage5() {
    ap_CS_fsm_pp3_stage5 = ap_CS_fsm.read()[104];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage6() {
    ap_CS_fsm_pp3_stage6 = ap_CS_fsm.read()[105];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage7() {
    ap_CS_fsm_pp3_stage7 = ap_CS_fsm.read()[106];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage8() {
    ap_CS_fsm_pp3_stage8 = ap_CS_fsm.read()[107];
}

void lstm_kernel::thread_ap_CS_fsm_pp3_stage9() {
    ap_CS_fsm_pp3_stage9 = ap_CS_fsm.read()[108];
}

void lstm_kernel::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[121];
}

void lstm_kernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void lstm_kernel::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void lstm_kernel::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[77];
}

void lstm_kernel::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[78];
}

void lstm_kernel::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[79];
}

void lstm_kernel::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[80];
}

void lstm_kernel::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void lstm_kernel::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[81];
}

void lstm_kernel::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[82];
}

void lstm_kernel::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[83];
}

void lstm_kernel::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[84];
}

void lstm_kernel::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[85];
}

void lstm_kernel::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[86];
}

void lstm_kernel::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[87];
}

void lstm_kernel::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[88];
}

void lstm_kernel::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[89];
}

void lstm_kernel::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[90];
}

void lstm_kernel::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[91];
}

void lstm_kernel::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[92];
}

void lstm_kernel::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[93];
}

void lstm_kernel::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[94];
}

void lstm_kernel::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[95];
}

void lstm_kernel::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[96];
}

void lstm_kernel::thread_ap_CS_fsm_state126() {
    ap_CS_fsm_state126 = ap_CS_fsm.read()[97];
}

void lstm_kernel::thread_ap_CS_fsm_state127() {
    ap_CS_fsm_state127 = ap_CS_fsm.read()[98];
}

void lstm_kernel::thread_ap_CS_fsm_state192() {
    ap_CS_fsm_state192 = ap_CS_fsm.read()[117];
}

void lstm_kernel::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[118];
}

void lstm_kernel::thread_ap_CS_fsm_state194() {
    ap_CS_fsm_state194 = ap_CS_fsm.read()[119];
}

void lstm_kernel::thread_ap_CS_fsm_state195() {
    ap_CS_fsm_state195 = ap_CS_fsm.read()[120];
}

void lstm_kernel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void lstm_kernel::thread_ap_CS_fsm_state203() {
    ap_CS_fsm_state203 = ap_CS_fsm.read()[122];
}

void lstm_kernel::thread_ap_CS_fsm_state204() {
    ap_CS_fsm_state204 = ap_CS_fsm.read()[123];
}

void lstm_kernel::thread_ap_CS_fsm_state205() {
    ap_CS_fsm_state205 = ap_CS_fsm.read()[124];
}

void lstm_kernel::thread_ap_CS_fsm_state206() {
    ap_CS_fsm_state206 = ap_CS_fsm.read()[125];
}

void lstm_kernel::thread_ap_CS_fsm_state207() {
    ap_CS_fsm_state207 = ap_CS_fsm.read()[126];
}

void lstm_kernel::thread_ap_CS_fsm_state208() {
    ap_CS_fsm_state208 = ap_CS_fsm.read()[127];
}

void lstm_kernel::thread_ap_CS_fsm_state209() {
    ap_CS_fsm_state209 = ap_CS_fsm.read()[128];
}

void lstm_kernel::thread_ap_CS_fsm_state210() {
    ap_CS_fsm_state210 = ap_CS_fsm.read()[129];
}

void lstm_kernel::thread_ap_CS_fsm_state211() {
    ap_CS_fsm_state211 = ap_CS_fsm.read()[130];
}

void lstm_kernel::thread_ap_CS_fsm_state212() {
    ap_CS_fsm_state212 = ap_CS_fsm.read()[131];
}

void lstm_kernel::thread_ap_CS_fsm_state213() {
    ap_CS_fsm_state213 = ap_CS_fsm.read()[132];
}

void lstm_kernel::thread_ap_CS_fsm_state214() {
    ap_CS_fsm_state214 = ap_CS_fsm.read()[133];
}

void lstm_kernel::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[134];
}

void lstm_kernel::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[135];
}

void lstm_kernel::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[136];
}

void lstm_kernel::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[137];
}

void lstm_kernel::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[138];
}

void lstm_kernel::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[139];
}

void lstm_kernel::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[140];
}

void lstm_kernel::thread_ap_CS_fsm_state222() {
    ap_CS_fsm_state222 = ap_CS_fsm.read()[141];
}

void lstm_kernel::thread_ap_CS_fsm_state223() {
    ap_CS_fsm_state223 = ap_CS_fsm.read()[142];
}

void lstm_kernel::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[143];
}

void lstm_kernel::thread_ap_CS_fsm_state225() {
    ap_CS_fsm_state225 = ap_CS_fsm.read()[144];
}

void lstm_kernel::thread_ap_CS_fsm_state226() {
    ap_CS_fsm_state226 = ap_CS_fsm.read()[145];
}

void lstm_kernel::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[146];
}

void lstm_kernel::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[147];
}

void lstm_kernel::thread_ap_CS_fsm_state229() {
    ap_CS_fsm_state229 = ap_CS_fsm.read()[148];
}

void lstm_kernel::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void lstm_kernel::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void lstm_kernel::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void lstm_kernel::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void lstm_kernel::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void lstm_kernel::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[56];
}

void lstm_kernel::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void lstm_kernel::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void lstm_kernel::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void lstm_kernel::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage8() {
    ap_block_pp0_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage8_11001() {
    ap_block_pp0_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage8_subdone() {
    ap_block_pp0_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage9() {
    ap_block_pp0_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage9_11001() {
    ap_block_pp0_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp0_stage9_subdone() {
    ap_block_pp0_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage1() {
    ap_block_pp1_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage10() {
    ap_block_pp1_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage10_11001() {
    ap_block_pp1_stage10_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage10_subdone() {
    ap_block_pp1_stage10_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage11() {
    ap_block_pp1_stage11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage11_11001() {
    ap_block_pp1_stage11_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage11_subdone() {
    ap_block_pp1_stage11_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage12() {
    ap_block_pp1_stage12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage12_11001() {
    ap_block_pp1_stage12_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage12_subdone() {
    ap_block_pp1_stage12_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage13() {
    ap_block_pp1_stage13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage13_11001() {
    ap_block_pp1_stage13_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage13_subdone() {
    ap_block_pp1_stage13_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage14() {
    ap_block_pp1_stage14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage14_11001() {
    ap_block_pp1_stage14_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage14_subdone() {
    ap_block_pp1_stage14_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage15() {
    ap_block_pp1_stage15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage15_11001() {
    ap_block_pp1_stage15_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage15_subdone() {
    ap_block_pp1_stage15_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage16() {
    ap_block_pp1_stage16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage16_11001() {
    ap_block_pp1_stage16_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage16_subdone() {
    ap_block_pp1_stage16_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage17() {
    ap_block_pp1_stage17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage17_11001() {
    ap_block_pp1_stage17_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage17_subdone() {
    ap_block_pp1_stage17_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage18() {
    ap_block_pp1_stage18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage18_11001() {
    ap_block_pp1_stage18_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage18_subdone() {
    ap_block_pp1_stage18_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage19() {
    ap_block_pp1_stage19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage19_11001() {
    ap_block_pp1_stage19_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage19_subdone() {
    ap_block_pp1_stage19_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage1_11001() {
    ap_block_pp1_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage1_subdone() {
    ap_block_pp1_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage2() {
    ap_block_pp1_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage2_11001() {
    ap_block_pp1_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage2_subdone() {
    ap_block_pp1_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage3() {
    ap_block_pp1_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage3_11001() {
    ap_block_pp1_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage3_subdone() {
    ap_block_pp1_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage4() {
    ap_block_pp1_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage4_11001() {
    ap_block_pp1_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage4_subdone() {
    ap_block_pp1_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage5() {
    ap_block_pp1_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage5_11001() {
    ap_block_pp1_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage5_subdone() {
    ap_block_pp1_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage6() {
    ap_block_pp1_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage6_11001() {
    ap_block_pp1_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage6_subdone() {
    ap_block_pp1_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage7() {
    ap_block_pp1_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage7_11001() {
    ap_block_pp1_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage7_subdone() {
    ap_block_pp1_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage8() {
    ap_block_pp1_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage8_11001() {
    ap_block_pp1_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage8_subdone() {
    ap_block_pp1_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage9() {
    ap_block_pp1_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage9_11001() {
    ap_block_pp1_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp1_stage9_subdone() {
    ap_block_pp1_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage1() {
    ap_block_pp3_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage10() {
    ap_block_pp3_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage10_11001() {
    ap_block_pp3_stage10_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage10_subdone() {
    ap_block_pp3_stage10_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage11() {
    ap_block_pp3_stage11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage11_11001() {
    ap_block_pp3_stage11_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage11_subdone() {
    ap_block_pp3_stage11_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage12() {
    ap_block_pp3_stage12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage12_11001() {
    ap_block_pp3_stage12_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage12_subdone() {
    ap_block_pp3_stage12_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage13() {
    ap_block_pp3_stage13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage13_11001() {
    ap_block_pp3_stage13_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage13_subdone() {
    ap_block_pp3_stage13_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage14() {
    ap_block_pp3_stage14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage14_11001() {
    ap_block_pp3_stage14_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage14_subdone() {
    ap_block_pp3_stage14_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage15() {
    ap_block_pp3_stage15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage15_11001() {
    ap_block_pp3_stage15_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage15_subdone() {
    ap_block_pp3_stage15_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage16() {
    ap_block_pp3_stage16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage16_11001() {
    ap_block_pp3_stage16_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage16_subdone() {
    ap_block_pp3_stage16_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage17() {
    ap_block_pp3_stage17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage17_11001() {
    ap_block_pp3_stage17_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage17_subdone() {
    ap_block_pp3_stage17_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage1_11001() {
    ap_block_pp3_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage1_subdone() {
    ap_block_pp3_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage2() {
    ap_block_pp3_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage2_11001() {
    ap_block_pp3_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage2_subdone() {
    ap_block_pp3_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage3() {
    ap_block_pp3_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage3_11001() {
    ap_block_pp3_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage3_subdone() {
    ap_block_pp3_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage4() {
    ap_block_pp3_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage4_11001() {
    ap_block_pp3_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage4_subdone() {
    ap_block_pp3_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage5() {
    ap_block_pp3_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage5_11001() {
    ap_block_pp3_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage5_subdone() {
    ap_block_pp3_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage6() {
    ap_block_pp3_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage6_11001() {
    ap_block_pp3_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage6_subdone() {
    ap_block_pp3_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage7() {
    ap_block_pp3_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage7_11001() {
    ap_block_pp3_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage7_subdone() {
    ap_block_pp3_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage8() {
    ap_block_pp3_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage8_11001() {
    ap_block_pp3_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage8_subdone() {
    ap_block_pp3_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage9() {
    ap_block_pp3_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage9_11001() {
    ap_block_pp3_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp3_stage9_subdone() {
    ap_block_pp3_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state100_pp1_stage15_iter1() {
    ap_block_state100_pp1_stage15_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state101_pp1_stage16_iter1() {
    ap_block_state101_pp1_stage16_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state102_pp1_stage17_iter1() {
    ap_block_state102_pp1_stage17_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state103_pp1_stage18_iter1() {
    ap_block_state103_pp1_stage18_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state104_pp1_stage19_iter1() {
    ap_block_state104_pp1_stage19_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state105_pp1_stage0_iter2() {
    ap_block_state105_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state128_pp3_stage0_iter0() {
    ap_block_state128_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state129_pp3_stage1_iter0() {
    ap_block_state129_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state130_pp3_stage2_iter0() {
    ap_block_state130_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state131_pp3_stage3_iter0() {
    ap_block_state131_pp3_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state132_pp3_stage4_iter0() {
    ap_block_state132_pp3_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state133_pp3_stage5_iter0() {
    ap_block_state133_pp3_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state134_pp3_stage6_iter0() {
    ap_block_state134_pp3_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state135_pp3_stage7_iter0() {
    ap_block_state135_pp3_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state136_pp3_stage8_iter0() {
    ap_block_state136_pp3_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state137_pp3_stage9_iter0() {
    ap_block_state137_pp3_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state138_pp3_stage10_iter0() {
    ap_block_state138_pp3_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state139_pp3_stage11_iter0() {
    ap_block_state139_pp3_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state140_pp3_stage12_iter0() {
    ap_block_state140_pp3_stage12_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state141_pp3_stage13_iter0() {
    ap_block_state141_pp3_stage13_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state142_pp3_stage14_iter0() {
    ap_block_state142_pp3_stage14_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state143_pp3_stage15_iter0() {
    ap_block_state143_pp3_stage15_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state144_pp3_stage16_iter0() {
    ap_block_state144_pp3_stage16_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state145_pp3_stage17_iter0() {
    ap_block_state145_pp3_stage17_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state146_pp3_stage0_iter1() {
    ap_block_state146_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state147_pp3_stage1_iter1() {
    ap_block_state147_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state148_pp3_stage6_iter1() {
    ap_block_state148_pp3_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state149_pp3_stage7_iter1() {
    ap_block_state149_pp3_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state150_pp3_stage8_iter1() {
    ap_block_state150_pp3_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state151_pp3_stage9_iter1() {
    ap_block_state151_pp3_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state152_pp3_stage2_iter1() {
    ap_block_state152_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state153_pp3_stage12_iter1() {
    ap_block_state153_pp3_stage12_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state154_pp3_stage3_iter1() {
    ap_block_state154_pp3_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state155_pp3_stage4_iter1() {
    ap_block_state155_pp3_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state156_pp3_stage5_iter1() {
    ap_block_state156_pp3_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state157_pp3_stage16_iter1() {
    ap_block_state157_pp3_stage16_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state158_pp3_stage17_iter1() {
    ap_block_state158_pp3_stage17_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state159_pp3_stage0_iter2() {
    ap_block_state159_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state160_pp3_stage1_iter2() {
    ap_block_state160_pp3_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state161_pp3_stage2_iter2() {
    ap_block_state161_pp3_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state162_pp3_stage3_iter2() {
    ap_block_state162_pp3_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state163_pp3_stage4_iter2() {
    ap_block_state163_pp3_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state164_pp3_stage5_iter2() {
    ap_block_state164_pp3_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state165_pp3_stage6_iter2() {
    ap_block_state165_pp3_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state166_pp3_stage7_iter2() {
    ap_block_state166_pp3_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state167_pp3_stage8_iter2() {
    ap_block_state167_pp3_stage8_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state168_pp3_stage16_iter2() {
    ap_block_state168_pp3_stage16_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state169_pp3_stage17_iter2() {
    ap_block_state169_pp3_stage17_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state170_pp3_stage0_iter3() {
    ap_block_state170_pp3_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state171_pp3_stage1_iter3() {
    ap_block_state171_pp3_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state172_pp3_stage17_iter3() {
    ap_block_state172_pp3_stage17_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state173_pp3_stage10_iter1() {
    ap_block_state173_pp3_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state174_pp3_stage13_iter1() {
    ap_block_state174_pp3_stage13_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state175_pp3_stage11_iter1() {
    ap_block_state175_pp3_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state176_pp3_stage14_iter1() {
    ap_block_state176_pp3_stage14_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state177_pp3_stage15_iter1() {
    ap_block_state177_pp3_stage15_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state178_pp3_stage9_iter2() {
    ap_block_state178_pp3_stage9_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state179_pp3_stage10_iter2() {
    ap_block_state179_pp3_stage10_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state180_pp3_stage11_iter2() {
    ap_block_state180_pp3_stage11_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state181_pp3_stage12_iter2() {
    ap_block_state181_pp3_stage12_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state182_pp3_stage13_iter2() {
    ap_block_state182_pp3_stage13_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state183_pp3_stage14_iter2() {
    ap_block_state183_pp3_stage14_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state184_pp3_stage15_iter2() {
    ap_block_state184_pp3_stage15_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state185_pp3_stage17_iter4() {
    ap_block_state185_pp3_stage17_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state186_pp3_stage0_iter5() {
    ap_block_state186_pp3_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state187_pp3_stage1_iter5() {
    ap_block_state187_pp3_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state188_pp3_stage2_iter5() {
    ap_block_state188_pp3_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state189_pp3_stage3_iter5() {
    ap_block_state189_pp3_stage3_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state190_pp3_stage4_iter5() {
    ap_block_state190_pp3_stage4_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state191_pp3_stage5_iter5() {
    ap_block_state191_pp3_stage5_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state196_pp4_stage0_iter0() {
    ap_block_state196_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state197_pp4_stage0_iter1() {
    ap_block_state197_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state198_pp4_stage0_iter2() {
    ap_block_state198_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state199_pp4_stage0_iter3() {
    ap_block_state199_pp4_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state200_pp4_stage0_iter4() {
    ap_block_state200_pp4_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state201_pp4_stage0_iter5() {
    ap_block_state201_pp4_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state202_pp4_stage0_iter6() {
    ap_block_state202_pp4_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state230_pp3_stage2_iter3() {
    ap_block_state230_pp3_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state231_pp3_stage3_iter3() {
    ap_block_state231_pp3_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state232_pp3_stage4_iter3() {
    ap_block_state232_pp3_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state233_pp3_stage5_iter3() {
    ap_block_state233_pp3_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state234_pp3_stage6_iter3() {
    ap_block_state234_pp3_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state235_pp3_stage7_iter3() {
    ap_block_state235_pp3_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state236_pp3_stage8_iter3() {
    ap_block_state236_pp3_stage8_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state237_pp3_stage9_iter3() {
    ap_block_state237_pp3_stage9_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state238_pp3_stage10_iter3() {
    ap_block_state238_pp3_stage10_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state239_pp3_stage11_iter3() {
    ap_block_state239_pp3_stage11_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state240_pp3_stage12_iter3() {
    ap_block_state240_pp3_stage12_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state241_pp3_stage13_iter3() {
    ap_block_state241_pp3_stage13_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state242_pp3_stage14_iter3() {
    ap_block_state242_pp3_stage14_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state243_pp3_stage15_iter3() {
    ap_block_state243_pp3_stage15_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state244_pp3_stage16_iter3() {
    ap_block_state244_pp3_stage16_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state245_pp3_stage0_iter4() {
    ap_block_state245_pp3_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state246_pp3_stage1_iter4() {
    ap_block_state246_pp3_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state247_pp3_stage2_iter4() {
    ap_block_state247_pp3_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state248_pp3_stage3_iter4() {
    ap_block_state248_pp3_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state249_pp3_stage4_iter4() {
    ap_block_state249_pp3_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state250_pp3_stage5_iter4() {
    ap_block_state250_pp3_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state251_pp3_stage6_iter4() {
    ap_block_state251_pp3_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state252_pp3_stage7_iter4() {
    ap_block_state252_pp3_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state253_pp3_stage8_iter4() {
    ap_block_state253_pp3_stage8_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state254_pp3_stage9_iter4() {
    ap_block_state254_pp3_stage9_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state255_pp3_stage10_iter4() {
    ap_block_state255_pp3_stage10_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state256_pp3_stage11_iter4() {
    ap_block_state256_pp3_stage11_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state257_pp3_stage12_iter4() {
    ap_block_state257_pp3_stage12_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state258_pp3_stage13_iter4() {
    ap_block_state258_pp3_stage13_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state259_pp3_stage14_iter4() {
    ap_block_state259_pp3_stage14_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state260_pp3_stage15_iter4() {
    ap_block_state260_pp3_stage15_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state261_pp3_stage16_iter4() {
    ap_block_state261_pp3_stage16_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state47_pp0_stage0_iter0() {
    ap_block_state47_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state48_pp0_stage1_iter0() {
    ap_block_state48_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state49_pp0_stage2_iter0() {
    ap_block_state49_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state50_pp0_stage3_iter0() {
    ap_block_state50_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state51_pp0_stage4_iter0() {
    ap_block_state51_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state52_pp0_stage5_iter0() {
    ap_block_state52_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state53_pp0_stage6_iter0() {
    ap_block_state53_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state54_pp0_stage7_iter0() {
    ap_block_state54_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state55_pp0_stage8_iter0() {
    ap_block_state55_pp0_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state56_pp0_stage9_iter0() {
    ap_block_state56_pp0_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state57_pp0_stage0_iter1() {
    ap_block_state57_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state58_pp0_stage1_iter1() {
    ap_block_state58_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state59_pp0_stage2_iter1() {
    ap_block_state59_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state60_pp0_stage3_iter1() {
    ap_block_state60_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state61_pp0_stage4_iter1() {
    ap_block_state61_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state62_pp0_stage5_iter1() {
    ap_block_state62_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state63_pp0_stage6_iter1() {
    ap_block_state63_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state65_pp1_stage0_iter0() {
    ap_block_state65_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state66_pp1_stage1_iter0() {
    ap_block_state66_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state67_pp1_stage2_iter0() {
    ap_block_state67_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state68_pp1_stage3_iter0() {
    ap_block_state68_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state69_pp1_stage4_iter0() {
    ap_block_state69_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state70_pp1_stage5_iter0() {
    ap_block_state70_pp1_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state71_pp1_stage6_iter0() {
    ap_block_state71_pp1_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state72_pp1_stage7_iter0() {
    ap_block_state72_pp1_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state73_pp1_stage8_iter0() {
    ap_block_state73_pp1_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state74_pp1_stage9_iter0() {
    ap_block_state74_pp1_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state75_pp1_stage10_iter0() {
    ap_block_state75_pp1_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state76_pp1_stage11_iter0() {
    ap_block_state76_pp1_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state77_pp1_stage12_iter0() {
    ap_block_state77_pp1_stage12_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state78_pp1_stage13_iter0() {
    ap_block_state78_pp1_stage13_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state79_pp1_stage14_iter0() {
    ap_block_state79_pp1_stage14_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state80_pp1_stage15_iter0() {
    ap_block_state80_pp1_stage15_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state81_pp1_stage16_iter0() {
    ap_block_state81_pp1_stage16_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state82_pp1_stage17_iter0() {
    ap_block_state82_pp1_stage17_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state83_pp1_stage18_iter0() {
    ap_block_state83_pp1_stage18_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state84_pp1_stage19_iter0() {
    ap_block_state84_pp1_stage19_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state85_pp1_stage0_iter1() {
    ap_block_state85_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state86_pp1_stage1_iter1() {
    ap_block_state86_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state87_pp1_stage2_iter1() {
    ap_block_state87_pp1_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state88_pp1_stage3_iter1() {
    ap_block_state88_pp1_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state89_pp1_stage4_iter1() {
    ap_block_state89_pp1_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state90_pp1_stage5_iter1() {
    ap_block_state90_pp1_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state91_pp1_stage6_iter1() {
    ap_block_state91_pp1_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state92_pp1_stage7_iter1() {
    ap_block_state92_pp1_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state93_pp1_stage8_iter1() {
    ap_block_state93_pp1_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state94_pp1_stage9_iter1() {
    ap_block_state94_pp1_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state95_pp1_stage10_iter1() {
    ap_block_state95_pp1_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state96_pp1_stage11_iter1() {
    ap_block_state96_pp1_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state97_pp1_stage12_iter1() {
    ap_block_state97_pp1_stage12_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state98_pp1_stage13_iter1() {
    ap_block_state98_pp1_stage13_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_block_state99_pp1_stage14_iter1() {
    ap_block_state99_pp1_stage14_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void lstm_kernel::thread_ap_condition_pp0_exit_iter0_state47() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln344_fu_2264_p2.read())) {
        ap_condition_pp0_exit_iter0_state47 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state47 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_condition_pp1_exit_iter0_state65() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln352_fu_2933_p2.read())) {
        ap_condition_pp1_exit_iter0_state65 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state65 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_condition_pp3_exit_iter0_state128() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln371_fu_4361_p2.read())) {
        ap_condition_pp3_exit_iter0_state128 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state128 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_condition_pp4_exit_iter0_state196() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln423_fu_4891_p2.read())) {
        ap_condition_pp4_exit_iter0_state196 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state196 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void lstm_kernel::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void lstm_kernel::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void lstm_kernel::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void lstm_kernel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter5.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter6.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_ap_phi_mux_i_1_phi_fu_1819_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_1_phi_fu_1819_p4 = i_4_reg_5715.read();
    } else {
        ap_phi_mux_i_1_phi_fu_1819_p4 = i_1_reg_1815.read();
    }
}

void lstm_kernel::thread_ap_phi_mux_i_2_phi_fu_1854_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_2_phi_fu_1854_p4 = i_5_reg_6768.read();
    } else {
        ap_phi_mux_i_2_phi_fu_1854_p4 = i_2_reg_1850.read();
    }
}

void lstm_kernel::thread_ap_phi_mux_indvar_flatten_phi_fu_1831_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvar_flatten_phi_fu_1831_p4 = add_ln352_reg_6171.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_1831_p4 = indvar_flatten_reg_1827.read();
    }
}

void lstm_kernel::thread_ap_phi_mux_j_6_phi_fu_1877_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_j_6_phi_fu_1877_p4 = j_8_reg_7392.read();
    } else {
        ap_phi_mux_j_6_phi_fu_1877_p4 = j_6_reg_1873.read();
    }
}

void lstm_kernel::thread_ap_phi_mux_j_7_phi_fu_1900_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln423_reg_7711.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_j_7_phi_fu_1900_p4 = j_5_reg_7715.read();
    } else {
        ap_phi_mux_j_7_phi_fu_1900_p4 = j_7_reg_1896.read();
    }
}

void lstm_kernel::thread_ap_phi_mux_k_2_phi_fu_1842_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_2_phi_fu_1842_p4 = select_ln352_1_reg_6206.read();
    } else {
        ap_phi_mux_k_2_phi_fu_1842_p4 = k_2_reg_1838.read();
    }
}

void lstm_kernel::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void lstm_kernel::thread_c_state_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        c_state_address0 =  (sc_lv<5>) (zext_ln373_fu_4601_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        c_state_address0 = ap_const_lv5_12;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        c_state_address0 = ap_const_lv5_10;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        c_state_address0 = ap_const_lv5_E;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        c_state_address0 = ap_const_lv5_C;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        c_state_address0 = ap_const_lv5_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        c_state_address0 = ap_const_lv5_8;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        c_state_address0 = ap_const_lv5_6;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        c_state_address0 = ap_const_lv5_4;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        c_state_address0 = ap_const_lv5_2;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        c_state_address0 = ap_const_lv5_0;
    } else {
        c_state_address0 = "XXXXX";
    }
}

void lstm_kernel::thread_c_state_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_state_address1 = c_state_addr_reg_7543_pp3_iter2_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        c_state_address1 = ap_const_lv5_13;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        c_state_address1 = ap_const_lv5_11;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        c_state_address1 = ap_const_lv5_F;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        c_state_address1 = ap_const_lv5_D;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        c_state_address1 = ap_const_lv5_B;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        c_state_address1 = ap_const_lv5_9;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        c_state_address1 = ap_const_lv5_7;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        c_state_address1 = ap_const_lv5_5;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        c_state_address1 = ap_const_lv5_3;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        c_state_address1 = ap_const_lv5_1;
    } else {
        c_state_address1 = "XXXXX";
    }
}

void lstm_kernel::thread_c_state_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        c_state_ce0 = ap_const_logic_1;
    } else {
        c_state_ce0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_c_state_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)))) {
        c_state_ce1 = ap_const_logic_1;
    } else {
        c_state_ce1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_c_state_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        c_state_d1 = trunc_ln8_reg_7621.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        c_state_d1 = ap_const_lv16_0;
    } else {
        c_state_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_kernel::thread_c_state_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, mode_read_read_fu_452_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())))) {
        c_state_we0 = ap_const_logic_1;
    } else {
        c_state_we0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_c_state_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, mode_read_read_fu_452_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)))) {
        c_state_we1 = ap_const_logic_1;
    } else {
        c_state_we1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_grp_fu_2076_p2() {
    grp_fu_2076_p2 = (!reg_1980.read().is_01() || !reg_1994.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1980.read()) + sc_bigint<16>(reg_1994.read()));
}

void lstm_kernel::thread_grp_fu_2092_p2() {
    grp_fu_2092_p2 = (!reg_1984.read().is_01() || !reg_1999.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1984.read()) + sc_bigint<16>(reg_1999.read()));
}

void lstm_kernel::thread_grp_fu_2108_p2() {
    grp_fu_2108_p2 = (!reg_1980.read().is_01() || !reg_2004.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1980.read()) + sc_bigint<16>(reg_2004.read()));
}

void lstm_kernel::thread_grp_fu_2124_p2() {
    grp_fu_2124_p2 = (!reg_1980.read().is_01() || !reg_2013.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1980.read()) + sc_biguint<16>(reg_2013.read()));
}

void lstm_kernel::thread_grp_fu_2140_p2() {
    grp_fu_2140_p2 = (!reg_1980.read().is_01() || !reg_2017.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1980.read()) + sc_biguint<16>(reg_2017.read()));
}

void lstm_kernel::thread_grp_fu_2156_p2() {
    grp_fu_2156_p2 = (!reg_1984.read().is_01() || !reg_2004.read().is_01())? sc_lv<16>(): (sc_bigint<16>(reg_1984.read()) + sc_bigint<16>(reg_2004.read()));
}

void lstm_kernel::thread_grp_fu_2172_p2() {
    grp_fu_2172_p2 = (!reg_2049.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): (sc_bigint<6>(reg_2049.read()) > sc_bigint<6>(ap_const_lv6_0));
}

void lstm_kernel::thread_grp_fu_2178_p2() {
    grp_fu_2178_p2 = (!reg_2049.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): (sc_bigint<6>(reg_2049.read()) < sc_bigint<6>(ap_const_lv6_1));
}

void lstm_kernel::thread_grp_fu_2184_p2() {
    grp_fu_2184_p2 = (!reg_1994.read().is_01() || !ap_const_lv16_FC00.is_01())? sc_lv<1>(): (sc_bigint<16>(reg_1994.read()) > sc_bigint<16>(ap_const_lv16_FC00));
}

void lstm_kernel::thread_grp_fu_2190_p2() {
    grp_fu_2190_p2 = (!ap_const_lv13_0.is_01() || !reg_2061.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_0) - sc_biguint<13>(reg_2061.read()));
}

void lstm_kernel::thread_grp_fu_2196_p2() {
    grp_fu_2196_p2 = (!reg_1994.read().is_01() || !ap_const_lv16_FC01.is_01())? sc_lv<1>(): (sc_bigint<16>(reg_1994.read()) < sc_bigint<16>(ap_const_lv16_FC01));
}

void lstm_kernel::thread_grp_fu_2202_p2() {
    grp_fu_2202_p2 = (!reg_1999.read().is_01() || !ap_const_lv16_FC01.is_01())? sc_lv<1>(): (sc_bigint<16>(reg_1999.read()) < sc_bigint<16>(ap_const_lv16_FC01));
}

void lstm_kernel::thread_grp_fu_2251_ap_start() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_fu_2251_ap_start = ap_const_logic_1;
    } else {
        grp_fu_2251_ap_start = ap_const_logic_0;
    }
}

void lstm_kernel::thread_grp_fu_2251_p0() {
    grp_fu_2251_p0 = esl_concat<16,16>(sub_ln341_reg_5672.read(), ap_const_lv16_0);
}

void lstm_kernel::thread_grp_fu_5379_p0() {
    grp_fu_5379_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5385_p0() {
    grp_fu_5385_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5391_p0() {
    grp_fu_5391_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5397_p0() {
    grp_fu_5397_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5403_p0() {
    grp_fu_5403_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5409_p0() {
    grp_fu_5409_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5415_p0() {
    grp_fu_5415_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5421_p0() {
    grp_fu_5421_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5427_p0() {
    grp_fu_5427_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5433_p0() {
    grp_fu_5433_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5439_p0() {
    grp_fu_5439_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5445_p0() {
    grp_fu_5445_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5451_p0() {
    grp_fu_5451_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5457_p0() {
    grp_fu_5457_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5463_p0() {
    grp_fu_5463_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5469_p0() {
    grp_fu_5469_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5475_p0() {
    grp_fu_5475_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5481_p0() {
    grp_fu_5481_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5487_p0() {
    grp_fu_5487_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5493_p0() {
    grp_fu_5493_p0 =  (sc_lv<16>) (zext_ln344_reg_5687.read());
}

void lstm_kernel::thread_grp_fu_5506_p0() {
    grp_fu_5506_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5512_p0() {
    grp_fu_5512_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5518_p0() {
    grp_fu_5518_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5524_p0() {
    grp_fu_5524_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5530_p0() {
    grp_fu_5530_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5536_p0() {
    grp_fu_5536_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5542_p0() {
    grp_fu_5542_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5548_p0() {
    grp_fu_5548_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5554_p0() {
    grp_fu_5554_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5560_p0() {
    grp_fu_5560_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5566_p0() {
    grp_fu_5566_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5572_p0() {
    grp_fu_5572_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5578_p0() {
    grp_fu_5578_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5584_p0() {
    grp_fu_5584_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5590_p0() {
    grp_fu_5590_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5596_p0() {
    grp_fu_5596_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5602_p0() {
    grp_fu_5602_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5608_p0() {
    grp_fu_5608_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_grp_fu_5614_p0() {
    grp_fu_5614_p0 =  (sc_lv<16>) (sext_ln352_reg_6344.read());
}

void lstm_kernel::thread_h_state_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        h_state_address0 = h_state_addr_2_reg_7549_pp3_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage17.read(), ap_const_boolean_0))) {
        h_state_address0 = h_state_addr_2_reg_7549_pp3_iter4_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage15.read(), ap_const_boolean_0)))) {
        h_state_address0 = h_state_addr_2_reg_7549_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        h_state_address0 =  (sc_lv<5>) (zext_ln352_fu_2979_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        h_state_address0 = ap_const_lv5_12;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        h_state_address0 = ap_const_lv5_10;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        h_state_address0 = ap_const_lv5_E;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        h_state_address0 = ap_const_lv5_C;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        h_state_address0 = ap_const_lv5_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        h_state_address0 = ap_const_lv5_8;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        h_state_address0 = ap_const_lv5_6;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        h_state_address0 = ap_const_lv5_4;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        h_state_address0 = ap_const_lv5_2;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        h_state_address0 = ap_const_lv5_0;
    } else {
        h_state_address0 = "XXXXX";
    }
}

void lstm_kernel::thread_h_state_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        h_state_address1 =  (sc_lv<5>) (zext_ln425_fu_4920_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage16.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage14.read(), ap_const_boolean_0)))) {
        h_state_address1 = h_state_addr_2_reg_7549_pp3_iter2_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        h_state_address1 = ap_const_lv5_13;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        h_state_address1 = ap_const_lv5_11;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        h_state_address1 = ap_const_lv5_F;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        h_state_address1 = ap_const_lv5_D;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        h_state_address1 = ap_const_lv5_B;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        h_state_address1 = ap_const_lv5_9;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        h_state_address1 = ap_const_lv5_7;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        h_state_address1 = ap_const_lv5_5;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        h_state_address1 = ap_const_lv5_3;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        h_state_address1 = ap_const_lv5_1;
    } else {
        h_state_address1 = "XXXXX";
    }
}

void lstm_kernel::thread_h_state_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)))) {
        h_state_ce0 = ap_const_logic_1;
    } else {
        h_state_ce0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_h_state_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_11001.read(), ap_const_boolean_0)))) {
        h_state_ce1 = ap_const_logic_1;
    } else {
        h_state_ce1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_h_state_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        h_state_d0 = trunc_ln4_reg_7701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        h_state_d0 = ap_const_lv16_0;
    } else {
        h_state_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_kernel::thread_h_state_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage14.read(), ap_const_boolean_0))) {
        h_state_d1 = sext_ln416_fu_4869_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16.read(), ap_const_boolean_0))) {
        h_state_d1 = ap_const_lv16_F000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        h_state_d1 = zext_ln414_1_fu_4821_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        h_state_d1 = sext_ln411_fu_4778_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        h_state_d1 = ap_const_lv16_0;
    } else {
        h_state_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_kernel::thread_h_state_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, mode_read_read_fu_452_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388_pp3_iter5_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)))) {
        h_state_we0 = ap_const_logic_1;
    } else {
        h_state_we0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_h_state_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, mode_read_read_fu_452_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, init_read_read_fu_446_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln413_reg_7647.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln417_fu_4830_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln415_reg_7677.read())))) {
        h_state_we1 = ap_const_logic_1;
    } else {
        h_state_we1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_i_4_fu_2270_p2() {
    i_4_fu_2270_p2 = (!ap_phi_mux_i_1_phi_fu_1819_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(ap_phi_mux_i_1_phi_fu_1819_p4.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void lstm_kernel::thread_i_5_fu_3525_p2() {
    i_5_fu_3525_p2 = (!select_ln352_reg_6186.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(select_ln352_reg_6186.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void lstm_kernel::thread_i_6_fu_3754_p2() {
    i_6_fu_3754_p2 = (!i_3_reg_1861.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_3_reg_1861.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void lstm_kernel::thread_i_fu_5017_p2() {
    i_fu_5017_p2 = (!i_0_reg_1919.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_reg_1919.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_icmp_ln302_fu_4954_p2() {
    icmp_ln302_fu_4954_p2 = (!j_0_reg_1908.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_1908.read() == ap_const_lv5_14);
}

void lstm_kernel::thread_icmp_ln309_fu_5011_p2() {
    icmp_ln309_fu_5011_p2 = (!i_0_reg_1919.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_1919.read() == ap_const_lv5_14);
}

void lstm_kernel::thread_icmp_ln310_fu_5167_p2() {
    icmp_ln310_fu_5167_p2 = (!j_1_reg_1930.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(j_1_reg_1930.read() == ap_const_lv5_14);
}

void lstm_kernel::thread_icmp_ln318_fu_5314_p2() {
    icmp_ln318_fu_5314_p2 = (!j_2_reg_1941.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(j_2_reg_1941.read() == ap_const_lv5_14);
}

void lstm_kernel::thread_icmp_ln344_fu_2264_p2() {
    icmp_ln344_fu_2264_p2 = (!ap_phi_mux_i_1_phi_fu_1819_p4.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_1_phi_fu_1819_p4.read() == ap_const_lv3_4);
}

void lstm_kernel::thread_icmp_ln352_fu_2933_p2() {
    icmp_ln352_fu_2933_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_1831_p4.read().is_01() || !ap_const_lv7_50.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_1831_p4.read() == ap_const_lv7_50);
}

void lstm_kernel::thread_icmp_ln353_fu_2951_p2() {
    icmp_ln353_fu_2951_p2 = (!ap_phi_mux_i_2_phi_fu_1854_p4.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_2_phi_fu_1854_p4.read() == ap_const_lv3_4);
}

void lstm_kernel::thread_icmp_ln362_fu_3748_p2() {
    icmp_ln362_fu_3748_p2 = (!i_3_reg_1861.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_3_reg_1861.read() == ap_const_lv3_4);
}

void lstm_kernel::thread_icmp_ln371_fu_4361_p2() {
    icmp_ln371_fu_4361_p2 = (!ap_phi_mux_j_6_phi_fu_1877_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_j_6_phi_fu_1877_p4.read() == ap_const_lv5_14);
}

void lstm_kernel::thread_icmp_ln382_fu_4415_p2() {
    icmp_ln382_fu_4415_p2 = (!reg_2053.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): (sc_bigint<6>(reg_2053.read()) > sc_bigint<6>(ap_const_lv6_0));
}

void lstm_kernel::thread_icmp_ln386_fu_4554_p2() {
    icmp_ln386_fu_4554_p2 = (!reg_1999.read().is_01() || !ap_const_lv16_FC00.is_01())? sc_lv<1>(): (sc_bigint<16>(reg_1999.read()) > sc_bigint<16>(ap_const_lv16_FC00));
}

void lstm_kernel::thread_icmp_ln402_fu_4499_p2() {
    icmp_ln402_fu_4499_p2 = (!reg_2053.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): (sc_bigint<6>(reg_2053.read()) < sc_bigint<6>(ap_const_lv6_1));
}

void lstm_kernel::thread_icmp_ln411_fu_4756_p2() {
    icmp_ln411_fu_4756_p2 = (!tmp_65_reg_7631.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): (sc_bigint<5>(tmp_65_reg_7631.read()) > sc_bigint<5>(ap_const_lv5_0));
}

void lstm_kernel::thread_icmp_ln413_fu_4795_p2() {
    icmp_ln413_fu_4795_p2 = (!tmp_67_reg_7642.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<1>(): (sc_bigint<5>(tmp_67_reg_7642.read()) < sc_bigint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_icmp_ln415_fu_4844_p2() {
    icmp_ln415_fu_4844_p2 = (!reg_1989.read().is_01() || !ap_const_lv16_FC00.is_01())? sc_lv<1>(): (sc_bigint<16>(reg_1989.read()) > sc_bigint<16>(ap_const_lv16_FC00));
}

void lstm_kernel::thread_icmp_ln417_fu_4830_p2() {
    icmp_ln417_fu_4830_p2 = (!h_state_q0.read().is_01() || !ap_const_lv16_FC01.is_01())? sc_lv<1>(): (sc_bigint<16>(h_state_q0.read()) < sc_bigint<16>(ap_const_lv16_FC01));
}

void lstm_kernel::thread_icmp_ln423_fu_4891_p2() {
    icmp_ln423_fu_4891_p2 = (!ap_phi_mux_j_7_phi_fu_1900_p4.read().is_01() || !ap_const_lv5_14.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_j_7_phi_fu_1900_p4.read() == ap_const_lv5_14);
}

void lstm_kernel::thread_init_read_read_fu_446_p2() {
    init_read_read_fu_446_p2 = init.read();
}

void lstm_kernel::thread_j_3_fu_5320_p2() {
    j_3_fu_5320_p2 = (!j_2_reg_1941.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_2_reg_1941.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_j_4_fu_5173_p2() {
    j_4_fu_5173_p2 = (!j_1_reg_1930.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_1_reg_1930.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_j_5_fu_4897_p2() {
    j_5_fu_4897_p2 = (!ap_phi_mux_j_7_phi_fu_1900_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_j_7_phi_fu_1900_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_j_8_fu_4367_p2() {
    j_8_fu_4367_p2 = (!ap_phi_mux_j_6_phi_fu_1877_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_j_6_phi_fu_1877_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_j_fu_4960_p2() {
    j_fu_4960_p2 = (!j_0_reg_1908.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_reg_1908.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_k_fu_2945_p2() {
    k_fu_2945_p2 = (!ap_phi_mux_k_2_phi_fu_1842_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_2_phi_fu_1842_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lstm_kernel::thread_lstm_out() {
    lstm_out = lstm_output_0_reg_1885.read();
}

void lstm_kernel::thread_lstm_out_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, mode_read_read_fu_452_p2.read()))) {
        lstm_out_ap_vld = ap_const_logic_1;
    } else {
        lstm_out_ap_vld = ap_const_logic_0;
    }
}

void lstm_kernel::thread_lstm_output_1_fu_4941_p2() {
    lstm_output_1_fu_4941_p2 = (!trunc_ln3_reg_7745.read().is_01() || !lstm_output_0_reg_1885.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln3_reg_7745.read()) + sc_biguint<16>(lstm_output_0_reg_1885.read()));
}

void lstm_kernel::thread_lstm_state_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage17.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_5_reg_7430_pp3_iter3_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage14.read(), ap_const_boolean_0)))) {
        lstm_state_address0 = lstm_state_addr_4_reg_7409_pp3_iter1_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage16.read(), ap_const_boolean_0)))) {
        lstm_state_address0 = lstm_state_addr_5_reg_7430_pp3_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_1_reg_7403_pp3_iter1_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage15.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage13.read(), ap_const_boolean_0)))) {
        lstm_state_address0 = lstm_state_addr_5_reg_7430.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage12.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_6_reg_7415.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_47_fu_4426_p3.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0)))) {
        lstm_state_address0 = lstm_state_addr_4_reg_7409.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0)))) {
        lstm_state_address0 = lstm_state_addr_1_reg_7403.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_48_fu_4406_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln373_1_fu_4381_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        lstm_state_address0 = lstm_state_addr_42_reg_7189.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        lstm_state_address0 = lstm_state_addr_40_reg_7184.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        lstm_state_address0 = lstm_state_addr_38_reg_7138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        lstm_state_address0 = lstm_state_addr_36_reg_7112.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        lstm_state_address0 = lstm_state_addr_34_reg_7107.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        lstm_state_address0 = lstm_state_addr_32_reg_7081.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        lstm_state_address0 = lstm_state_addr_30_reg_7049.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        lstm_state_address0 = lstm_state_addr_28_reg_7044.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        lstm_state_address0 = lstm_state_addr_26_reg_7024.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        lstm_state_address0 = lstm_state_addr_24_reg_6983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln366_17_fu_4158_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln366_14_fu_4102_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln366_11_fu_4071_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_43_fu_4019_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_42_fu_3964_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_40_fu_3928_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln366_12_fu_3896_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_37_fu_3845_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_36_fu_3814_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln366_1_fu_3770_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage10.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln357_20_fu_3715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln357_18_fu_3696_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_32_fu_3609_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_30_fu_3580_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_54_reg_6283.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage19.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_53_reg_6483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage18.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_52_reg_6278.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage17.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_51_reg_6447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage16.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_50_reg_6262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_49_reg_6442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage14.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_48_reg_6257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage13.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_47_reg_6400.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_46_reg_6227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0))) {
        lstm_state_address0 = lstm_state_addr_44_reg_6222.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln357_16_fu_3252_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln357_14_fu_3217_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln357_12_fu_3176_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_28_fu_3069_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_26_fu_3039_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln357_2_fu_2999_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_14_fu_2920_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_13_fu_2884_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_12_fu_2843_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_11_fu_2796_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_10_fu_2757_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_s_fu_2713_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_9_fu_2664_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_8_fu_2613_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (tmp_7_fu_2546_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        lstm_state_address0 =  (sc_lv<7>) (zext_ln348_fu_2464_p1.read());
    } else {
        lstm_state_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void lstm_kernel::thread_lstm_state_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage17.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_5_reg_7430_pp3_iter4_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage16.read(), ap_const_boolean_0)))) {
        lstm_state_address1 = lstm_state_addr_5_reg_7430_pp3_iter2_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage13.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage14.read(), ap_const_boolean_0)))) {
        lstm_state_address1 = lstm_state_addr_6_reg_7415_pp3_iter1_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage12.read(), ap_const_boolean_0)))) {
        lstm_state_address1 = lstm_state_addr_4_reg_7409_pp3_iter1_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage15.read(), ap_const_boolean_0)))) {
        lstm_state_address1 = lstm_state_addr_1_reg_7403_pp3_iter1_reg.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0)))) {
        lstm_state_address1 = lstm_state_addr_6_reg_7415.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0)))) {
        lstm_state_address1 = lstm_state_addr_4_reg_7409.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_46_fu_4392_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        lstm_state_address1 = lstm_state_addr_43_reg_7313.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        lstm_state_address1 = lstm_state_addr_41_reg_7307.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        lstm_state_address1 = lstm_state_addr_39_reg_7143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        lstm_state_address1 = lstm_state_addr_37_reg_7267.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        lstm_state_address1 = lstm_state_addr_35_reg_7261.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        lstm_state_address1 = lstm_state_addr_33_reg_7231.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        lstm_state_address1 = lstm_state_addr_31_reg_7075.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        lstm_state_address1 = lstm_state_addr_29_reg_7225.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        lstm_state_address1 = lstm_state_addr_27_reg_7029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        lstm_state_address1 = lstm_state_addr_25_reg_6995.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln366_18_fu_4162_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln366_15_fu_4109_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln366_13_fu_4075_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_44_fu_4028_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln366_16_fu_3976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_41_fu_3937_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_39_fu_3901_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_38_fu_3854_p3.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read())) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln366_10_fu_3826_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln366_9_fu_3781_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        lstm_state_address1 = lstm_state_addr_63_reg_6933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage19.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_62_reg_6840.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage18.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_61_reg_6927.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage17.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_60_reg_6834.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage16.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_59_reg_6912.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_58_reg_6819.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage14.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_57_reg_6906.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage13.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_56_reg_6813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_55_reg_6886.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage10.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln357_21_fu_3719_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln357_19_fu_3701_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln357_17_fu_3673_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_33_fu_3617_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_31_fu_3588_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0))) {
        lstm_state_address1 = lstm_state_addr_45_reg_6394.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln357_15_fu_3221_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln357_13_fu_3180_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_29_fu_3077_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_27_fu_3047_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (tmp_25_fu_3003_p3.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_35_fu_2929_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_34_fu_2893_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_33_fu_2855_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_32_fu_2808_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_31_fu_2766_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_30_fu_2722_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_29_fu_2676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_28_fu_2622_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_27_fu_2558_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        lstm_state_address1 =  (sc_lv<7>) (zext_ln348_26_fu_2493_p1.read());
    } else {
        lstm_state_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void lstm_kernel::thread_lstm_state_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage19_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_11001.read(), ap_const_boolean_0)))) {
        lstm_state_ce0 = ap_const_logic_1;
    } else {
        lstm_state_ce0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_lstm_state_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage14_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_11001.read(), ap_const_boolean_0)))) {
        lstm_state_ce1 = ap_const_logic_1;
    } else {
        lstm_state_ce1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_lstm_state_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage17.read(), ap_const_boolean_0))) {
        lstm_state_d0 = ap_const_lv16_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        lstm_state_d0 = zext_ln387_2_fu_4661_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        lstm_state_d0 = zext_ln394_1_fu_4656_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
        lstm_state_d0 = zext_ln385_1_fu_4521_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0))) {
        lstm_state_d0 = zext_ln376_1_fu_4516_p1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage13.read(), ap_const_boolean_0)))) {
        lstm_state_d0 = ap_const_lv16_FFF;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        lstm_state_d0 = sext_ln367_18_fu_4352_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        lstm_state_d0 = sext_ln367_16_fu_4342_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        lstm_state_d0 = sext_ln367_14_fu_4333_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        lstm_state_d0 = sext_ln367_12_fu_4325_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        lstm_state_d0 = sext_ln367_10_fu_4317_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        lstm_state_d0 = sext_ln367_8_fu_4309_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        lstm_state_d0 = sext_ln367_6_fu_4300_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        lstm_state_d0 = sext_ln367_4_fu_4274_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        lstm_state_d0 = sext_ln367_2_fu_4234_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        lstm_state_d0 = sext_ln367_fu_4200_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_11_reg_6753.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage19.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_10_reg_6738.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage18.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_9_reg_6723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage17.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_8_reg_6708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage16.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_7_reg_6693.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_6_reg_6673.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage14.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_5_reg_6653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage13.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_4_reg_6633.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_3_reg_6603.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0))) {
        lstm_state_d0 = add_ln357_1_reg_6518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_17_reg_6157.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_15_reg_6142.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_13_reg_6112.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_11_reg_6092.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_s_reg_6072.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_8_reg_6047.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_6_reg_6007.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_4_reg_5967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln348_2_reg_5921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        lstm_state_d0 = trunc_ln_reg_5874.read();
    } else {
        lstm_state_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_kernel::thread_lstm_state_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage13.read(), ap_const_boolean_0))) {
        lstm_state_d1 = ap_const_lv16_F000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        lstm_state_d1 = zext_ln396_2_fu_4826_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        lstm_state_d1 = sext_ln405_fu_4665_p1.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage9.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage12.read(), ap_const_boolean_0)))) {
        lstm_state_d1 = ap_const_lv16_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        lstm_state_d1 = zext_ln378_2_fu_4642_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage10.read(), ap_const_boolean_0))) {
        lstm_state_d1 = zext_ln403_1_fu_4526_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        lstm_state_d1 = ap_const_lv16_1000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        lstm_state_d1 = ap_const_lv16_FFF;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read())) {
        lstm_state_d1 = sext_ln367_19_fu_4357_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        lstm_state_d1 = sext_ln367_17_fu_4347_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        lstm_state_d1 = sext_ln367_15_fu_4338_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read())) {
        lstm_state_d1 = sext_ln367_13_fu_4329_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read())) {
        lstm_state_d1 = sext_ln367_11_fu_4321_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read())) {
        lstm_state_d1 = sext_ln367_9_fu_4313_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read())) {
        lstm_state_d1 = sext_ln367_7_fu_4305_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read())) {
        lstm_state_d1 = sext_ln367_5_fu_4279_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        lstm_state_d1 = sext_ln367_3_fu_4238_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        lstm_state_d1 = sext_ln367_1_fu_4205_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        lstm_state_d1 = add_ln357_20_reg_6958.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage19.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_19_reg_6901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage18.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_18_reg_6953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage17.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_17_reg_6896.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage16.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_16_reg_6948.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_15_reg_6870.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage14.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_14_reg_6943.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage13.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_13_reg_6865.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_12_reg_6938.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0))) {
        lstm_state_d1 = add_ln357_2_reg_6563.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_18_reg_6162.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_16_reg_6147.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_14_reg_6117.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_12_reg_6097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_10_reg_6077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_9_reg_6052.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_7_reg_6012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_5_reg_5972.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_3_reg_5926.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        lstm_state_d1 = trunc_ln348_1_reg_5879.read();
    } else {
        lstm_state_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lstm_kernel::thread_lstm_state_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage13_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage18_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_fu_2172_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
          esl_seteq<1,1,1>(and_ln375_reg_7436.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln384_reg_7445.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln391_reg_7463.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln393_reg_7534.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln386_reg_7486.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage17_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln397_reg_7664.read())))) {
        lstm_state_we0 = ap_const_logic_1;
    } else {
        lstm_state_we0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_lstm_state_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln344_reg_5711.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state126.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln344_reg_5711_pp0_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln352_reg_6167_pp1_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln382_fu_4415_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_fu_2172_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln371_reg_7388.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln402_reg_7454.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln377_reg_7477.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage9_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_fu_2196_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln404_reg_7510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage12_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln388_reg_7568.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, and_ln395_reg_7597.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage13_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln406_reg_7668.read())))) {
        lstm_state_we1 = ap_const_logic_1;
    } else {
        lstm_state_we1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_lut_sigmoid_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        lut_sigmoid_address0 =  (sc_lv<10>) (zext_ln396_fu_4709_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        lut_sigmoid_address0 =  (sc_lv<10>) (zext_ln394_fu_4637_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16.read(), ap_const_boolean_0))) {
        lut_sigmoid_address0 =  (sc_lv<10>) (zext_ln387_fu_4593_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage15.read(), ap_const_boolean_0))) {
        lut_sigmoid_address0 =  (sc_lv<10>) (zext_ln378_fu_4569_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        lut_sigmoid_address0 =  (sc_lv<10>) (zext_ln385_fu_4480_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        lut_sigmoid_address0 =  (sc_lv<10>) (zext_ln376_fu_4455_p1.read());
    } else {
        lut_sigmoid_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lstm_kernel::thread_lut_sigmoid_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)))) {
        lut_sigmoid_ce0 = ap_const_logic_1;
    } else {
        lut_sigmoid_ce0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_lut_tanh_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage11.read(), ap_const_boolean_0))) {
        lut_tanh_address0 =  (sc_lv<10>) (zext_ln416_fu_4865_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        lut_tanh_address0 =  (sc_lv<10>) (zext_ln414_fu_4806_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage16.read(), ap_const_boolean_0))) {
        lut_tanh_address0 =  (sc_lv<10>) (zext_ln405_fu_4597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage8.read(), ap_const_boolean_0))) {
        lut_tanh_address0 =  (sc_lv<10>) (zext_ln403_fu_4511_p1.read());
    } else {
        lut_tanh_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lstm_kernel::thread_lut_tanh_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage11_11001.read(), ap_const_boolean_0)))) {
        lut_tanh_ce0 = ap_const_logic_1;
    } else {
        lut_tanh_ce0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_mode_read_read_fu_452_p2() {
    mode_read_read_fu_452_p2 = mode.read();
}

void lstm_kernel::thread_norm_sampleinput_fu_2256_p1() {
    norm_sampleinput_fu_2256_p1 = grp_fu_2251_p2.read().range(16-1, 0);
}

void lstm_kernel::thread_or_ln348_1_fu_2320_p2() {
    or_ln348_1_fu_2320_p2 = (add_ln348_reg_5720.read() | ap_const_lv8_2);
}

void lstm_kernel::thread_or_ln348_2_fu_2330_p2() {
    or_ln348_2_fu_2330_p2 = (add_ln348_reg_5720.read() | ap_const_lv8_3);
}

void lstm_kernel::thread_or_ln348_fu_2310_p2() {
    or_ln348_fu_2310_p2 = (add_ln348_reg_5720.read() | ap_const_lv8_1);
}

void lstm_kernel::thread_or_ln357_1_fu_3085_p2() {
    or_ln357_1_fu_3085_p2 = (add_ln357_21_reg_6233.read() | ap_const_lv12_2);
}

void lstm_kernel::thread_or_ln357_2_fu_3095_p2() {
    or_ln357_2_fu_3095_p2 = (add_ln357_21_reg_6233.read() | ap_const_lv12_3);
}

void lstm_kernel::thread_or_ln357_fu_3059_p2() {
    or_ln357_fu_3059_p2 = (add_ln357_21_reg_6233.read() | ap_const_lv12_1);
}

void lstm_kernel::thread_or_ln366_1_fu_3863_p2() {
    or_ln366_1_fu_3863_p2 = (add_ln366_21_reg_7000.read() | ap_const_lv12_2);
}

void lstm_kernel::thread_or_ln366_2_fu_3873_p2() {
    or_ln366_2_fu_3873_p2 = (add_ln366_21_reg_7000.read() | ap_const_lv12_3);
}

void lstm_kernel::thread_or_ln366_fu_3835_p2() {
    or_ln366_fu_3835_p2 = (add_ln366_21_reg_7000.read() | ap_const_lv12_1);
}

void lstm_kernel::thread_or_ln382_fu_4386_p2() {
    or_ln382_fu_4386_p2 = (tmp_45_fu_4373_p3.read() | ap_const_lv7_1);
}

void lstm_kernel::thread_or_ln391_fu_4421_p2() {
    or_ln391_fu_4421_p2 = (tmp_45_reg_7397.read() | ap_const_lv7_2);
}

void lstm_kernel::thread_or_ln400_fu_4401_p2() {
    or_ln400_fu_4401_p2 = (tmp_45_reg_7397.read() | ap_const_lv7_3);
}

void lstm_kernel::thread_or_ln_fu_4903_p3() {
    or_ln_fu_4903_p3 = esl_concat<5,5>(ap_const_lv5_17, ap_phi_mux_j_7_phi_fu_1900_p4.read());
}

void lstm_kernel::thread_select_ln352_1_fu_2965_p3() {
    select_ln352_1_fu_2965_p3 = (!icmp_ln353_reg_6181.read()[0].is_01())? sc_lv<5>(): ((icmp_ln353_reg_6181.read()[0].to_bool())? k_reg_6176.read(): k_2_reg_1838.read());
}

void lstm_kernel::thread_select_ln352_fu_2957_p3() {
    select_ln352_fu_2957_p3 = (!icmp_ln353_fu_2951_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln353_fu_2951_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_i_2_phi_fu_1854_p4.read());
}

void lstm_kernel::thread_select_ln411_fu_4761_p3() {
    select_ln411_fu_4761_p3 = (!icmp_ln411_fu_4756_p2.read()[0].is_01())? sc_lv<15>(): ((icmp_ln411_fu_4756_p2.read()[0].to_bool())? ap_const_lv15_1000: trunc_ln9_reg_7626.read());
}

void lstm_kernel::thread_sext_ln319_fu_5332_p1() {
    sext_ln319_fu_5332_p1 = esl_sext<11,10>(add_ln319_reg_7986.read());
}

void lstm_kernel::thread_sext_ln320_fu_5345_p1() {
    sext_ln320_fu_5345_p1 = esl_sext<11,10>(add_ln320_reg_8001.read());
}

void lstm_kernel::thread_sext_ln321_fu_5358_p1() {
    sext_ln321_fu_5358_p1 = esl_sext<11,10>(add_ln321_reg_8011.read());
}

void lstm_kernel::thread_sext_ln322_fu_5371_p1() {
    sext_ln322_fu_5371_p1 = esl_sext<11,10>(add_ln322_reg_8026.read());
}

void lstm_kernel::thread_sext_ln348_20_fu_2555_p1() {
    sext_ln348_20_fu_2555_p1 = esl_sext<4,3>(xor_ln348_reg_5914.read());
}

void lstm_kernel::thread_sext_ln348_21_fu_2673_p1() {
    sext_ln348_21_fu_2673_p1 = esl_sext<5,3>(xor_ln348_reg_5914.read());
}

void lstm_kernel::thread_sext_ln348_22_fu_2805_p1() {
    sext_ln348_22_fu_2805_p1 = esl_sext<6,5>(add_ln348_17_reg_5961.read());
}

void lstm_kernel::thread_sext_ln348_23_fu_2852_p1() {
    sext_ln348_23_fu_2852_p1 = esl_sext<6,3>(xor_ln348_reg_5914.read());
}

void lstm_kernel::thread_sext_ln352_fu_3151_p1() {
    sext_ln352_fu_3151_p1 = esl_sext<28,16>(reg_1989.read());
}

void lstm_kernel::thread_sext_ln357_20_fu_3115_p1() {
    sext_ln357_20_fu_3115_p1 = esl_sext<64,12>(add_ln357_22_reg_6299.read());
}

void lstm_kernel::thread_sext_ln357_21_fu_3119_p1() {
    sext_ln357_21_fu_3119_p1 = esl_sext<64,12>(add_ln357_23_reg_6304.read());
}

void lstm_kernel::thread_sext_ln357_22_fu_3155_p1() {
    sext_ln357_22_fu_3155_p1 = esl_sext<64,12>(add_ln357_24_reg_6319.read());
}

void lstm_kernel::thread_sext_ln357_23_fu_3159_p1() {
    sext_ln357_23_fu_3159_p1 = esl_sext<64,12>(add_ln357_25_reg_6324.read());
}

void lstm_kernel::thread_sext_ln357_24_fu_3199_p1() {
    sext_ln357_24_fu_3199_p1 = esl_sext<64,12>(add_ln357_26_reg_6378.read());
}

void lstm_kernel::thread_sext_ln357_25_fu_3203_p1() {
    sext_ln357_25_fu_3203_p1 = esl_sext<64,12>(add_ln357_27_reg_6383.read());
}

void lstm_kernel::thread_sext_ln357_26_fu_3234_p1() {
    sext_ln357_26_fu_3234_p1 = esl_sext<64,12>(add_ln357_28_reg_6432.read());
}

void lstm_kernel::thread_sext_ln357_27_fu_3238_p1() {
    sext_ln357_27_fu_3238_p1 = esl_sext<64,12>(add_ln357_29_reg_6437.read());
}

void lstm_kernel::thread_sext_ln357_28_fu_3269_p1() {
    sext_ln357_28_fu_3269_p1 = esl_sext<64,12>(add_ln357_30_reg_6473.read());
}

void lstm_kernel::thread_sext_ln357_29_fu_3273_p1() {
    sext_ln357_29_fu_3273_p1 = esl_sext<64,12>(add_ln357_31_reg_6478.read());
}

void lstm_kernel::thread_sext_ln357_30_fu_3305_p1() {
    sext_ln357_30_fu_3305_p1 = esl_sext<64,12>(add_ln357_32_reg_6508.read());
}

void lstm_kernel::thread_sext_ln357_31_fu_3309_p1() {
    sext_ln357_31_fu_3309_p1 = esl_sext<64,12>(add_ln357_33_reg_6513.read());
}

void lstm_kernel::thread_sext_ln357_32_fu_3341_p1() {
    sext_ln357_32_fu_3341_p1 = esl_sext<64,12>(add_ln357_34_reg_6553.read());
}

void lstm_kernel::thread_sext_ln357_33_fu_3345_p1() {
    sext_ln357_33_fu_3345_p1 = esl_sext<64,12>(add_ln357_35_reg_6558.read());
}

void lstm_kernel::thread_sext_ln357_34_fu_3377_p1() {
    sext_ln357_34_fu_3377_p1 = esl_sext<64,12>(add_ln357_36_reg_6593.read());
}

void lstm_kernel::thread_sext_ln357_35_fu_3381_p1() {
    sext_ln357_35_fu_3381_p1 = esl_sext<64,12>(add_ln357_37_reg_6598.read());
}

void lstm_kernel::thread_sext_ln357_36_fu_3693_p1() {
    sext_ln357_36_fu_3693_p1 = esl_sext<6,5>(add_ln357_40_reg_6406_pp1_iter1_reg.read());
}

void lstm_kernel::thread_sext_ln366_10_fu_4140_p1() {
    sext_ln366_10_fu_4140_p1 = esl_sext<64,12>(add_ln366_32_reg_7251.read());
}

void lstm_kernel::thread_sext_ln366_11_fu_4144_p1() {
    sext_ln366_11_fu_4144_p1 = esl_sext<64,12>(add_ln366_33_reg_7256.read());
}

void lstm_kernel::thread_sext_ln366_12_fu_4182_p1() {
    sext_ln366_12_fu_4182_p1 = esl_sext<64,12>(add_ln366_34_reg_7297.read());
}

void lstm_kernel::thread_sext_ln366_13_fu_4186_p1() {
    sext_ln366_13_fu_4186_p1 = esl_sext<64,12>(add_ln366_35_reg_7302.read());
}

void lstm_kernel::thread_sext_ln366_14_fu_4226_p1() {
    sext_ln366_14_fu_4226_p1 = esl_sext<64,12>(add_ln366_36_reg_7333.read());
}

void lstm_kernel::thread_sext_ln366_15_fu_4230_p1() {
    sext_ln366_15_fu_4230_p1 = esl_sext<64,12>(add_ln366_37_reg_7338.read());
}

void lstm_kernel::thread_sext_ln366_16_fu_3823_p1() {
    sext_ln366_16_fu_3823_p1 = esl_sext<4,3>(xor_ln366_reg_6988.read());
}

void lstm_kernel::thread_sext_ln366_17_fu_3893_p1() {
    sext_ln366_17_fu_3893_p1 = esl_sext<5,3>(xor_ln366_reg_6988.read());
}

void lstm_kernel::thread_sext_ln366_18_fu_4106_p1() {
    sext_ln366_18_fu_4106_p1 = esl_sext<6,5>(add_ln366_38_reg_7173.read());
}

void lstm_kernel::thread_sext_ln366_19_fu_3973_p1() {
    sext_ln366_19_fu_3973_p1 = esl_sext<6,3>(xor_ln366_reg_6988.read());
}

void lstm_kernel::thread_sext_ln366_1_fu_3914_p1() {
    sext_ln366_1_fu_3914_p1 = esl_sext<64,12>(add_ln366_23_reg_7070.read());
}

void lstm_kernel::thread_sext_ln366_2_fu_3946_p1() {
    sext_ln366_2_fu_3946_p1 = esl_sext<64,12>(add_ln366_24_reg_7097.read());
}

void lstm_kernel::thread_sext_ln366_3_fu_3950_p1() {
    sext_ln366_3_fu_3950_p1 = esl_sext<64,12>(add_ln366_25_reg_7102.read());
}

void lstm_kernel::thread_sext_ln366_4_fu_3981_p1() {
    sext_ln366_4_fu_3981_p1 = esl_sext<64,12>(add_ln366_26_reg_7128.read());
}

void lstm_kernel::thread_sext_ln366_5_fu_3985_p1() {
    sext_ln366_5_fu_3985_p1 = esl_sext<64,12>(add_ln366_27_reg_7133.read());
}

void lstm_kernel::thread_sext_ln366_6_fu_4053_p1() {
    sext_ln366_6_fu_4053_p1 = esl_sext<64,12>(add_ln366_28_reg_7158.read());
}

void lstm_kernel::thread_sext_ln366_7_fu_4057_p1() {
    sext_ln366_7_fu_4057_p1 = esl_sext<64,12>(add_ln366_29_reg_7163.read());
}

void lstm_kernel::thread_sext_ln366_8_fu_4084_p1() {
    sext_ln366_8_fu_4084_p1 = esl_sext<64,12>(add_ln366_30_reg_7215.read());
}

void lstm_kernel::thread_sext_ln366_9_fu_4088_p1() {
    sext_ln366_9_fu_4088_p1 = esl_sext<64,12>(add_ln366_31_reg_7220.read());
}

void lstm_kernel::thread_sext_ln366_fu_3910_p1() {
    sext_ln366_fu_3910_p1 = esl_sext<64,12>(add_ln366_22_reg_7065.read());
}

void lstm_kernel::thread_sext_ln367_10_fu_4317_p1() {
    sext_ln367_10_fu_4317_p1 = esl_sext<16,11>(trunc_ln367_s_reg_7348.read());
}

void lstm_kernel::thread_sext_ln367_11_fu_4321_p1() {
    sext_ln367_11_fu_4321_p1 = esl_sext<16,11>(trunc_ln367_10_reg_7363.read());
}

void lstm_kernel::thread_sext_ln367_12_fu_4325_p1() {
    sext_ln367_12_fu_4325_p1 = esl_sext<16,11>(trunc_ln367_11_reg_7368.read());
}

void lstm_kernel::thread_sext_ln367_13_fu_4329_p1() {
    sext_ln367_13_fu_4329_p1 = esl_sext<16,11>(trunc_ln367_12_reg_7373.read());
}

void lstm_kernel::thread_sext_ln367_14_fu_4333_p1() {
    sext_ln367_14_fu_4333_p1 = esl_sext<16,11>(reg_2216.read());
}

void lstm_kernel::thread_sext_ln367_15_fu_4338_p1() {
    sext_ln367_15_fu_4338_p1 = esl_sext<16,11>(trunc_ln367_14_reg_7378.read());
}

void lstm_kernel::thread_sext_ln367_16_fu_4342_p1() {
    sext_ln367_16_fu_4342_p1 = esl_sext<16,11>(reg_2208.read());
}

void lstm_kernel::thread_sext_ln367_17_fu_4347_p1() {
    sext_ln367_17_fu_4347_p1 = esl_sext<16,11>(reg_2212.read());
}

void lstm_kernel::thread_sext_ln367_18_fu_4352_p1() {
    sext_ln367_18_fu_4352_p1 = esl_sext<16,11>(reg_2220.read());
}

void lstm_kernel::thread_sext_ln367_19_fu_4357_p1() {
    sext_ln367_19_fu_4357_p1 = esl_sext<16,11>(trunc_ln367_18_reg_7383.read());
}

void lstm_kernel::thread_sext_ln367_1_fu_4205_p1() {
    sext_ln367_1_fu_4205_p1 = esl_sext<16,11>(reg_2212.read());
}

void lstm_kernel::thread_sext_ln367_2_fu_4234_p1() {
    sext_ln367_2_fu_4234_p1 = esl_sext<16,11>(trunc_ln367_2_reg_7195.read());
}

void lstm_kernel::thread_sext_ln367_3_fu_4238_p1() {
    sext_ln367_3_fu_4238_p1 = esl_sext<16,11>(trunc_ln367_3_reg_7200.read());
}

void lstm_kernel::thread_sext_ln367_4_fu_4274_p1() {
    sext_ln367_4_fu_4274_p1 = esl_sext<16,11>(reg_2216.read());
}

void lstm_kernel::thread_sext_ln367_5_fu_4279_p1() {
    sext_ln367_5_fu_4279_p1 = esl_sext<16,11>(reg_2212.read());
}

void lstm_kernel::thread_sext_ln367_6_fu_4300_p1() {
    sext_ln367_6_fu_4300_p1 = esl_sext<16,11>(reg_2220.read());
}

void lstm_kernel::thread_sext_ln367_7_fu_4305_p1() {
    sext_ln367_7_fu_4305_p1 = esl_sext<16,11>(trunc_ln367_7_reg_7282.read());
}

void lstm_kernel::thread_sext_ln367_8_fu_4309_p1() {
    sext_ln367_8_fu_4309_p1 = esl_sext<16,11>(trunc_ln367_8_reg_7318.read());
}

void lstm_kernel::thread_sext_ln367_9_fu_4313_p1() {
    sext_ln367_9_fu_4313_p1 = esl_sext<16,11>(trunc_ln367_9_reg_7343.read());
}

void lstm_kernel::thread_sext_ln367_fu_4200_p1() {
    sext_ln367_fu_4200_p1 = esl_sext<16,11>(reg_2208.read());
}

void lstm_kernel::thread_sext_ln405_fu_4665_p1() {
    sext_ln405_fu_4665_p1 = esl_sext<16,13>(reg_2224.read());
}

void lstm_kernel::thread_sext_ln411_fu_4778_p1() {
    sext_ln411_fu_4778_p1 = esl_sext<16,15>(select_ln411_reg_7636.read());
}

void lstm_kernel::thread_sext_ln416_fu_4869_p1() {
    sext_ln416_fu_4869_p1 = esl_sext<16,13>(reg_2224.read());
}

void lstm_kernel::thread_sext_ln425_1_fu_4911_p1() {
    sext_ln425_1_fu_4911_p1 = esl_sext<11,10>(or_ln_fu_4903_p3.read());
}

void lstm_kernel::thread_shl_ln311_1_fu_5179_p3() {
    shl_ln311_1_fu_5179_p3 = esl_concat<5,4>(j_1_reg_1930.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_shl_ln311_2_fu_5187_p3() {
    shl_ln311_2_fu_5187_p3 = esl_concat<5,2>(j_1_reg_1930.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_shl_ln357_mid2_fu_2971_p3() {
    shl_ln357_mid2_fu_2971_p3 = esl_concat<5,2>(select_ln352_1_fu_2965_p3.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_shl_ln_fu_5023_p3() {
    shl_ln_fu_5023_p3 = esl_concat<5,2>(i_0_reg_1919.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_sub_ln341_fu_2231_p2() {
    sub_ln341_fu_2231_p2 = (!sampleinput.read().is_01() || !min_v.read().is_01())? sc_lv<16>(): (sc_biguint<16>(sampleinput.read()) - sc_biguint<16>(min_v.read()));
}

void lstm_kernel::thread_sub_ln342_fu_2238_p2() {
    sub_ln342_fu_2238_p2 = (!zext_ln342_fu_2235_p1.read().is_01() || !zext_ln341_fu_2228_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln342_fu_2235_p1.read()) - sc_biguint<32>(zext_ln341_fu_2228_p1.read()));
}

void lstm_kernel::thread_sub_ln378_1_fu_4611_p2() {
    sub_ln378_1_fu_4611_p2 = (!ap_const_lv13_1000.is_01() || !zext_ln378_1_fu_4607_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1000) - sc_biguint<13>(zext_ln378_1_fu_4607_p1.read()));
}

void lstm_kernel::thread_sub_ln378_fu_4548_p2() {
    sub_ln378_fu_4548_p2 = (!ap_const_lv11_0.is_01() || !trunc_ln378_fu_4544_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_0) - sc_biguint<11>(trunc_ln378_fu_4544_p1.read()));
}

void lstm_kernel::thread_sub_ln387_1_fu_4650_p2() {
    sub_ln387_1_fu_4650_p2 = (!ap_const_lv13_1000.is_01() || !zext_ln387_1_fu_4646_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1000) - sc_biguint<13>(zext_ln387_1_fu_4646_p1.read()));
}

void lstm_kernel::thread_sub_ln387_fu_4573_p2() {
    sub_ln387_fu_4573_p2 = (!ap_const_lv11_0.is_01() || !trunc_ln387_reg_7490.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_0) - sc_biguint<11>(trunc_ln387_reg_7490.read()));
}

void lstm_kernel::thread_sub_ln396_1_fu_4815_p2() {
    sub_ln396_1_fu_4815_p2 = (!ap_const_lv13_1000.is_01() || !zext_ln396_1_fu_4811_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1000) - sc_biguint<13>(zext_ln396_1_fu_4811_p1.read()));
}

void lstm_kernel::thread_sub_ln396_fu_4694_p2() {
    sub_ln396_fu_4694_p2 = (!ap_const_lv11_0.is_01() || !trunc_ln396_fu_4690_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_0) - sc_biguint<11>(trunc_ln396_fu_4690_p1.read()));
}

void lstm_kernel::thread_sub_ln405_fu_4587_p2() {
    sub_ln405_fu_4587_p2 = (!ap_const_lv11_0.is_01() || !trunc_ln405_fu_4583_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_0) - sc_biguint<11>(trunc_ln405_fu_4583_p1.read()));
}

void lstm_kernel::thread_sub_ln416_fu_4859_p2() {
    sub_ln416_fu_4859_p2 = (!ap_const_lv11_0.is_01() || !trunc_ln416_fu_4855_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_0) - sc_biguint<11>(trunc_ln416_fu_4855_p1.read()));
}

void lstm_kernel::thread_tmp_10_fu_2757_p3() {
    tmp_10_fu_2757_p3 = esl_concat<61,3>(ap_const_lv61_5, i_1_reg_1815_pp0_iter1_reg.read());
}

void lstm_kernel::thread_tmp_11_fu_2796_p3() {
    tmp_11_fu_2796_p3 = esl_concat<61,3>(ap_const_lv61_6, i_1_reg_1815_pp0_iter1_reg.read());
}

void lstm_kernel::thread_tmp_12_fu_2843_p3() {
    tmp_12_fu_2843_p3 = esl_concat<61,3>(ap_const_lv61_7, i_1_reg_1815_pp0_iter1_reg.read());
}

void lstm_kernel::thread_tmp_13_fu_2884_p3() {
    tmp_13_fu_2884_p3 = esl_concat<61,3>(ap_const_lv61_8, i_1_reg_1815_pp0_iter1_reg.read());
}

void lstm_kernel::thread_tmp_14_fu_2920_p3() {
    tmp_14_fu_2920_p3 = esl_concat<61,3>(ap_const_lv61_9, i_1_reg_1815_pp0_iter1_reg.read());
}

void lstm_kernel::thread_tmp_15_fu_5055_p3() {
    tmp_15_fu_5055_p3 = esl_concat<7,4>(add_ln311_reg_7852.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_tmp_16_fu_5066_p3() {
    tmp_16_fu_5066_p3 = esl_concat<7,2>(add_ln311_reg_7852.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_17_fu_5083_p3() {
    tmp_17_fu_5083_p3 = esl_concat<7,4>(add_ln312_reg_7858.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_tmp_18_fu_5094_p3() {
    tmp_18_fu_5094_p3 = esl_concat<7,2>(add_ln312_reg_7858.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_19_fu_5111_p3() {
    tmp_19_fu_5111_p3 = esl_concat<7,4>(add_ln313_reg_7864.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_tmp_20_fu_5122_p3() {
    tmp_20_fu_5122_p3 = esl_concat<7,2>(add_ln313_reg_7864.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_21_fu_5139_p3() {
    tmp_21_fu_5139_p3 = esl_concat<7,4>(add_ln314_reg_7870.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_tmp_22_fu_5150_p3() {
    tmp_22_fu_5150_p3 = esl_concat<7,2>(add_ln314_reg_7870.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_23_fu_3011_p3() {
    tmp_23_fu_3011_p3 = esl_concat<7,4>(add_ln357_reg_6216.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_tmp_24_fu_3022_p3() {
    tmp_24_fu_3022_p3 = esl_concat<7,2>(add_ln357_reg_6216.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_25_fu_3003_p3() {
    tmp_25_fu_3003_p3 = esl_concat<61,3>(ap_const_lv61_1, select_ln352_reg_6186.read());
}

void lstm_kernel::thread_tmp_26_fu_3039_p3() {
    tmp_26_fu_3039_p3 = esl_concat<61,3>(ap_const_lv61_2, select_ln352_reg_6186.read());
}

void lstm_kernel::thread_tmp_27_fu_3047_p3() {
    tmp_27_fu_3047_p3 = esl_concat<61,3>(ap_const_lv61_3, select_ln352_reg_6186.read());
}

void lstm_kernel::thread_tmp_28_fu_3069_p3() {
    tmp_28_fu_3069_p3 = esl_concat<61,3>(ap_const_lv61_4, select_ln352_reg_6186.read());
}

void lstm_kernel::thread_tmp_29_fu_3077_p3() {
    tmp_29_fu_3077_p3 = esl_concat<61,3>(ap_const_lv61_5, select_ln352_reg_6186.read());
}

void lstm_kernel::thread_tmp_30_fu_3580_p3() {
    tmp_30_fu_3580_p3 = esl_concat<61,3>(ap_const_lv61_6, select_ln352_reg_6186_pp1_iter1_reg.read());
}

void lstm_kernel::thread_tmp_31_fu_3588_p3() {
    tmp_31_fu_3588_p3 = esl_concat<61,3>(ap_const_lv61_7, select_ln352_reg_6186_pp1_iter1_reg.read());
}

void lstm_kernel::thread_tmp_32_fu_3609_p3() {
    tmp_32_fu_3609_p3 = esl_concat<61,3>(ap_const_lv61_8, select_ln352_reg_6186_pp1_iter1_reg.read());
}

void lstm_kernel::thread_tmp_33_fu_3617_p3() {
    tmp_33_fu_3617_p3 = esl_concat<61,3>(ap_const_lv61_9, select_ln352_reg_6186_pp1_iter1_reg.read());
}

void lstm_kernel::thread_tmp_34_fu_3786_p3() {
    tmp_34_fu_3786_p3 = esl_concat<7,4>(add_ln366_reg_6977.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_tmp_35_fu_3797_p3() {
    tmp_35_fu_3797_p3 = esl_concat<7,2>(add_ln366_reg_6977.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_36_fu_3814_p3() {
    tmp_36_fu_3814_p3 = esl_concat<61,3>(ap_const_lv61_1, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_37_fu_3845_p3() {
    tmp_37_fu_3845_p3 = esl_concat<61,3>(ap_const_lv61_2, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_38_fu_3854_p3() {
    tmp_38_fu_3854_p3 = esl_concat<61,3>(ap_const_lv61_3, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_39_fu_3901_p3() {
    tmp_39_fu_3901_p3 = esl_concat<61,3>(ap_const_lv61_4, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_40_fu_3928_p3() {
    tmp_40_fu_3928_p3 = esl_concat<61,3>(ap_const_lv61_5, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_41_fu_3937_p3() {
    tmp_41_fu_3937_p3 = esl_concat<61,3>(ap_const_lv61_6, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_42_fu_3964_p3() {
    tmp_42_fu_3964_p3 = esl_concat<61,3>(ap_const_lv61_7, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_43_fu_4019_p3() {
    tmp_43_fu_4019_p3 = esl_concat<61,3>(ap_const_lv61_8, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_44_fu_4028_p3() {
    tmp_44_fu_4028_p3 = esl_concat<61,3>(ap_const_lv61_9, i_3_reg_1861.read());
}

void lstm_kernel::thread_tmp_45_fu_4373_p3() {
    tmp_45_fu_4373_p3 = esl_concat<5,2>(ap_phi_mux_j_6_phi_fu_1877_p4.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_46_fu_4392_p3() {
    tmp_46_fu_4392_p3 = esl_concat<57,7>(ap_const_lv57_0, or_ln382_fu_4386_p2.read());
}

void lstm_kernel::thread_tmp_47_fu_4426_p3() {
    tmp_47_fu_4426_p3 = esl_concat<57,7>(ap_const_lv57_0, or_ln391_fu_4421_p2.read());
}

void lstm_kernel::thread_tmp_48_fu_4406_p3() {
    tmp_48_fu_4406_p3 = esl_concat<57,7>(ap_const_lv57_0, or_ln400_fu_4401_p2.read());
}

void lstm_kernel::thread_tmp_50_fu_4435_p3() {
    tmp_50_fu_4435_p3 = reg_1994.read().range(15, 15);
}

void lstm_kernel::thread_tmp_54_fu_4460_p3() {
    tmp_54_fu_4460_p3 = reg_1994.read().range(15, 15);
}

void lstm_kernel::thread_tmp_58_fu_4617_p3() {
    tmp_58_fu_4617_p3 = reg_1994.read().range(15, 15);
}

void lstm_kernel::thread_tmp_5_fu_2276_p3() {
    tmp_5_fu_2276_p3 = esl_concat<3,4>(ap_phi_mux_i_1_phi_fu_1819_p4.read(), ap_const_lv4_0);
}

void lstm_kernel::thread_tmp_62_fu_4485_p3() {
    tmp_62_fu_4485_p3 = reg_1999.read().range(15, 15);
}

void lstm_kernel::thread_tmp_66_fu_4782_p3() {
    tmp_66_fu_4782_p3 = select_ln411_reg_7636.read().range(14, 14);
}

void lstm_kernel::thread_tmp_6_fu_2288_p3() {
    tmp_6_fu_2288_p3 = esl_concat<3,2>(ap_phi_mux_i_1_phi_fu_1819_p4.read(), ap_const_lv2_0);
}

void lstm_kernel::thread_tmp_7_fu_2546_p3() {
    tmp_7_fu_2546_p3 = esl_concat<61,3>(ap_const_lv61_1, i_1_reg_1815.read());
}

void lstm_kernel::thread_tmp_8_fu_2613_p3() {
    tmp_8_fu_2613_p3 = esl_concat<61,3>(ap_const_lv61_2, i_1_reg_1815.read());
}

void lstm_kernel::thread_tmp_9_fu_2664_p3() {
    tmp_9_fu_2664_p3 = esl_concat<61,3>(ap_const_lv61_3, i_1_reg_1815.read());
}

void lstm_kernel::thread_tmp_s_fu_2713_p3() {
    tmp_s_fu_2713_p3 = esl_concat<61,3>(ap_const_lv61_4, i_1_reg_1815_pp0_iter1_reg.read());
}

void lstm_kernel::thread_trunc_ln378_fu_4544_p1() {
    trunc_ln378_fu_4544_p1 = reg_1994.read().range(11-1, 0);
}

void lstm_kernel::thread_trunc_ln387_fu_4565_p1() {
    trunc_ln387_fu_4565_p1 = reg_1999.read().range(11-1, 0);
}

void lstm_kernel::thread_trunc_ln396_fu_4690_p1() {
    trunc_ln396_fu_4690_p1 = reg_1994.read().range(11-1, 0);
}

void lstm_kernel::thread_trunc_ln405_fu_4583_p1() {
    trunc_ln405_fu_4583_p1 = reg_1994.read().range(11-1, 0);
}

void lstm_kernel::thread_trunc_ln416_fu_4855_p1() {
    trunc_ln416_fu_4855_p1 = reg_1989.read().range(11-1, 0);
}

void lstm_kernel::thread_weight_Addr_A() {
    weight_Addr_A = (!ap_const_lv32_1.is_01())? sc_lv<32>(): weight_Addr_A_orig.read() << (unsigned short)ap_const_lv32_1.to_uint();
}

void lstm_kernel::thread_weight_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln322_fu_5374_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln321_fu_5361_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln320_fu_5348_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln319_fu_5335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln314_1_fu_5294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln313_1_fu_5286_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln312_1_fu_5260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln311_1_fu_5242_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln306_fu_4995_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln305_fu_4986_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state205.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln304_fu_4977_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln303_fu_4966_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        weight_Addr_A_orig =  (sc_lv<32>) (zext_ln425_1_fu_4915_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read())) {
        weight_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_6F4);
    } else {
        weight_Addr_A_orig =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void lstm_kernel::thread_weight_Clk_A() {
    weight_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void lstm_kernel::thread_weight_Din_A() {
    weight_Din_A = ap_const_lv16_0;
}

void lstm_kernel::thread_weight_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state204.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state205.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()))) {
        weight_EN_A = ap_const_logic_1;
    } else {
        weight_EN_A = ap_const_logic_0;
    }
}

void lstm_kernel::thread_weight_Rst_A() {
    weight_Rst_A = ap_rst.read();
}

void lstm_kernel::thread_weight_WEN_A() {
    weight_WEN_A = ap_const_lv2_0;
}

void lstm_kernel::thread_weight_l_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln321_reg_8021.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln319_reg_7991.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln313_3_fu_5302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln311_7_fu_5290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln305_reg_7803.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln303_reg_7773.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_14_fu_4226_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_12_fu_4182_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_10_fu_4140_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_8_fu_4084_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_6_fu_4053_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_4_fu_3981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_2_fu_3946_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln366_fu_3910_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln366_5_fu_3868_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln366_3_fu_3831_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_34_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_32_fu_3341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage10.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_30_fu_3305_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_28_fu_3269_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_26_fu_3234_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_24_fu_3199_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_22_fu_3155_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (sext_ln357_20_fu_3115_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln357_6_fu_3090_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln357_4_fu_3055_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_24_fu_2656_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_22_fu_2595_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_20_fu_2528_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_18_fu_2469_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_16_fu_2420_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_14_fu_2394_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_12_fu_2368_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_10_fu_2350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_8_fu_2325_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        weight_l_address0 =  (sc_lv<11>) (zext_ln348_6_fu_2306_p1.read());
    } else {
        weight_l_address0 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void lstm_kernel::thread_weight_l_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln322_reg_8036.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln320_reg_8006.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln314_3_fu_5306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln312_3_fu_5298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln306_reg_7818.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln304_reg_7788.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_15_fu_4230_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_13_fu_4186_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_11_fu_4144_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_9_fu_4088_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_7_fu_4057_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_5_fu_3985_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_3_fu_3950_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read())) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln366_1_fu_3914_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln366_6_fu_3878_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln366_4_fu_3840_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_35_fu_3381_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_33_fu_3345_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage10.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_31_fu_3309_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_29_fu_3273_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_27_fu_3238_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_25_fu_3203_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_23_fu_3159_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (sext_ln357_21_fu_3119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln357_7_fu_3100_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln357_5_fu_3064_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_25_fu_2660_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_23_fu_2599_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_21_fu_2532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_19_fu_2473_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_17_fu_2424_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_15_fu_2398_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_13_fu_2372_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_11_fu_2354_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_9_fu_2335_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        weight_l_address1 =  (sc_lv<11>) (zext_ln348_7_fu_2315_p1.read());
    } else {
        weight_l_address1 =  (sc_lv<11>) ("XXXXXXXXXXX");
    }
}

void lstm_kernel::thread_weight_l_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage13_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_l_ce0 = ap_const_logic_1;
    } else {
        weight_l_ce0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_weight_l_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage13_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)))) {
        weight_l_ce1 = ap_const_logic_1;
    } else {
        weight_l_ce1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_weight_l_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state207.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state209.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()))) {
        weight_l_we0 = ap_const_logic_1;
    } else {
        weight_l_we0 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_weight_l_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state208.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state210.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()))) {
        weight_l_we1 = ap_const_logic_1;
    } else {
        weight_l_we1 = ap_const_logic_0;
    }
}

void lstm_kernel::thread_xor_ln348_fu_2487_p2() {
    xor_ln348_fu_2487_p2 = (i_1_reg_1815.read() ^ ap_const_lv3_4);
}

void lstm_kernel::thread_xor_ln357_fu_2984_p2() {
    xor_ln357_fu_2984_p2 = (select_ln352_reg_6186.read() ^ ap_const_lv3_4);
}

void lstm_kernel::thread_xor_ln366_fu_3775_p2() {
    xor_ln366_fu_3775_p2 = (i_3_reg_1861.read() ^ ap_const_lv3_4);
}

void lstm_kernel::thread_xor_ln375_fu_4443_p2() {
    xor_ln375_fu_4443_p2 = (tmp_50_fu_4435_p3.read() ^ ap_const_lv1_1);
}

void lstm_kernel::thread_xor_ln384_fu_4468_p2() {
    xor_ln384_fu_4468_p2 = (tmp_54_fu_4460_p3.read() ^ ap_const_lv1_1);
}

void lstm_kernel::thread_xor_ln393_fu_4625_p2() {
    xor_ln393_fu_4625_p2 = (tmp_58_fu_4617_p3.read() ^ ap_const_lv1_1);
}

void lstm_kernel::thread_xor_ln402_fu_4493_p2() {
    xor_ln402_fu_4493_p2 = (tmp_62_fu_4485_p3.read() ^ ap_const_lv1_1);
}

void lstm_kernel::thread_xor_ln413_fu_4789_p2() {
    xor_ln413_fu_4789_p2 = (tmp_66_fu_4782_p3.read() ^ ap_const_lv1_1);
}

void lstm_kernel::thread_zext_ln302_1_fu_4950_p1() {
    zext_ln302_1_fu_4950_p1 = esl_zext<6,5>(j_0_reg_1908.read());
}

void lstm_kernel::thread_zext_ln302_fu_4946_p1() {
    zext_ln302_fu_4946_p1 = esl_zext<7,5>(j_0_reg_1908.read());
}

void lstm_kernel::thread_zext_ln303_fu_4966_p1() {
    zext_ln303_fu_4966_p1 = esl_zext<64,5>(j_0_reg_1908.read());
}

void lstm_kernel::thread_zext_ln304_fu_4977_p1() {
    zext_ln304_fu_4977_p1 = esl_zext<64,6>(add_ln304_reg_7778.read());
}

void lstm_kernel::thread_zext_ln305_fu_4986_p1() {
    zext_ln305_fu_4986_p1 = esl_zext<64,6>(add_ln305_reg_7793.read());
}

void lstm_kernel::thread_zext_ln306_fu_4995_p1() {
    zext_ln306_fu_4995_p1 = esl_zext<64,7>(add_ln306_reg_7808.read());
}

void lstm_kernel::thread_zext_ln309_1_fu_5003_p1() {
    zext_ln309_1_fu_5003_p1 = esl_zext<10,5>(i_0_reg_1919.read());
}

void lstm_kernel::thread_zext_ln309_2_fu_5007_p1() {
    zext_ln309_2_fu_5007_p1 = esl_zext<9,5>(i_0_reg_1919.read());
}

void lstm_kernel::thread_zext_ln309_fu_4999_p1() {
    zext_ln309_fu_4999_p1 = esl_zext<11,5>(i_0_reg_1919.read());
}

void lstm_kernel::thread_zext_ln311_1_fu_5242_p1() {
    zext_ln311_1_fu_5242_p1 = esl_zext<64,9>(add_ln311_2_reg_7931.read());
}

void lstm_kernel::thread_zext_ln311_2_fu_5073_p1() {
    zext_ln311_2_fu_5073_p1 = esl_zext<12,9>(tmp_16_fu_5066_p3.read());
}

void lstm_kernel::thread_zext_ln311_3_fu_5195_p1() {
    zext_ln311_3_fu_5195_p1 = esl_zext<9,7>(shl_ln311_2_fu_5187_p3.read());
}

void lstm_kernel::thread_zext_ln311_4_fu_5257_p1() {
    zext_ln311_4_fu_5257_p1 = esl_zext<11,9>(add_ln311_1_reg_7904.read());
}

void lstm_kernel::thread_zext_ln311_5_fu_5239_p1() {
    zext_ln311_5_fu_5239_p1 = esl_zext<10,9>(add_ln311_1_reg_7904.read());
}

void lstm_kernel::thread_zext_ln311_6_fu_5205_p1() {
    zext_ln311_6_fu_5205_p1 = esl_zext<12,5>(j_1_reg_1930.read());
}

void lstm_kernel::thread_zext_ln311_7_fu_5290_p1() {
    zext_ln311_7_fu_5290_p1 = esl_zext<64,12>(add_ln311_5_reg_7911.read());
}

void lstm_kernel::thread_zext_ln311_fu_5062_p1() {
    zext_ln311_fu_5062_p1 = esl_zext<12,11>(tmp_15_fu_5055_p3.read());
}

void lstm_kernel::thread_zext_ln312_1_fu_5260_p1() {
    zext_ln312_1_fu_5260_p1 = esl_zext<64,10>(add_ln312_2_reg_7941.read());
}

void lstm_kernel::thread_zext_ln312_2_fu_5101_p1() {
    zext_ln312_2_fu_5101_p1 = esl_zext<12,9>(tmp_18_fu_5094_p3.read());
}

void lstm_kernel::thread_zext_ln312_3_fu_5298_p1() {
    zext_ln312_3_fu_5298_p1 = esl_zext<64,12>(add_ln312_4_reg_7916.read());
}

void lstm_kernel::thread_zext_ln312_fu_5090_p1() {
    zext_ln312_fu_5090_p1 = esl_zext<12,11>(tmp_17_fu_5083_p3.read());
}

void lstm_kernel::thread_zext_ln313_1_fu_5286_p1() {
    zext_ln313_1_fu_5286_p1 = esl_zext<64,11>(add_ln313_2_reg_7951.read());
}

void lstm_kernel::thread_zext_ln313_2_fu_5129_p1() {
    zext_ln313_2_fu_5129_p1 = esl_zext<12,9>(tmp_20_fu_5122_p3.read());
}

void lstm_kernel::thread_zext_ln313_3_fu_5302_p1() {
    zext_ln313_3_fu_5302_p1 = esl_zext<64,12>(add_ln313_4_reg_7921.read());
}

void lstm_kernel::thread_zext_ln313_fu_5118_p1() {
    zext_ln313_fu_5118_p1 = esl_zext<12,11>(tmp_19_fu_5111_p3.read());
}

void lstm_kernel::thread_zext_ln314_1_fu_5294_p1() {
    zext_ln314_1_fu_5294_p1 = esl_zext<64,11>(add_ln314_2_reg_7956.read());
}

void lstm_kernel::thread_zext_ln314_2_fu_5157_p1() {
    zext_ln314_2_fu_5157_p1 = esl_zext<12,9>(tmp_22_fu_5150_p3.read());
}

void lstm_kernel::thread_zext_ln314_3_fu_5306_p1() {
    zext_ln314_3_fu_5306_p1 = esl_zext<64,12>(add_ln314_4_reg_7926.read());
}

void lstm_kernel::thread_zext_ln314_fu_5146_p1() {
    zext_ln314_fu_5146_p1 = esl_zext<12,11>(tmp_21_fu_5139_p3.read());
}

void lstm_kernel::thread_zext_ln318_fu_5310_p1() {
    zext_ln318_fu_5310_p1 = esl_zext<10,5>(j_2_reg_1941.read());
}

void lstm_kernel::thread_zext_ln319_fu_5335_p1() {
    zext_ln319_fu_5335_p1 = esl_zext<64,11>(sext_ln319_fu_5332_p1.read());
}

void lstm_kernel::thread_zext_ln320_fu_5348_p1() {
    zext_ln320_fu_5348_p1 = esl_zext<64,11>(sext_ln320_fu_5345_p1.read());
}

void lstm_kernel::thread_zext_ln321_fu_5361_p1() {
    zext_ln321_fu_5361_p1 = esl_zext<64,11>(sext_ln321_fu_5358_p1.read());
}

void lstm_kernel::thread_zext_ln322_fu_5374_p1() {
    zext_ln322_fu_5374_p1 = esl_zext<64,11>(sext_ln322_fu_5371_p1.read());
}

void lstm_kernel::thread_zext_ln341_fu_2228_p1() {
    zext_ln341_fu_2228_p1 = esl_zext<32,16>(min_v.read());
}

void lstm_kernel::thread_zext_ln342_fu_2235_p1() {
    zext_ln342_fu_2235_p1 = esl_zext<32,16>(max_v.read());
}

void lstm_kernel::thread_zext_ln344_fu_2260_p1() {
    zext_ln344_fu_2260_p1 = esl_zext<28,16>(norm_sampleinput_fu_2256_p1.read());
}

void lstm_kernel::thread_zext_ln348_10_fu_2350_p1() {
    zext_ln348_10_fu_2350_p1 = esl_zext<64,8>(add_ln348_1_reg_5764.read());
}

void lstm_kernel::thread_zext_ln348_11_fu_2354_p1() {
    zext_ln348_11_fu_2354_p1 = esl_zext<64,8>(add_ln348_2_reg_5769.read());
}

void lstm_kernel::thread_zext_ln348_12_fu_2368_p1() {
    zext_ln348_12_fu_2368_p1 = esl_zext<64,8>(add_ln348_3_reg_5784.read());
}

void lstm_kernel::thread_zext_ln348_13_fu_2372_p1() {
    zext_ln348_13_fu_2372_p1 = esl_zext<64,8>(add_ln348_4_reg_5789.read());
}

void lstm_kernel::thread_zext_ln348_14_fu_2394_p1() {
    zext_ln348_14_fu_2394_p1 = esl_zext<64,8>(add_ln348_5_reg_5804.read());
}

void lstm_kernel::thread_zext_ln348_15_fu_2398_p1() {
    zext_ln348_15_fu_2398_p1 = esl_zext<64,8>(add_ln348_6_reg_5809.read());
}

void lstm_kernel::thread_zext_ln348_16_fu_2420_p1() {
    zext_ln348_16_fu_2420_p1 = esl_zext<64,8>(add_ln348_7_reg_5834.read());
}

void lstm_kernel::thread_zext_ln348_17_fu_2424_p1() {
    zext_ln348_17_fu_2424_p1 = esl_zext<64,8>(add_ln348_8_reg_5839.read());
}

void lstm_kernel::thread_zext_ln348_18_fu_2469_p1() {
    zext_ln348_18_fu_2469_p1 = esl_zext<64,8>(add_ln348_9_reg_5864.read());
}

void lstm_kernel::thread_zext_ln348_19_fu_2473_p1() {
    zext_ln348_19_fu_2473_p1 = esl_zext<64,8>(add_ln348_10_reg_5869.read());
}

void lstm_kernel::thread_zext_ln348_1_fu_2839_p1() {
    zext_ln348_1_fu_2839_p1 = esl_zext<7,3>(i_1_reg_1815_pp0_iter1_reg.read());
}

void lstm_kernel::thread_zext_ln348_20_fu_2528_p1() {
    zext_ln348_20_fu_2528_p1 = esl_zext<64,8>(add_ln348_11_reg_5904.read());
}

void lstm_kernel::thread_zext_ln348_21_fu_2532_p1() {
    zext_ln348_21_fu_2532_p1 = esl_zext<64,8>(add_ln348_12_reg_5909.read());
}

void lstm_kernel::thread_zext_ln348_22_fu_2595_p1() {
    zext_ln348_22_fu_2595_p1 = esl_zext<64,8>(add_ln348_13_reg_5951.read());
}

void lstm_kernel::thread_zext_ln348_23_fu_2599_p1() {
    zext_ln348_23_fu_2599_p1 = esl_zext<64,8>(add_ln348_14_reg_5956.read());
}

void lstm_kernel::thread_zext_ln348_24_fu_2656_p1() {
    zext_ln348_24_fu_2656_p1 = esl_zext<64,8>(add_ln348_15_reg_5997.read());
}

void lstm_kernel::thread_zext_ln348_25_fu_2660_p1() {
    zext_ln348_25_fu_2660_p1 = esl_zext<64,8>(add_ln348_16_reg_6002.read());
}

void lstm_kernel::thread_zext_ln348_26_fu_2493_p1() {
    zext_ln348_26_fu_2493_p1 = esl_zext<64,3>(xor_ln348_fu_2487_p2.read());
}

void lstm_kernel::thread_zext_ln348_27_fu_2558_p1() {
    zext_ln348_27_fu_2558_p1 = esl_zext<64,4>(sext_ln348_20_fu_2555_p1.read());
}

void lstm_kernel::thread_zext_ln348_28_fu_2622_p1() {
    zext_ln348_28_fu_2622_p1 = esl_zext<64,5>(add_ln348_17_reg_5961.read());
}

void lstm_kernel::thread_zext_ln348_29_fu_2676_p1() {
    zext_ln348_29_fu_2676_p1 = esl_zext<64,5>(sext_ln348_21_fu_2673_p1.read());
}

void lstm_kernel::thread_zext_ln348_2_fu_2652_p1() {
    zext_ln348_2_fu_2652_p1 = esl_zext<6,3>(i_1_reg_1815.read());
}

void lstm_kernel::thread_zext_ln348_30_fu_2722_p1() {
    zext_ln348_30_fu_2722_p1 = esl_zext<64,6>(add_ln348_18_reg_6042.read());
}

void lstm_kernel::thread_zext_ln348_31_fu_2766_p1() {
    zext_ln348_31_fu_2766_p1 = esl_zext<64,6>(add_ln348_19_reg_6067.read());
}

void lstm_kernel::thread_zext_ln348_32_fu_2808_p1() {
    zext_ln348_32_fu_2808_p1 = esl_zext<64,6>(sext_ln348_22_fu_2805_p1.read());
}

void lstm_kernel::thread_zext_ln348_33_fu_2855_p1() {
    zext_ln348_33_fu_2855_p1 = esl_zext<64,6>(sext_ln348_23_fu_2852_p1.read());
}

void lstm_kernel::thread_zext_ln348_34_fu_2893_p1() {
    zext_ln348_34_fu_2893_p1 = esl_zext<64,7>(add_ln348_20_reg_6137.read());
}

void lstm_kernel::thread_zext_ln348_35_fu_2929_p1() {
    zext_ln348_35_fu_2929_p1 = esl_zext<64,7>(add_ln348_21_reg_6152.read());
}

void lstm_kernel::thread_zext_ln348_3_fu_2524_p1() {
    zext_ln348_3_fu_2524_p1 = esl_zext<5,3>(i_1_reg_1815.read());
}

void lstm_kernel::thread_zext_ln348_4_fu_2284_p1() {
    zext_ln348_4_fu_2284_p1 = esl_zext<8,7>(tmp_5_fu_2276_p3.read());
}

void lstm_kernel::thread_zext_ln348_5_fu_2296_p1() {
    zext_ln348_5_fu_2296_p1 = esl_zext<8,5>(tmp_6_fu_2288_p3.read());
}

void lstm_kernel::thread_zext_ln348_6_fu_2306_p1() {
    zext_ln348_6_fu_2306_p1 = esl_zext<64,8>(add_ln348_reg_5720.read());
}

void lstm_kernel::thread_zext_ln348_7_fu_2315_p1() {
    zext_ln348_7_fu_2315_p1 = esl_zext<64,8>(or_ln348_fu_2310_p2.read());
}

void lstm_kernel::thread_zext_ln348_8_fu_2325_p1() {
    zext_ln348_8_fu_2325_p1 = esl_zext<64,8>(or_ln348_1_fu_2320_p2.read());
}

void lstm_kernel::thread_zext_ln348_9_fu_2335_p1() {
    zext_ln348_9_fu_2335_p1 = esl_zext<64,8>(or_ln348_2_fu_2330_p2.read());
}

void lstm_kernel::thread_zext_ln348_fu_2464_p1() {
    zext_ln348_fu_2464_p1 = esl_zext<64,3>(i_1_reg_1815.read());
}

void lstm_kernel::thread_zext_ln352_fu_2979_p1() {
    zext_ln352_fu_2979_p1 = esl_zext<64,5>(select_ln352_1_fu_2965_p3.read());
}

void lstm_kernel::thread_zext_ln357_10_fu_3133_p1() {
    zext_ln357_10_fu_3133_p1 = esl_zext<5,3>(select_ln352_reg_6186.read());
}

void lstm_kernel::thread_zext_ln357_11_fu_3136_p1() {
    zext_ln357_11_fu_3136_p1 = esl_zext<4,3>(select_ln352_reg_6186.read());
}

void lstm_kernel::thread_zext_ln357_12_fu_3176_p1() {
    zext_ln357_12_fu_3176_p1 = esl_zext<64,4>(add_ln357_38_reg_6334.read());
}

void lstm_kernel::thread_zext_ln357_13_fu_3180_p1() {
    zext_ln357_13_fu_3180_p1 = esl_zext<64,5>(add_ln357_39_reg_6339.read());
}

void lstm_kernel::thread_zext_ln357_14_fu_3217_p1() {
    zext_ln357_14_fu_3217_p1 = esl_zext<64,5>(add_ln357_40_reg_6406.read());
}

void lstm_kernel::thread_zext_ln357_15_fu_3221_p1() {
    zext_ln357_15_fu_3221_p1 = esl_zext<64,6>(add_ln357_41_reg_6412.read());
}

void lstm_kernel::thread_zext_ln357_16_fu_3252_p1() {
    zext_ln357_16_fu_3252_p1 = esl_zext<64,6>(add_ln357_42_reg_6453.read());
}

void lstm_kernel::thread_zext_ln357_17_fu_3673_p1() {
    zext_ln357_17_fu_3673_p1 = esl_zext<64,6>(add_ln357_43_reg_6860.read());
}

void lstm_kernel::thread_zext_ln357_18_fu_3696_p1() {
    zext_ln357_18_fu_3696_p1 = esl_zext<64,6>(sext_ln357_36_fu_3693_p1.read());
}

void lstm_kernel::thread_zext_ln357_19_fu_3701_p1() {
    zext_ln357_19_fu_3701_p1 = esl_zext<64,7>(add_ln357_44_reg_6891.read());
}

void lstm_kernel::thread_zext_ln357_1_fu_3018_p1() {
    zext_ln357_1_fu_3018_p1 = esl_zext<12,11>(tmp_23_fu_3011_p3.read());
}

void lstm_kernel::thread_zext_ln357_20_fu_3715_p1() {
    zext_ln357_20_fu_3715_p1 = esl_zext<64,7>(add_ln357_45_reg_6917.read());
}

void lstm_kernel::thread_zext_ln357_21_fu_3719_p1() {
    zext_ln357_21_fu_3719_p1 = esl_zext<64,7>(add_ln357_46_reg_6922.read());
}

void lstm_kernel::thread_zext_ln357_2_fu_2999_p1() {
    zext_ln357_2_fu_2999_p1 = esl_zext<64,3>(select_ln352_reg_6186.read());
}

void lstm_kernel::thread_zext_ln357_3_fu_3029_p1() {
    zext_ln357_3_fu_3029_p1 = esl_zext<12,9>(tmp_24_fu_3022_p3.read());
}

void lstm_kernel::thread_zext_ln357_4_fu_3055_p1() {
    zext_ln357_4_fu_3055_p1 = esl_zext<64,12>(add_ln357_21_reg_6233.read());
}

void lstm_kernel::thread_zext_ln357_5_fu_3064_p1() {
    zext_ln357_5_fu_3064_p1 = esl_zext<64,12>(or_ln357_fu_3059_p2.read());
}

void lstm_kernel::thread_zext_ln357_6_fu_3090_p1() {
    zext_ln357_6_fu_3090_p1 = esl_zext<64,12>(or_ln357_1_fu_3085_p2.read());
}

void lstm_kernel::thread_zext_ln357_7_fu_3100_p1() {
    zext_ln357_7_fu_3100_p1 = esl_zext<64,12>(or_ln357_2_fu_3095_p2.read());
}

void lstm_kernel::thread_zext_ln357_8_fu_3670_p1() {
    zext_ln357_8_fu_3670_p1 = esl_zext<7,3>(select_ln352_reg_6186_pp1_iter1_reg.read());
}

void lstm_kernel::thread_zext_ln357_9_fu_3173_p1() {
    zext_ln357_9_fu_3173_p1 = esl_zext<6,3>(select_ln352_reg_6186.read());
}

void lstm_kernel::thread_zext_ln357_fu_2989_p1() {
    zext_ln357_fu_2989_p1 = esl_zext<7,3>(xor_ln357_fu_2984_p2.read());
}

void lstm_kernel::thread_zext_ln362_fu_3760_p1() {
    zext_ln362_fu_3760_p1 = esl_zext<7,3>(i_3_reg_1861.read());
}

void lstm_kernel::thread_zext_ln366_10_fu_3826_p1() {
    zext_ln366_10_fu_3826_p1 = esl_zext<64,4>(sext_ln366_16_fu_3823_p1.read());
}

void lstm_kernel::thread_zext_ln366_11_fu_4071_p1() {
    zext_ln366_11_fu_4071_p1 = esl_zext<64,5>(add_ln366_38_reg_7173.read());
}

void lstm_kernel::thread_zext_ln366_12_fu_3896_p1() {
    zext_ln366_12_fu_3896_p1 = esl_zext<64,5>(sext_ln366_17_fu_3893_p1.read());
}

void lstm_kernel::thread_zext_ln366_13_fu_4075_p1() {
    zext_ln366_13_fu_4075_p1 = esl_zext<64,6>(add_ln366_39_reg_7179.read());
}

void lstm_kernel::thread_zext_ln366_14_fu_4102_p1() {
    zext_ln366_14_fu_4102_p1 = esl_zext<64,6>(add_ln366_40_reg_7236.read());
}

void lstm_kernel::thread_zext_ln366_15_fu_4109_p1() {
    zext_ln366_15_fu_4109_p1 = esl_zext<64,6>(sext_ln366_18_fu_4106_p1.read());
}

void lstm_kernel::thread_zext_ln366_16_fu_3976_p1() {
    zext_ln366_16_fu_3976_p1 = esl_zext<64,6>(sext_ln366_19_fu_3973_p1.read());
}

void lstm_kernel::thread_zext_ln366_17_fu_4158_p1() {
    zext_ln366_17_fu_4158_p1 = esl_zext<64,7>(add_ln366_41_reg_7272.read());
}

void lstm_kernel::thread_zext_ln366_18_fu_4162_p1() {
    zext_ln366_18_fu_4162_p1 = esl_zext<64,7>(add_ln366_42_reg_7277.read());
}

void lstm_kernel::thread_zext_ln366_1_fu_3770_p1() {
    zext_ln366_1_fu_3770_p1 = esl_zext<64,3>(i_3_reg_1861.read());
}

void lstm_kernel::thread_zext_ln366_2_fu_3804_p1() {
    zext_ln366_2_fu_3804_p1 = esl_zext<12,9>(tmp_35_fu_3797_p3.read());
}

void lstm_kernel::thread_zext_ln366_3_fu_3831_p1() {
    zext_ln366_3_fu_3831_p1 = esl_zext<64,12>(add_ln366_21_reg_7000.read());
}

void lstm_kernel::thread_zext_ln366_4_fu_3840_p1() {
    zext_ln366_4_fu_3840_p1 = esl_zext<64,12>(or_ln366_fu_3835_p2.read());
}

void lstm_kernel::thread_zext_ln366_5_fu_3868_p1() {
    zext_ln366_5_fu_3868_p1 = esl_zext<64,12>(or_ln366_1_fu_3863_p2.read());
}

void lstm_kernel::thread_zext_ln366_6_fu_3878_p1() {
    zext_ln366_6_fu_3878_p1 = esl_zext<64,12>(or_ln366_2_fu_3873_p2.read());
}

void lstm_kernel::thread_zext_ln366_7_fu_3999_p1() {
    zext_ln366_7_fu_3999_p1 = esl_zext<6,3>(i_3_reg_1861.read());
}

void lstm_kernel::thread_zext_ln366_8_fu_4003_p1() {
    zext_ln366_8_fu_4003_p1 = esl_zext<5,3>(i_3_reg_1861.read());
}

void lstm_kernel::thread_zext_ln366_9_fu_3781_p1() {
    zext_ln366_9_fu_3781_p1 = esl_zext<64,3>(xor_ln366_fu_3775_p2.read());
}

void lstm_kernel::thread_zext_ln366_fu_3793_p1() {
    zext_ln366_fu_3793_p1 = esl_zext<12,11>(tmp_34_fu_3786_p3.read());
}

void lstm_kernel::thread_zext_ln373_1_fu_4381_p1() {
    zext_ln373_1_fu_4381_p1 = esl_zext<64,7>(tmp_45_fu_4373_p3.read());
}

void lstm_kernel::thread_zext_ln373_fu_4601_p1() {
    zext_ln373_fu_4601_p1 = esl_zext<64,5>(j_6_reg_1873.read());
}

void lstm_kernel::thread_zext_ln376_1_fu_4516_p1() {
    zext_ln376_1_fu_4516_p1 = esl_zext<16,12>(reg_2057.read());
}

void lstm_kernel::thread_zext_ln376_fu_4455_p1() {
    zext_ln376_fu_4455_p1 = esl_zext<64,16>(reg_1994.read());
}

void lstm_kernel::thread_zext_ln378_1_fu_4607_p1() {
    zext_ln378_1_fu_4607_p1 = esl_zext<13,12>(reg_2057.read());
}

void lstm_kernel::thread_zext_ln378_2_fu_4642_p1() {
    zext_ln378_2_fu_4642_p1 = esl_zext<16,13>(sub_ln378_1_reg_7529.read());
}

void lstm_kernel::thread_zext_ln378_fu_4569_p1() {
    zext_ln378_fu_4569_p1 = esl_zext<64,11>(sub_ln378_reg_7481.read());
}

void lstm_kernel::thread_zext_ln385_1_fu_4521_p1() {
    zext_ln385_1_fu_4521_p1 = esl_zext<16,12>(reg_2057.read());
}

void lstm_kernel::thread_zext_ln385_fu_4480_p1() {
    zext_ln385_fu_4480_p1 = esl_zext<64,16>(reg_1994.read());
}

void lstm_kernel::thread_zext_ln387_1_fu_4646_p1() {
    zext_ln387_1_fu_4646_p1 = esl_zext<13,12>(reg_2065.read());
}

void lstm_kernel::thread_zext_ln387_2_fu_4661_p1() {
    zext_ln387_2_fu_4661_p1 = esl_zext<16,13>(sub_ln387_1_reg_7555.read());
}

void lstm_kernel::thread_zext_ln387_fu_4593_p1() {
    zext_ln387_fu_4593_p1 = esl_zext<64,11>(sub_ln387_reg_7505.read());
}

}

