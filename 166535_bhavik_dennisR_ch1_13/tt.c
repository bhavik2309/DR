#include <stdio.h>

/* *
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 * ----
 * ANSI C K&R - CHARACTER INPUT AND OUTPUT: PAGE 15 
 * The quantities IS_LOWER, IS_UPPER, IS_ALPHA, MAXLEN, OUT and IN (macros)
 * are symbolic constant, not variables, so they do not appear in declarations.
 * Symbolic constant names are conventionally written in upper case so they can
 * be readily distinguished from lower case variable name.
 * */
#define IS_UPPER(N) ((N) >= 'A' && (N) <= 'Z')   /* 'A'==65 && 'Z'==90 */
#define IS_LOWER(N) ((N) >= 'a' && (N) <= 'z')   /* 'a'==97 && 'z'==122 */
#define IS_ALPHA(N) (IS_LOWER(N) || IS_UPPER(N)) /* [A-Za-z] x*/
#define MAXLEN  17 /* buffer limit length */
#define OUT 0 /* outside the word */
#define IN  1 /* inside the word */

int main(void)
{
  int c = EOF,
  /* word buffer & word length */
      wbuf[MAXLEN],
      wlen = 0;
  int state = OUT,
  /* X and Y axis */
      x = 0, /* horizontal histogram */
      y = 0; /* vertical histogram */

  /* fill word buffer with zero */
  for (int i = 0; i <= MAXLEN; i++)
    wbuf[i] = 0;

  /* word count while giving data */
  while((c = getchar()) != EOF) {
    if (IS_ALPHA(c) && wlen < MAXLEN) {
      state = IN;
      ++wlen;
    } else if (wlen > 0 && wlen < MAXLEN) {
      state = OUT;
      ++wbuf[wlen];
      wlen = 0;
    }
  }
  ++wbuf[wlen]; /* return value without EOF */

  /* give to 'x' and 'y' the length of longest word */
  for (int i = 1; i < MAXLEN; i++) {
    if (wbuf[i] && i > x)
      x = i;
    if (wbuf[i] > y)
      y = wbuf[i];
  }

  /* horizontal histogram */
  puts("\nHORIZONTAL HISTOGRAM");
  for (int i = 1; i <= x; i++) {
    printf("%2d | ", i);
    for (int j = 0; j < wbuf[i]; j++)
      printf("* ");
  
    putchar('\n');
  }

  /* *
   * vertical histogram 
   * building the 'y' axis
   * */
  puts("\nVERTICAL HISTOGRAM");
  for (int i = y; i > 0; i--) {
    printf("%2d |", i);
    for(int j = 1; j <= x; j++) {
      if (wbuf[j] < i)
        printf("      ");
      else
        printf(" *    ");
    }
    putchar('\n');
  }
  if (wlen < MAXLEN)
    printf("   +--");

  for (int i = 1; i < x; i++)
    printf("------");
  putchar('\n');

  for (int i = 1; i <= x; i++)
    printf("%6d", i);
  putchar('\n');

  return 0;
}
