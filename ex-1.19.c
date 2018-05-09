/**
 * Exercise 1-19. 
 * Write a function reverse(s) that reverses the character string s. 
 * Use it to write a program that reverses its input a line at a time.
*/

#include <stdio.h>
#define MAXQUENE 1000

char line[MAXQUENE];
int gline();
void reverse(int len);

int main()
{
  extern char line[];
  int len, i;
  char rline;
  while ((len = gline()) > 0)
  {
    reverse(len);
    for (i = 0; i < len; i++)
    {
      if (line[i] != '\n' && line[i] != '\0')
        putchar(line[i]);
    }
    putchar('\n');
    putchar('\0');
  }
}

int gline()
{
  extern char line[];
  int c, i;
  for (c = 0, i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n')
  {
    line[i] = '\n';
    ++i;
  }
  line[i] = '\0';
  return i;
}

void reverse(int len)
{
  extern char line[];
  int i, j;
  char tmp[MAXQUENE];
  for (i = len - 1, j = 0; i >= 0; i--)
  {
    tmp[j] = line[i];
    ++j;
  }
  for (i = 0; i < len; i++)
  {
    line[i] = tmp[i];
  }
}
