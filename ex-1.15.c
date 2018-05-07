/**
 * Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/

#include <stdio.h>

int covertFtoC(int f);

int main()
{
  int low, high, step;
  step = 20;
  high = 300;
  for (low = 0; low <= high; low = low + step)
    printf("%3d%6d\n", low, covertFtoC(low));
}

int covertFtoC(int f)
{
  return (f - 32) * 5 / 9;
}