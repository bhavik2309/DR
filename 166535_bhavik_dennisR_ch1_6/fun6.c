//required headers
#include "head6.h"
#include<stdio.h>


//author:bhavik parekh
//created:
//modified:
//verify function to verify the value of char in file and at END OF FILE
void verify(){

	 int iChar;
       while (iChar = getchar() !=EOF){
	       printf("in file:%d\n",iChar);}
	printf("at EOF:%d\n",iChar);

}
