/*

47. Write a C program that reads an integer and find all its divisor.
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45
*/
#include <stdio.h>
void main()
{
	int i, divisor, num;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=1;i<=num; i++)
	{
		if(num%i==0)
		printf("%d\n",i);
		
	}
}
