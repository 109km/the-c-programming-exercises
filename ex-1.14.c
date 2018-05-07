/**
 * Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
*/

/**
 * Output looks like:
 * 
 0 white
################################################### 22 other
###### 3 number0
############# 6 number1
################## 8 number2
################## 8 number3
######### 4 number4
########### 5 number5
############# 6 number6
################ 7 number7
#################### 9 number8
####################### 10 number9
 * 
 * Question: How to make a row as wide as the same?
*/

#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main()
{
  int c, i, j, nc;
  int nother, nwhite;
  int ndigit[10];

  nc = nother = nwhite = 0;

  c = getchar();

  for (i = 0; i < 10; ++i)
  {
    ndigit[i] = i;
  }

  while (c != EOF)
  {
    ++nc;
    if (c == ' ' || c == '\t')
    {
      ++nwhite;
    }
    else if (c >= '0' && c <= '9')
    {
      ++ndigit[c - '0'];
    }
    else
    {
      ++nother;
    }
    c = getchar();
  }

  for (i = 0; i < (nwhite * 100 / nc); ++i)
  {
    printf("#");
  }
  printf(" %d white\n", nwhite);

  for (i = 0; i < (nother * 100 / nc); ++i)
  {
    printf("#");
  }
  printf(" %d other\n", nother);

  for (i = 0; i < 10; ++i)
  {
    for (j = 0; j < (ndigit[i] * 100 / nc); ++j)
    {
      printf("#");
    }
    printf(" %d number%d\n", ndigit[i], i);
  }
}