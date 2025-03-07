//required headers
#include<stdio.h>
#include"head4.h"
#include"stdbool.h"


//function of an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2. 
//author:bhavik parekh
//created:7 jan 2025
//modified:7 jan 2025

void squeeze(char s1[],char s2[]){

	int index1,index2,index3;
	for(index3=0;s2[index3] !='\0';++index3){
		for(index1=index2=0; s1[index1] !='\0' ; ++index1){
			if(s1[index1] != s2[index3]){
				s1[index2++]=s1[index1];
			}
		}	
	
	s1[index2]='\0';
	}

}
