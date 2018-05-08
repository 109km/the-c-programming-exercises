/**
 * Exercise 1-18. 
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
*/

#include <stdio.h>
#define MAXLINE 1000
#define LONGLINESIZE 80
int gline(char line[], int maxline);

int main()
{
  int len;            // the length of current line
  char line[MAXLINE]; // store the current line

  // start to get user's input by line
  while ((len = gline(line, MAXLINE)) > 0)
  {
    if (len > LONGLINESIZE)
      printf("%s,length is %d\n", line, len);
  }
  return 0;
}

// read a line into `s` and return length
int gline(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
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

// trim
char trim(char s[], int len)
{
  int i;
  char c;
  char ns[MAXLINE];
  int BLANK_START, BLANK_END, BLANK_POS;

  BLANK_START = -1;
  BLANK_END = -1;

  for (i = 0; c != '\0' && c != "\n"; ++i)
  {
    if (c == ' ' || c == '\t')
    {
      if (i == 0)
      {
        BLANK_START = 0;
      }
      else
      {
        
      }
    }
  }

  return ns;
}