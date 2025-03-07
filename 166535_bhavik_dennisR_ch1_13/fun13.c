//function to create vertical histogram
//author:bhavik parekh
//created:31 dec 2024
//modified:31 dec 2024

//required header file
#include<stdio.h>
#include"head13.h"
void Histogram()
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
        printf("histogram of number of character words in string:\n");
        	for(i = 1; i < 11; ++i) {
		
                printf("%2d %4d ", i, nchars[i]);
                while (nchars[i] > 0) {
                        printf("#");
                        --nchars[i];
                }
                printf("\n");
        }
}
