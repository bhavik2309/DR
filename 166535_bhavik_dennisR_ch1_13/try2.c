#include <stdio.h>

/* Program prints a histogram of the lengths of
   words in its input. A horizontal-oriented bars.
   No fixed word length categories; any word length is shown. */

int main()
{
    int i, count, c;
    int nchars[100] = {0}; // Fixed size for word lengths up to 99
    int max_length = 0;    // Tracks the maximum word length encountered

    count = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n' && c != '\t') {
            ++count;
        } else if (count > 0) {
            if (count >= 100) {
                printf("100 character word is not allowed\n");
            } else {
                ++nchars[count];
                if (count > max_length) {
                    max_length = count; // Update the maximum word length
                }
            }
            count = 0; // Reset count for the next word
        }
    }

    if (count > 0) { // Handle case where last word doesn't end with whitespace
        if (count >= 100) {
            printf("Warning: Word length exceeds maximum array size (99). Skipping.\n");
        } else {
            ++nchars[count];
            if (count > max_length) {
                max_length = count;
            }
        }
    }

    printf("number of chars in words\n");
    for (i = 1; i <= max_length; ++i) { // Loop up to the maximum word length encountered
        if (nchars[i] > 0) { // Only print for lengths that occurred
            printf("%2d %4d ", i, nchars[i]);
            for (int j = 0; j < nchars[i]; ++j) {
                printf("#");
            }
            printf("\n");
        }
    }
}

