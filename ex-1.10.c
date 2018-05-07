/**
 * Exercise 1-10. Write a program to copy its input to its output, 
 * replacing each tab by \t, each backspace by \b, and each backslash by \\. 
 * This makes tabs and backspaces visible in an unambiguous way.
*/

/**
 * Question:How to test backspace char ?
*/

#include <stdio.h>
#define TAB 9
#define BACKSPACE 8
#define BACKSPLASH 92

int main()
{
  long nc;
  int c;
  int lastC;

  for (nc = 0; (c = getchar()) != EOF; ++nc)
  {
    if (c == TAB)
    {
      printf("\\t");
    }
    else if (c == BACKSPACE)
    {
      printf("\\b");
    }
    else if (c == BACKSPLASH)
    {
      printf("\\\\");
    }
    else
    {
      putchar(c);
    }
  }
}