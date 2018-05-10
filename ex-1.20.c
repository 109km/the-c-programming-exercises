/**
 * Exercise 1-20. 
 * Write a program `detab` that replaces tabs in the input
 * with the proper number of blanks to space to the next tab stop. 
 * Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>
#define MAXQUENE 1000
#define TABSIZE 4

int gline(char s[]);
void detab(char s[], char t[]);

int main()
{
  int len, i;
  char line[MAXQUENE];
  char nline[MAXQUENE];
  while ((len = gline(line)) > 0)
  {
    detab(line, nline);
    printf("%s", nline);
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

void detab(char s[], char t[])
{
  int i, j, n;
  for (i = 0, j = 0, n = 0; s[i] != '\0'; ++i)
  {
    if (s[i] == '\t')
    {
      n = 0;
      while( n < TABSIZE){
        t[j] = ' ';
        ++j;
        ++n;
      }
    }else{
      t[j] = s[i];
      ++j;
    }
  }
}


