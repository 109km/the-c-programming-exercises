/**
 * Exercise 1-9. Write a program to copy its input to its output, 
 * replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>

#define IN_BLANK 1
#define OUT_BLANK 0

int main()
{
  long nc;
  int nBlank, nTab, nNew;
  int c, state;

  state = OUT_BLANK;

  for (nc = 0; (c = getchar()) != EOF; ++nc)
  {
    if (c == ' ')
    {
      if (state == IN_BLANK)
      {
        c = -1;
      }
      state = IN_BLANK;
    }
    else
    {
      state = OUT_BLANK;
    }

    if (c > 0)
    {
      putchar(c);
    }
  }
}