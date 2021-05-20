#include "lstm_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lstm_kernel::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"mode\" :  \"" << mode.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"init\" :  \"" << init.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"sampleinput\" :  \"" << sampleinput.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"max_v\" :  \"" << max_v.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"min_v\" :  \"" << min_v.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weight_Addr_A\" :  \"" << weight_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weight_EN_A\" :  \"" << weight_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weight_WEN_A\" :  \"" << weight_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weight_Din_A\" :  \"" << weight_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"weight_Dout_A\" :  \"" << weight_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weight_Clk_A\" :  \"" << weight_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"weight_Rst_A\" :  \"" << weight_Rst_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"lstm_out\" :  \"" << lstm_out.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"lstm_out_ap_vld\" :  \"" << lstm_out_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

