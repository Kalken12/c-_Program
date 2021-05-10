/* Write a C program that read 5 numbers and sum of all odd values between them. Go to the editor
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34
*/

#include <stdio.h>
void main()
{
	int j, num[6], sum=0;
	printf("Enter five digit numbers\n");
	scanf("%d %d %d %d %d", &num[1],&num[2],&num[3],&num[4],&num[5]);
	for(j=1;j<=5;j++)
	{
		if(num[j]%2!=0)
		sum=sum+num[j];
		
	}
	printf("Sum of all odd values=%d",sum);
}
