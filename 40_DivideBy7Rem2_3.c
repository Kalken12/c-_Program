/*
40. Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 45
Expected Output:
30
31
37
38
44
*/
#include <stdio.h>
void main()
{
	int i, X,Y,rem;
	printf("Enter two numbers to X will small(start of range) and Y will large(limit of range)\n");
	scanf("%d %d",&X,&Y);
	for(i=X; i<Y;i++)
	{
		if((i%7==2) || (i%7==3))
		printf("%d\n",i);
	}
}
