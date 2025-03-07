//required headers
#include <stdio.h>
#include "head21.h"

// Function to replace spaces with tabs for defined number of space
// author:bhavik parekh
// created:3 jan 2025
// modified:3 jan 2025
void Entab() {
    int c = 0;
    int spaceCount = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++spaceCount;
            if (spaceCount == TABSIZE) {
                spaceCount = 0;
                putchar('\t'); // Replace spaces with a tab
            }
        } else {
// Print any remaining spaces before printing the non-space character
            for (int i = 0; i < spaceCount; ++i) {
                putchar(' ');
            }
            spaceCount = 0;
            putchar(c); // Print the current character
        }
    }
}
