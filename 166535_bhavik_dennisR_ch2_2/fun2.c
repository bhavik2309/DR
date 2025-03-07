//required header
#include"head2.h"
#include<stdio.h>
#define lim 10
//funtion of loop  equivalent to the for loop above without using && and ||
//author:bhavik parekh
//created:3 jan 2025
//modified:3 jan 2025

void eqloop()
{
	int i, c;
        char s[lim];
  	i=0;
         while(i<lim-1) {
              if((c=getchar()) != '\n') {
                   if(c != EOF) {
                         s[i] = c;
                   }
              }
              i++;
         }	
	printf("%s\n",s);
	printf("%d\n",i);
 

}
