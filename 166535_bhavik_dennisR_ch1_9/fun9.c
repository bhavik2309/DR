//funtion to replace multiple blanks in single blank
//author:bhavik parekh
//created:30 dec 2024
//modified:30 dec 2024

#include <stdio.h>
#include "head9.h"
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

void Singleblank(){
    int iC, iState;

    iState = OUT;

    while ((iC = getchar()) != EOF) {
        if (iC == ' ' || iC == '\t') {
            if (iState == OUT) {
                putchar(iC);
                iState = IN;  // We are inside a blank space
            }
            // If we're already in the state IN (inside blanks), do nothing
        } else {
            putchar(iC);
            iState = OUT; // We're outside a word
        }
    }
    return 0;
}

