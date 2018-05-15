/**
 * Exercise 1-21. 
 * Write a program `entab` that replaces strings of blanks 
 * by the minimum number of tabs and blanks to achieve the same spacing. 
 * Use the same tab stops as for `detab`. 
 * When either a tab or a single blank would suffice to reach a tab stop, 
 * which should be given preference?
*/

#include <stdio.h>
#define MAXQUENE 1000
#define TABSIZE 4

int gline(char s[]);

int main()
{
  int len, i, n, space;
  char line[MAXQUENE];
  space = 0;
  while ((len = gline(line)) > 0)
  {
    for (i = 0; line[i] != '\0'; ++i)
    {
      // if character is blank, just count
      if (line[i] == ' ')
      {
        ++space;
      }
      // if the character isn't blank, output
      // the blanks which are not outputed,and
      // the current character
      else
      {
        if (space > 0)
        {
          for (n = 0; n < space; ++n)
          {
            putchar(' ');
          }
        }
        space = 0;
        putchar(line[i]);
      }
      if (space == TABSIZE)
      {
        putchar('\t');
        space = 0;
      }
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