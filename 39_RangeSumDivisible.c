/*39. Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers. Go to the editor
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521
*/
#include <stdio.h>
void main()
{
	int i,X,Y,sum=0;
	printf("Enter Two interger to caluculate values between them(X is small no and Y is big number)");
	scanf("%d %d",&X,&Y);
	for(i=X;i<=Y;i++)
	{
		if((i%17) !=0)
		{	
		 sum=sum+i;
		}
	
   } printf("Sum of number not divisible by 17=%d",sum);
   
}
