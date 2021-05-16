/*
53. Write a C program that accepts principle, rate of interest, time and compute the simple interest.
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
formula:
Simple Interest= P x R x T ÷ 100
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000
*/
#include <stdio.h>
void main()
{
	int P,R,T,SI=0;
	printf("Enter.....\n 1. Principle \n2.Rate of interest \n3.Time(in year) \nrespectively......");
	scanf("%d %d %d",&P,&R,&T);
	
	SI=((P*R*T)/100);
	printf("Simple interest %d",SI);
	
}
