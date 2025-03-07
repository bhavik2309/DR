#include<stdio.h>




int main(){

	 char input[100],result[1000];
    
    	
    	printf("enter hex number(ctrl d to exit):\n");
	scanf("%s",input);
	
	expand(input,result);
	printf("%s\n",result);
	return 0;

}

