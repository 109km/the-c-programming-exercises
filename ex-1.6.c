/**
 * Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
*/

/**
 * In macOS, the terminal shows the input char once ,
 * then if we press enter key ,it will output the char once. So we'll see them twice.
 * And getchar() != EOF is 1.
*/

#include <stdio.h>

int main()
{
  int c;
  while ((c = getchar()) != EOF)
  {
    // printf("%d",c != EOF);
    putchar(c);
  }
}