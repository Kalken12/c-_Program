/*
62. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number. 
Input a positive number less than 500:
Sum of the digits of 347 is 14
*/
#include <stdio.h>
void main()
{
	int  x,sum=0,num;
	printf("Enter the positive number smaller than 500\n\n");
	scanf("%d",&x);
	if(x>500)
	{
		printf("Number is greter than 500...not exist\n\n");
	}
    while(x>=1)
	{
	    num=x%10;
	    sum=sum+num;
	    x=x/10;
	   
	}
	 printf("Sum of digit of number=%d\n",sum);
	
	
}
