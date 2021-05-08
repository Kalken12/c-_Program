#include <stdio.h>
int perimeter(int ,int);
int area(int ,int);
void main()
{
	int width=5;
	char arr[20]="Squre inches";
	char  arr1[10] ="inches";
	int height=7;
	
	printf("Perimeter of rectangle=%d %s\n",perimeter(width,height),arr1);
	
	printf("Area of rectangle=%d %s",area(width,height),arr);
}
int perimeter(int width, int height)
{
	int ans;
	ans = 2*(width+height);
	return ans;
}
int area(int width, int height)
{
	int ans;
	ans= width*height;
	return ans;
}
