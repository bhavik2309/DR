#include<stdio.h>
#include<stdlib.h>



int main(){

	int inumber,iposition,index1,index2;
	int input1,input2;

	char input[32];

	printf("enter the value of first binary string:");
	fgets(input,32,stdin);
	input1 = strtoul(input,NULL,2);

	printf("\nenter the value of second binary string:");
	fgets(input,32,stdin);
	input2 = strtoul(input,NULL,2);

	printf("\nenter the value of position you want to change the binary string:");
	scanf("%d",&iposition);
	
	printf("\nenter the value of the number of bits you want to change from the position given:");
	scanf("%d",&inumber);


	setbit(input1,inumber,iposition,input2);
	return 0;



}
