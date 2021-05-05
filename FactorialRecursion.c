#include <stdio.h>
int fact(int );
int main()
{
	int num, result;
	printf("Enter the number");
	scanf("%d", &num);
	result= fact(num);
	printf("Factorial of given number =%d",result);
	
}
int fact(int num)
{
	if(num==0)
	{
		return 0;
	}else if(num==1)
	{
		return 1;
	}else if(num>=1)
	return (num*fact(num-1));
}
