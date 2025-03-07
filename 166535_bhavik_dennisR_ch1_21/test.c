#include <stdio.h>

#define TABSIZE 4

int main()
{
    int c = 0;
    int i = 0;
    int spaceCount = 0;
    while ( (c = getchar()) != EOF )
    {
        if (c == ' ')
        {
            ++spaceCount;
            if (spaceCount == TABSIZE)
            {
                spaceCount = 0;
                putchar('\t');
            }
        }
        else
        {
            for (i = 0; i < spaceCount; ++i)
            {
                putchar(' ');
            }
            spaceCount = 0;
            putchar(c);
        }
    }
    return 0;
}
