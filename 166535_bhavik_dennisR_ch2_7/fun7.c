//required headers
#include<stdio.h>
#include"head7.h"

void invert(int x,int inumber,int iposition){
	
	int mask;
	long long output;
	mask= ((1<<inumber)-1)<<iposition;

	int variable;

	variable = x ^ mask;
	printf("\noutput bit string:");
	binary(variable);
	

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

