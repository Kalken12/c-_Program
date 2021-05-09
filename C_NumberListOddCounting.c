#include <stdio.h>
void main()
{
	int A,B,C,D,E, ansA=0,ansB=0,ansC=0,ansD=0,ansE=0;
	
	printf("Enter 5 numbers");
	scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
	
	if( A%2!=0) 
	{
		ansA=A;
		
	}	
	if(A%2!=0)
	{
		ansB=B;
		
	}
	if(C%2!=0)
	{
		ansC=C;
	}
	if(D%2!=0)
	{
		ansD=D;
	}
	if(E%2!=0)
	{
		ansE=E;
	}
	printf("Sum of odd numbers %d",ansB+ansA+ansC+ansD+ansE);
	
}
