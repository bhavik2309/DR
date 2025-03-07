//required header
#include<stdio.h>



//main funtion of program to write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2. 
//author:bhavik parekh
//created:7 jan 2025
//modified:7 jan 2025

int main(){

	char string1[100],string2[100];
    	int index1,index2;
	index1=index2=0;
    	char ch;
	printf("enter string1:");
	while ((ch = getchar()) != EOF &&  ch != '\n') {
        	string1[index1++] = ch;
    }	
	printf("enter string2:");
        while ((ch = getchar()) != EOF &&  ch != '\n') {
        	string2[index2++] = ch;
    }
	squeeze(string1,string2);
	printf("output string:%s\n",string1);
	//printf("string2:%s\n",string2);
	return 0;
}
