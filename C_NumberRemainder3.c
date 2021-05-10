/*32. Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3. Go to the editor
Test Data :
Input an integer: 25
Expected Output:
3
28
53
78
*/
#include <stdio.h>
void main()
{
	int i, x, rem;
	printf("Enter the number");
	scanf("%d",&x);
	printf("Enter reamainder");
	scanf("%d",&rem);
	for(i=1; i<=100;i++)
	{
		if(i%x==rem)
		{
			printf("%d\n",i);
		}
	}
}
