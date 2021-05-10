/*27. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers. Go to the editor
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2*/

#include <stdio.h>
void main()
{
	int  j, num[6], countp=0, countn=0;
	printf("Enter numbers");
	scanf("%d %d %d %d %d", &num[1],&num[2],&num[3],&num[4],&num[5]);
	
	for(j=1; j<=5;j++)
	{
		if(num[j]<0)
		countn++;
		
	}
	printf("count of negative number %d\n",countn);
	
	
	for(j=1; j<=5;j++)
	{
		if(num[j]>0)
		{
			countp ++;
		}
	}
	printf("count of positive number %d\n",countp);
}

