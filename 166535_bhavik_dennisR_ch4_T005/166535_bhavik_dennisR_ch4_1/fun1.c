//required header
#include<stdio.h>
#include"head1.h"



//function to find the rightmost occurrence of 't' in string and return the index of the 't', if there is none then return '1'
//author:bhavik parekh
//created:17 jan 2025
//modified:17 jan 2025
int strindex(char input[],char pattern[])
 {
 int iCount1,iCount2,index;
// char cChar; 
 	
 /*	while(s[i]!='\0'){
		 i++;
	}

	while(t[k]!='\0'){
                 k++;
        }

 	*/
	for(iCount2=0;pattern[iCount2]!='\0';iCount2++);
	for(iCount1=0;input[iCount1]!='\0';iCount1++);
	 
	//cChar=t[k-1];
	
	for(index=iCount1;index>=0;index--){

		if(input[index]==pattern[iCount2-1]){
		 return index+1;
		}
		
	}

	
	return -1;
	

 }
			

		
		
				
				
		

		
	

	
 
