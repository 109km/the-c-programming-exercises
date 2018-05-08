/**
 * Exercise 1-17. 
 * Write a program to print all input lines that are longer than 80 characters.
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
      printf("%s,length is %d\n", line,len);
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