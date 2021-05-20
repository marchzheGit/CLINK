/*********************************
 * FileName: lstm_kernel_tb.c
 * Designer: Zhe
 * Modified: 06/07/2019
 * Describe: Testbench file of the lstm_kernel.c
 ***************************************************/

#include "lstm_kernel.h"

int main() {

	FILE *ifp;
	char file_name[100];

	int i;
	int weight[N*4+N*N*4+N*4+N+N];
	int weight_ld[N*4+N*N*4+N*4+N+N];
	int input[100];
	int expect_output[100];
	int16 out;
	uint1 mode;
	int sampleinput;
	uint8 scale_fac;
	uint8 scale_mul;
	uint1 test_passed;

	sprintf(file_name, "weight.txt");
	ifp = fopen(file_name, "r");
	for (i = 0; i < N*4+N*N*4+N*4+N+N; ++i)
	{
		fscanf(ifp, "%d", (weight+i));
		weight_ld[0] = 0;
	}

	weight_ld[0] = 0;

	sprintf(file_name, "input.txt");
	ifp = fopen(file_name, "r");
	for (i = 0; i < 100; ++i)
	{
		fscanf(ifp, "%d", (input+i));
	}
	fclose(ifp);

	sprintf(file_name, "output.txt");
	ifp = fopen(file_name, "r");
	for (i = 0; i < 100; ++i)
	{
		fscanf(ifp, "%d", (expect_output+i));
	}

	// Configure weights
	mode = 1;
	sampleinput = 0;
	scale_fac = 0;
	scale_mul = 0;

    lstm_kernel(1, sampleinput, scale_fac, scale_mul, weight, &out);

	printf("[Info] Finish weight loading.\n");

	// Perform inference test
	mode = 0;
	scale_fac = 1;
	scale_mul = 15;
	test_passed = 1;
	for (i = 0; i < 100; ++i)
	{
		sampleinput = input[i];
		lstm_kernel(0, sampleinput, scale_fac, scale_mul, weight, &out);
		printf("%d\n", out);
		if (out != (int16)expect_output[i])
		{
			test_passed = 0;
		}
	}

	if (test_passed == 1)
	{
		printf(" *************** \n");
		printf("   Test Passed!  \n");
		printf(" *************** \n");
	}
	else
	{
		printf(" ****************** \n");
		printf("  Test NOT Passed!  \n");
		printf(" ****************** \n");
	}

	fclose(ifp);

}
