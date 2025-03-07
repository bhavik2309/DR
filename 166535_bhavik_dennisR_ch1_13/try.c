#include <stdio.h>

/* Program prints a histogram of the lengths of
   words in its input. A horizontal oriented bars.
   Words grater 20 charecters colects in 21-st bar */

int main()
{
        int i, count, c;
        int nchars[11];

        count = 0;
        for (i = 1; i <=10 ; ++i)
                nchars[i] = 0;

        while ((c = getchar()) != EOF) {
                if (c != ' ' && c != '\n' && c != '\t') {
                        ++count;
                } else if (count > 0 && count <= 9) {
                        ++nchars[count];
                        count = 0;
                } else if (count > 9) {
                        ++nchars[10];
                        count = 0;
                }
        }
        printf("histogram of characters in string:\n");
        for (i = 1; i < 11; ++i) {
                printf("%2d %4d ", i, nchars[i]);
                while (nchars[i] > 0) {
                        printf("#");
                        --nchars[i];
                }
                printf("\n");
        }
}
