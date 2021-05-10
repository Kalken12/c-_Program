/*Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values. Go to the editor
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00*/

#include <stdio.h>
void main()
{
	int  j, num[6], count=0, sum=0;
	float average;
	printf("Enter five digit numbers");
	scanf("%d %d %d %d %d", &num[1],&num[2],&num[3],&num[4],&num[5]);
	
	
	
	for(j=1; j<=5;j++)
	{
		if(num[j]>0)
		{
			count ++;
			sum=sum+num[j];
		}
	}
	printf("Sum=%d\n",sum);
	printf("Number of positive number =%d\n",count);

    average = (sum / count );
	printf("Averge of positive number %lf\n",average);
	
}
