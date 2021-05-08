#include <stdio.h>
int perimeter(int );
int area(int );
int main()
{
	int redius;
	char arr[20]="Squre inches";
	char  arr1[10] ="inches";
	printf("Enter the redius of circle");
	scanf("%d",&redius);

	
	printf("Perimeter of rectangle=%d %s\n",perimeter(redius),arr1);
	
	printf("Area of rectangle=%d %s",area(redius),arr);
	return 0;
}
int perimeter(int redius)
{
	int ans;
	ans = 2*3.14*redius;
	return ans;
}
int area(int redius)
{
	int ans;
	ans= 3.14*(redius*redius);
	return ans;
}
