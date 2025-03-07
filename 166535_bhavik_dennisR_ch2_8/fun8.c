//required headers
#include<stdio.h>
#include"head8.h"

void rightrot(int x,int inumber){

        int mask;
	
        unsigned int variable1,variable2,variable3,variable;
        long long output;
        mask= ((1<<inumber)-1) ;
	variable1= mask & x;
	variable2= variable1 << (16 - inumber) ;
	variable3= x >> inumber;
	variable= variable2 | variable3 ;

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
