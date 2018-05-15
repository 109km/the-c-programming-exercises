/**
 * Exercise 1-23. 
 * Write a program to remove all comments from a C program. 
 * Don't forget to handle quoted strings and character constants properly. 
 * C comments don't nest.
*/

#include <stdio.h>
#define MAXQUENE 1000
#define TABSIZE 4
int gline(char s[]);

int main()
{
  int len, i, n, space, commentSlash;
  int isInComment, isInQuote;
  char line[MAXQUENE];
  space = isInQuote = isInComment = 0;
  while ((len = gline(line)) > 0)
  {
    for (i = 0; line[i] != '\0' && line[i] != '\n'; ++i)
    {

      // if is string variable
      if (line[i] == '\'' || line[i] == '\"')
      {
        isInQuote = 1;
      }
      // If character is in the quote
      if (isInQuote)
      {
        putchar(line[i]);
      }
      else
      {
        //
        if (line[i] == '/' && line[i + 1] == '*')
        {
          i = i + 2;
          isInComment = 1;
        }
        if (line[i] == '*' && line[i + 1] == '/')
        {
          i = i + 2;
          isInComment = 0;
        }
        if (isInComment == 0)
        {
          printf("%c", line[i]);
        }
      }
    }
    putchar('\n');
    putchar('\0');
  }
}

int gline(char s[])
{
  int c, i;
  i = 0;
  for (i = 0; (i < MAXQUENE - 1) && (c = getchar()) != '\n' && c != EOF; ++i)
  {
    s[i] = c;
  }
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}