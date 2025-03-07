//required headers
#include<stdio.h>
#include"head6.h"

void setbit(int x,int inumber,int iposition, int y){
	
	int mask;
	long long output;
	mask= ((1<<inumber)-1)<<iposition;

	int variable1,variable2,variable3;
	variable1 = y & mask;
	variable2 = x & (~(mask));

	variable3 = variable1 | variable2;
	printf("\noutput bit string:");
	binary(variable3);
	

	return 0;
}	

void binary(int decimal){
	

	int i;
	for(i=15;i>=0;--i){
	unsigned int binary= (decimal >> i) & 1;
	printf("%u",binary);
	}
	printf("\n");


}

