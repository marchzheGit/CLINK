/*******************************
 * FileName: lstm_kernel.h
 * Designer: Zhe
 * Modified: 06/07/2019
 * Describe: Header file of the lstm_kernel.c
 ************************************************/


#ifndef _LSTM_KERNEL_H_
#define _LSTM_KERNEL_H_

#include <stdio.h>
#include "ap_cint.h"

#define SCALER 4096
#define LUT_SIZE 1024
#define N 20


void lstm_kernel(
	uint1 mode,
	uint1 init,
	uint16 sampleinput,
	uint16 max_v,
	uint16 min_v,
	int16 weight[N*4+N*N*4+N*4+N+N],
    volatile int16 *lstm_out);

#endif
