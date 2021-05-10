/*34. Write a C program to print the numbers from the lowest to the highest (inclusive) and the sum of consecutive integers from a given pair of numbers. 
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24
*/
#include <stdio.h>
void main()
{
	int i, num1, num2, count=0, sum=0;
	printf("Enter the number starts from to end with respectively");
	scanf("%d %d",&num1, &num2);
	
	for(i=num1 ; i<=num2; i++)
	{
		if(i%2!=0)
		{
			count++;
			sum=sum+i;
			printf("%d\n",i);
		}
		
	}printf("sum of number=%d \n",sum);
}
