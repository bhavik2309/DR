#include <stdio.h>
#include "head20.h"

// Function to process input, replace tabs, and maintain spacing
void Detab() {
    int c, x = 0, r;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
	    printf(" <-- this is output\n");
            putchar(c);
            x = 0;
        } else if (c == '\t') {
            r = TAB - x % TAB;
            while (r-- != 0) {
                putchar(' ');
                x++;
            }
        } else {
            putchar(c);
            x++;
        }
    }
}
