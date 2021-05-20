#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /curr/zhechen/workspace/201905_RTCImgProc/1_FPGA/RTCImgProc-Ultra96/hls_kernel/hls_lstm/lstm_kernel/solution1/.autopilot/db/a.g.bc ${1+"$@"}
