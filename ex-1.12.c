/**
 * Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main()
{
  long nc;
  int nl, nw;
  int c;
  int state;
  int last;

  nc = 0;
  state = last = nl = nw = 0;

  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == ' ' || c == '\t')
    {
      state = OUT_WORD;
    }
    else if (c == '\n')
    {
      ++nl;
      state = OUT_WORD;
    }
    else
    {
      if (state == OUT_WORD){
        ++nw;
      }
      state = IN_WORD;
    }

    if ( state == OUT_WORD && last == 0){
      printf("\n");
      last = 1;
    }else{
      putchar(c);
      last = 0;
    }
  }
  
}