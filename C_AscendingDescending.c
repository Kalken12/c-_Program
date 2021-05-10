/**Write a C program to check whether two numbers in a pair is in ascending order or descending order. Go to the editor
Test Data :
Input a pair of numbers (for example 10,2 : 2,10):
Input first number of the pair: 10
Expected Output:
Input second number of the pair: 2
The pair is in descending order!
*/
#include <stdio.h>
void main()
{
	int X,Y;
	printf("Enter a pair of number (for example 10,2: 2,10)\n");
	
	
	printf("Enter the 1st number");
	scanf("%d",&X);
	
	printf("Enter the  2nd number");
	scanf("%d",&Y);
	if(X>Y)
	{
		printf("number of pair is descending");
		
	}else
	printf("Number of pair is Ascending ");
	
	}
