/**
 * Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
 * oC=(5/9)(oF-32)
*/

/**
 * Running result is:
  Celsius Fahrenheit
  -17.8    0.0
  -6.7   20.0
  4.4   40.0
  15.6   60.0
  26.7   80.0
  37.8  100.0
  48.9  120.0
  60.0  140.0
  71.1  160.0
  82.2  180.0
  93.3  200.0
  104.4  220.0
  115.6  240.0
  126.7  260.0
  137.8  280.0
  148.9  300.0
 * 
*/
#include <stdio.h>
int main()
{
  float cTemp;
  float MIN_TEMP, MAX_TEMP;
  int STEP;

  MIN_TEMP = 0;
  MAX_TEMP = 300;
  STEP = 20;
  printf("Celsius\tFahrenheit\n");
  while (MIN_TEMP <= MAX_TEMP)
  {
    cTemp = (MIN_TEMP - 32) * 5 / 9;
    printf("%3.1f %6.1f\n", cTemp, MIN_TEMP);
    MIN_TEMP = MIN_TEMP + STEP;
  }
}