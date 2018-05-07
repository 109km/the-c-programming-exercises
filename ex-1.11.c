/**
 * Exercise 1-11. How would you test the word count program? 
 * What kinds of input are most likely to uncover bugs if there are any?
*/

/**
 * Input should include all kinds of characters and
 * each line may start with blank or a tab. 
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

  nc = 0;
  state = nl = nw = 0;

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
  }

  printf("characters=%ld,words=%d,lines=%d",nc,nw,nl);
}