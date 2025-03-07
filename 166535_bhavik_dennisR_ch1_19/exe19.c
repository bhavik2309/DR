//required header
#include <stdio.h>
#define MAXIMUM 1000

//program to get the string input from user and reverse that string
//author: bhavik parekh
//created:2 jan 2025
//modified:2 jan 2025

int main()
{
    int len;
    char line[MAXIMUM];
    printf("enter the string to reverse(ctrl d to exit):\n");
    while ((len = getLine(line, MAXIMUM)) > 0)
    {	
	printf("\nreversed string:");
        reverse(line,len);
        printf("%s\n", line);
	printf("\nenter the string to reverse(ctrl d to exit):\n");
    }

    return 0;
}

