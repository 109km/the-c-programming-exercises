/**
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main()
{
  int nBlank, nTab, nNew;
  nBlank = 0;
  nTab = 0;
  nNew = 0;

  int c;

  for (; (c = getchar()) != EOF;)
  {
    if ( c == ' ' ){
      ++nBlank;
    }
    if ( c == '\t' ){
      ++nTab;
    }
    if ( c == '\n' ){
      ++nNew;
    }
  }
  printf("blank=%d,tab=%d,newline=%d\n",nBlank,nTab,nNew);
}