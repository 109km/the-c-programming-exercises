/**
 * Exercise 1-18. 
 * Write a program to remove trailing blanks and tabs from each line of input,
 * and to delete entirely blank lines.
*/

#include <stdio.h>
#define MAXQUENE 1000

char line[MAXQUENE];
int gline();

int main()
{
  extern char line[];
  int len, head, tail, inn;
  while ((len = gline()) > 0)
  {
    // Record the head position which is not blank
    for (head = 0; line[head] == ' ' || line[head] == '\t'; head++)
      ;
    
    // Record the tail position which is not blank
    for (tail = len; line[tail] == ' ' || line[tail] == '\t' || line[tail] == '\n' || line[tail] == '\0'; tail--)
      ;

    // Outputs the content between `head` and `tail`
    if (tail - head >= 0)
    {
      for (inn = head; inn <= tail; inn++)
        putchar(line[inn]);
      
      putchar('\n');
      putchar('\0');
    }
  }
}

int gline()
{
  extern char line[];
  int c, i;

  for (c = 0, i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n')
  {
    line[i] = '\n';
    ++i;
  }
  line[i] = '\0';
  return i;
}
