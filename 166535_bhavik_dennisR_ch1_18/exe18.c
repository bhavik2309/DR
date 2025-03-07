//required header 
#include<stdio.h>
#include"head18.h"
#define MAXIMUM 1000
int main()
{  
	int len;            
	char line[MAXIMUM];    
	
	printf("enter the string(ctrl d to exit):\n");
	while ((len = getLine(line, MAXIMUM)) > 0)

    	{    	   
	removeBlanks(line, len);
        printf("%s", line);
	printf("%d",len);
    }            
	
	return 0;          
}                                                                                                                                                       
