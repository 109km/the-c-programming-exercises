/**
 * Exercise 1-22. Write a program to ``fold'' long input lines 
 * into two or more shorter lines after the last 
 * non-blank character that occurs before the n-th column of input. 
 * Make sure your program does something intelligent with very long lines, 
 * and if there are no blanks or tabs before the specified column.
*/

#include <stdio.h>
#define MAXQUENE 1000
#define TABSIZE 4
#define FOLDLENGTH 80
int gline(char s[]);

int main()
{
  int len, i, n, spacepos;
  char line[MAXQUENE];
  spacepos = 0;
  while ((len = gline(line)) > 0)
  {
    if (len >= FOLDLENGTH)
    {
      for (i = 0, n = 1; line[i] != '\0' && line[i] != '\n'; ++i)
      {
        if (line[i] == ' ' || line[i] == '\t')
        {
          spacepos = i;
        }

        if (i == FOLDLENGTH)
        {
          line[spacepos] = '\n';
        }
      }
      printf("%s",line);
    }
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