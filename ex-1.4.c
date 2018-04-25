/**
 * Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
*/

/**
 * Running result is:
Fahrenheit   Celsius
  32.0          0.0
  50.0         10.0
  68.0         20.0
  86.0         30.0
 104.0         40.0
 122.0         50.0
 140.0         60.0
 158.0         70.0
 176.0         80.0
 194.0         90.0
 212.0        100.0
 230.0        110.0
 248.0        120.0
 266.0        130.0
 284.0        140.0
 302.0        150.0
 * 
*/

#include <stdio.h>

int main()
{
  float fTemp;
  float MIN_TEMP, MAX_TEMP;
  int STEP;

  MIN_TEMP = 0;
  MAX_TEMP = 150;
  STEP = 10;
  printf("%10s%10s\n", "Fahrenheit", "Celsius");
  while (MIN_TEMP <= MAX_TEMP)
  {
    fTemp = MIN_TEMP * 9 / 5 + 32;
    printf("%6.1f %12.1f\n", fTemp, MIN_TEMP);
    MIN_TEMP = MIN_TEMP + STEP;
  }
}