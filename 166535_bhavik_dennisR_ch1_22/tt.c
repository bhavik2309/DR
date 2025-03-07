#include <stdio.h>

#define LINELENGTH 5	/* n-th column of input */

int main(void)
{
	int i, c;

	i = 0;
	while((c = getchar()) != EOF)
	{
		++i;
		putchar(c);
		if (i >= LINELENGTH && c == ' ')
		{
			putchar('\0');
			i = 0;
			putchar('\n');
		}
	}

	return 0;
}
