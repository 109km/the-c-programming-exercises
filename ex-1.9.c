/**
 * Exercise 1-9. Write a program to copy its input to its output, 
 * replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main()
{
  long nc;
  int nBlank, nTab, nNew;
  int c;
  int lastC;

  for (nc = 0; (c = getchar()) != EOF; ++nc)
  {
    if (c != ' ')
    {
      putchar(c);
    }
    if (c == ' ')
    {
      if (lastC != ' ')
      {
        putchar(c);
      }
    }
    lastC = c;
  }
}