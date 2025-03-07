/* Write a program to print a histogram of the frequencies of different characters in its input.
author: bhavik parekh
created: 31 Dec 2024
modified: 31 Dec 2024
*/
 
/* required header files */
#include <stdio.h>
 
#define MAX_CHAR 256  //Maximum number of possible characters (ASCII range)
 
/* start of main */
void Frequency_Histogram()
{
        int iChar;
        int freq[MAX_CHAR] = {0};  //Array to store the frequency of each character
 
    /* Read characters until EOF */
        while ((iChar = getchar()) != EOF)
    {
            freq[iChar]++;  //Increment the frequency of the character
    }
 
    //Print the histogram
    for (int index = 0; index < MAX_CHAR; index++)
    {
            if (freq[index] > 0)
            {
                    printf("Character '%c' (ASCII %d): ", index, index);
                    for (int index2 = 0; index2 < freq[index]; index2++)
            {
                    printf("*");  //Print '*' for each occurrence of the character
            }
            printf("\n");
        }
    }
 
}
