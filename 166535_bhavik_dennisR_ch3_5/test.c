#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define MAXLEN		32	/* an integer has 32-bits in my machine */
#define BASE_MIN	 2	/* well, you cannot go lower */
#define BASE_MAX	36	/* amount of alphanumeric chars available */

void itob(int n, char s[], char b);
void reverse(char s[]);

int main() {

	int n;
	printf("enter the value of n:");
	scanf("%d",&n);	/* I'm getting its value from the trash */
	char s[MAXLEN + 1], b;

	printf("Value of %d in...\n", n);
	for (b = BASE_MIN; b <= BASE_MAX; b++)
	{
		itob(n, s, b);
		printf("Base %d: %s\n", b, s);
	}

	exit(0);
}

void itob(int n, char s[], char b)
{

	int i, j, c;

	if (b < BASE_MIN || b > BASE_MAX)
	{
		printf("Valid base ranges from %d to %d.\n",
				BASE_MIN, BASE_MAX);
		exit(1);
	}

	j = 0;
	if (n == 0)
		s[j++] = '0';

	for (i = n; i > 0; i /= b)
	{
		if ((c = i % b) <= 9)
			s[j++] = c + '0';
		else
			s[j++] = c - 10 + 'A';
	}

	s[j++] = '\0';

	reverse(s);
}

void reverse(char s[]) {

	int i, n;
	char line[MAXLEN + 1];

	for (i = 0; s[i] != '\0' && i < MAXLEN; ++i)
		;

	n = 0;
	if (i == 0 || s[i] == '\0')
		line[i] = '\0';

	if (i > 0)
	{
		for (--i; i >=0; --i) {
			line[i] = s[n];
			n++;
		}
		for (i = 0; line[i] != '\0'; i++)
			s[i] = line[i];
	}
}
