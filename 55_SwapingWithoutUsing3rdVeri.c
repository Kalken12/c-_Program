/*
55. Write a C program that swaps two numbers without using third variable. Go to the editor
Input value for x & y:
Before swapping the value of x & y: 5 7
After swapping the value of x & y: 7 5
*/
#include <stdio.h>
void main()
{
	int X,Y;
	printf("Enter the values of 1st number and 2nd no respectively..");
	scanf("%d %d",&X,&Y);
	X=X+Y;
	Y=X-Y;
	X=X-Y;
	printf("Value of X=%d\n Value of Y=%d",X,Y);
}
