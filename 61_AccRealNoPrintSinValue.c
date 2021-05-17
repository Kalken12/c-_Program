
/*61. Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places. Go to the editor
Input value of x: .6235
Value of sin(1/x) is 0.9995
*/


#include <stdio.h> 
#include <math.h>
 void main() 
  {
    double x, tval;
    printf("Input value of x: \n");
    scanf("%lf", & x);
    if (x != 0.0) 
    {
      tval = sin(1/x);
      printf("Value of sin(1/x) is %0.4lf\n", tval);
    }
    else
    {
      printf("Value of x should not be zero.");
    }
  
  }
