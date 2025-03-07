#include<stdio.h>
#include"head9.h"


int bitcount(int x){

	int b;

	while(x!=0){
		x&=x-1;
		   b++;}
	printf("number of 1's in the input is %d\n",b);
	return 0;	
}


