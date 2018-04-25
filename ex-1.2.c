/**
 * Exercise 1-2. Experiment to find out what happens when prints's argument string contains \c, 
 * where c is some character not listed above.
*/

#include <stdio.h>

int main()
{

  // While compiling, there is warning:unknown escape sequence '\c' [-Wunknown-escape-sequence]
  // If we run the compiled file, it outputs a messey code at the position of '\c'
  printf("hello world\c");
}