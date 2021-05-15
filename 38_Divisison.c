/*38. Write a program that reads two numbers and divide the first number by second number. If the division not possible print "Division not possible". Go to the editor
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0*/

#include <stdio.h>
void main()
{
	int X,Y;
	float Result;
	printf("Enter value of X");
	scanf("%d",&X);
	printf("Enter value  of Y");
	scanf("%d",&Y);
	if(Y!=0)
	{
	 Result = X/Y;
	  printf("Division =%lf",Result);
	}else 
		printf("Division not possible");
}
