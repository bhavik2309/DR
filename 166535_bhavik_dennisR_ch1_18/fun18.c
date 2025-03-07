//required headerfile
#include <stdio.h>
#include"head18.h"
#define MAXIMUM 1000

//funtion to get the input from the user
//author:bhavik parekh
//created:2 jan 2025
//modified:2 jan 2025
int getLine(char s[], int lim)
{
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

//function to remove blank character (space and tab) in starting of line
//author:bhavik parekh
//created:2 jan 2025
//modified:2 jan 2025
void removeBlanks(char s[], int len)
{
    for (int i = 0; i <= len; i++)
    {
        if (s[i] == ' ' || s[i] == '\t')
            s[i] = '\b';
        else
            i = len + 1 ;
    }



}
