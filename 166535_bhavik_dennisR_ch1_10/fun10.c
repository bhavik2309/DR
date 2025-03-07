//required headers
#include<stdio.h>
#include "head10.h"


//author:bhavik parekh
//created:30 dec 2024
//modified:30 dec 2024
//find function to change the tab with '\t' backspace prints '\b' and for \ it prints '\\'
void Find()
{ 
      int iChar;	
      while ((iChar = getchar()) != EOF) {
        if (iChar == '\t') 
            // If the character is a tab, print \t
            putchar('\\t');
        if (iChar == '\b') 
            // If the character is a backspace, print \b
            putchar("\\b");
        if (iChar == '\\') 
            // If the character is a backslash, print 
            putchar("\\");
       
           // Otherwise, print the character as it is
            putchar(iChar);
        
    }
}


