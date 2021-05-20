#include "lstm_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lstm_kernel::thread_zext_ln394_1_fu_4656_p1() {
    zext_ln394_1_fu_4656_p1 = esl_zext<16,12>(reg_2057.read());
}

void lstm_kernel::thread_zext_ln394_fu_4637_p1() {
    zext_ln394_fu_4637_p1 = esl_zext<64,16>(reg_1994.read());
}

void lstm_kernel::thread_zext_ln396_1_fu_4811_p1() {
    zext_ln396_1_fu_4811_p1 = esl_zext<13,12>(reg_2065.read());
}

void lstm_kernel::thread_zext_ln396_2_fu_4826_p1() {
    zext_ln396_2_fu_4826_p1 = esl_zext<16,13>(sub_ln396_1_reg_7656.read());
}

void lstm_kernel::thread_zext_ln396_fu_4709_p1() {
    zext_ln396_fu_4709_p1 = esl_zext<64,11>(sub_ln396_reg_7601.read());
}

void lstm_kernel::thread_zext_ln403_1_fu_4526_p1() {
    zext_ln403_1_fu_4526_p1 = esl_zext<16,13>(reg_2061.read());
}

void lstm_kernel::thread_zext_ln403_fu_4511_p1() {
    zext_ln403_fu_4511_p1 = esl_zext<64,16>(reg_1999.read());
}

void lstm_kernel::thread_zext_ln405_fu_4597_p1() {
    zext_ln405_fu_4597_p1 = esl_zext<64,11>(sub_ln405_reg_7514.read());
}

void lstm_kernel::thread_zext_ln414_1_fu_4821_p1() {
    zext_ln414_1_fu_4821_p1 = esl_zext<16,13>(reg_2061.read());
}

void lstm_kernel::thread_zext_ln414_fu_4806_p1() {
    zext_ln414_fu_4806_p1 = esl_zext<64,16>(sext_ln411_fu_4778_p1.read());
}

void lstm_kernel::thread_zext_ln416_fu_4865_p1() {
    zext_ln416_fu_4865_p1 = esl_zext<64,11>(sub_ln416_reg_7681.read());
}

void lstm_kernel::thread_zext_ln425_1_fu_4915_p1() {
    zext_ln425_1_fu_4915_p1 = esl_zext<64,11>(sext_ln425_1_fu_4911_p1.read());
}

void lstm_kernel::thread_zext_ln425_fu_4920_p1() {
    zext_ln425_fu_4920_p1 = esl_zext<64,5>(j_7_reg_1896.read());
}

}

