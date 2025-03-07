#include<stdio.h>
#include"head12.h"
#define IN 1  
#define OUT 0

void Wordperline() {
    int iC, iState;

    iState = OUT;

    while ((iC = getchar()) != EOF) {
        if (iC == ' ' ||iC == '\t' || iC == '\n') {
            if (iState == IN) {
                putchar('\n');  // Print a new line when a word ends
                iState = OUT;    
            }
        } else {
            if (iState == OUT) {
                iState = IN;    
            }
            putchar(iC);  // Print the character
        }
    }

    return 0;
}  
