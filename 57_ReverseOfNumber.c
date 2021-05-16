 /*
 
 57.Write a C program to reverse and print a given number. 
Input a number:
The original number = 234
The reverse of the said number = 432
*/
#include <stdio.h>
void main()
{
	int num, rev=0,X;
	printf("Enter the num for its reverse");
	scanf("%d",&num);

	while(num>=1)
	{
		X=num%10;
		rev=rev*100+X;
		num=num/10;
	}	
	printf("The reverse number is %d",rev);
	
	
}
