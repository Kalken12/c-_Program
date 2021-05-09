#include<stdio.h>
void main()
{
	int j, num[5], total=0;
	printf("Enter the 5 digit");
	scanf("%d %d %d %d %d",&num[1],&num[2],&num[3],&num[4],&num[5]);
	
	for(j=0; j<5;j++)
	{
		if((num[j]%2)!=0)
		{
			total=total+num[j];
		}
		
	}	
	printf("sum of odd digit %d",total);
}
