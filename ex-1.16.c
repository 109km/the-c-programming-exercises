/**
 * Exercise 1-16. 
 * Revise the main routine of the longest-line program 
 * so it will correctly print the length of arbitrary long input lines, 
 * and as much as possible of the text.
*/

#include <stdio.h>
#define MAXLINE 1000

int gline(char line[], int maxline);
void copy(char from[], char to[]);

int main()
{
  int len;               // the length of current line
  int max;               // the length of longest line
  char line[MAXLINE];    // store the current line
  char longest[MAXLINE]; // store the longest line

  max = 0;
  while ((len = gline(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(line, longest);
    }
  }
  if (max > 0)
  {
    printf("Line length is %d\nLongest string is %s\n", max, longest);
  }
  return 0;
}

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

void copy(char from[], char to[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}