//required header
#include<stdio.h>
#include"head19.h"


//function to get input from user
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
//function to print the inputed string in reverse
//author:bhavik parekh
//created:2 jan 2025
//modified:2 jan 2025
void reverse(char line[], int len){
    int i, j;
    char temp;
    for(i = 0, j = len-1 ; i<j; ++i){
        temp = line[i];
        line[i] = line[j];
        line[j] = temp; 
        j--;
    }
}
