//required header
#include<stdio.h>
#include"head1.h"

int main(){
 	
	int output,index1=0,index2=0;
		
	char input1[100],input2[100],ch;

		
	while((ch=getchar())!=EOF && ch!='\n'){
		input1[index1++]=ch;
		
	}
	while((ch=getchar())!=EOF && ch!='\n'){
                input2[index2++]=ch;

        }

/*	printf("enter the input");
	scanf("%s",input1);
	printf("enter the input");
        scanf("\n%s",input2);*/
	
	output=strindex(input1,input2);

	printf("index of %d",output);

	
	
	return 0;
	



}
