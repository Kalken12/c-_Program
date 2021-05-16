/*

54. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches. 
given: 1inch= 2.54cm
Test Data:
Input Data: 500cms
Input the distance in cm:
Distance of 500.00 cms is = 196.85 inches
*/
#include <stdio.h>
#define INCH_TO_CM 2.54
void main()
{
	double inch, cm, ans;
	printf("Enter the value in cm");
	scanf("%lf",&cm);
	inch=(cm/INCH_TO_CM);
	printf("%.2lf",inch);
}
