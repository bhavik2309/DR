




//reqired header file
#include <stdio.h>
#include "head8.h"
// count the input of newline tabs and blankspace
void Character_Counting()
{
        int c, nl, nt, nb,nc, state;
        nl = nt = nb = nc = 0;

        while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n') 
        ++nl;
        if (c == '\t')
        ++nt;
        if (c == ' ')
        ++nb;
        }
   
        printf("newlines: %d\ntabs: %d\nblanks: %d\ntotal character: %d\n ", nl, nt, nb,nc);
}
