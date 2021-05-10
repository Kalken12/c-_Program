/*30. Write a C program to find and print the square of each one of the even values from 1 to a specified value. Go to the editor
Test Data :
List of square of each one of the even values from 1 to a 4 :
Expected Output:
2^2 = 4
4^2 = 16
*/
#include <stdio.h>

void main()
{
	int i, x;
	printf("Enter the limit of digit");
	scanf("%d",&x);
	
	for(i=1; i<=x; i++)
	{
		if(i%2==0)
		
		printf("%d^2 =%d\n",i,i*i);
	}
}
