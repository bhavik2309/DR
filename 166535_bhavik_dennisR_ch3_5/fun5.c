//required headers
#include<stdio.h>
#include<string.h>
#include"head5.h"


int itob(int number,int base,){
	int n[10],i=0,j=0;

	while(number>0){

		n[i]=number%base;
		i++;
		number=number/base;
	
		printf("%d\n",n[--i]);
	}
	
//	printf("%d",n);

	reverse(n[strlen(n)]);
	printf("%u",reverse(n));
}


void reverse(char s[])
{
 	int c, i, j;
 	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
	 c = s[i];
	 s[i] = s[j];
	 s[j] = c;
	 }
 }
