/*
45.Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
Expected Output:
Value of S: 4.50
*/
#include <stdio.h>
void main()
{
	int i;
	float sum=0;
	for(i=1; i<=50; i++)
	{
		sum+=(float)1/i;
		
	}
	printf("sum of fractions=%.2f\n",sum);
}
