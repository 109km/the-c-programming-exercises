/**
 * Exercise 1-19. 
 * Write a function reverse(s) that reverses the character string s. 
 * Use it to write a program that reverses its input a line at a time.
*/

#include <stdio.h>
#define MAXQUENE 1000

char line[MAXQUENE];
int gline(char s[]);
void reverse(char s[]);

int main()
{
  int len, i;
  while ((len = gline(line)) > 0)
  {
    reverse(line);
    for (i = 0; line[i] != '\0' && line[i] != '\n'; ++i)
    {
      putchar(line[i]);
    }
    putchar('\n');
    putchar('\0');
  }
}

int gline(char s[])
{
  int c, i;
  for (c = 0, i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n')
  {
    s[i] = '\n';
    ++i;
  }
  s[i] = '\0';
  return i;
}

void reverse(char s[])
{
  int i, j;
  char tmp;
  for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    ;

  --i;
  
  for (j = 0; j < i; j++)
  {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    --i;
  }
}
