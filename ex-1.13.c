/**
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. 
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main()
{
  int c;
  int nw;
  int state;
  int count;

  nw = state = 0;

  c = getchar();

  while (c != EOF)
  {
    if (c == ' ' || c == '\t' || c == '\n')
    {
      state = OUT_WORD;
    }
    else
    {
      if (state == OUT_WORD)
      {
        ++nw;
      }
      state = IN_WORD;
    }
    c = getchar();
  }

  for (count = 0; count < nw; ++count)
  {
    printf("#");
  }
  printf("%d\n", nw);
}