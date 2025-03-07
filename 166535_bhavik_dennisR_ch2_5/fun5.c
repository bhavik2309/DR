//required headers
#include<stdio.h>
#include"head5.h"


//the function about any(s1,s2), which returns the first location in a string s1where any character from the string s2 occurs, or -1 if s1 contains no characters from s2
//author:bhavik parekh
//created:7 jan 2025
//modified:7 jan 2025

int any(char s1[],char s2[]){

	int index1,index2;
	for(index1=0;s2[index1] !='\0';++index1){
		for(index2=0; s1[index2] !='\0' ; ++index2){
			if(s1[index2] == s2[index1]){
				return index2+1;
			}
		}	
	
	}
	return -1;
}
