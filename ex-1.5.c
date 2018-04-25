/**
 * Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, 
 * that is, from 300 degrees to 0.
*/

/**
 * Running result is:
300 148.9
280 137.8
260 126.7
240 115.6
220 104.4
200  93.3
180  82.2
160  71.1
140  60.0
120  48.9
100  37.8
 80  26.7
 60  15.6
 40   4.4
 20  -6.7
  0 -17.8
 * 
*/

#include <stdio.h>

int main()
{
  int temp;
  for (temp = 300; temp >= 0; temp = temp - 20)
  {
    printf("%3d%6.1f\n",temp,(temp-32)*5.0/9.0);
  }
}