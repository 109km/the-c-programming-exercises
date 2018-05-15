/**
 * Exercise 1-24. 
 * Write a program to check a C program for 
 * rudimentary syntax errors like unmatched parentheses, 
 * brackets and braces. Don't forget about quotes, 
 * both single and double, escape sequences, and comments. 
 * (This program is hard if you do it in full generality.)
*/

#include <stdio.h>
#define MAXQUENE 1000

int gline(char s[]);

int main()
{
  int len, i;
  char line[MAXQUENE];

  int brace, parenthesis, s_quote, d_quote;

  brace = parenthesis = 0;
  s_quote = d_quote = -1;

  while ((len = gline(line)) > 0)
  {
    for (i = 0; line[i] != '\0' && line[i] != '\n'; ++i)
    {
      if ( line[i] == '[' ){
        ++brace;
      }
      if ( line[i] == ']' ){
        --brace;
      }
      if ( line[i] == '{' ){
        ++parenthesis;
      }
      if ( line[i] == '}' ){
        --parenthesis;
      }
      if ( line[i] == '\'' ){
        s_quote *= -1;
      }
      if ( line[i] == '\"' ){
        d_quote *= -1;
      }
    }
  }

  if (brace > 0)
    printf("Missing brace\n");

  if (parenthesis > 0)
    printf("Missing parenthesis\n");

  if (s_quote > 0)
    printf("Missing single quote\n");

  if (d_quote > 0)
    printf("Missing double quote\n");
  
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