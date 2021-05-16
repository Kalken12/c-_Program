/**
52. Write a C program to read an array of length 6 and find the smallest element and its position.
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3
*/

#include <stdio.h>
#define e 5
void main() 
{
	int i, small, pos;
	int v[e];
    printf("\nInput the array elements\n ");
	for(i = 0; i<e; i++)
	 {
			scanf("%d", &v[i]);
	 }
	small=v[0];
	pos=0;
	for(i=0;i<e;i++)
	{
		if(small>v[i])
		{
			small=v[i];
			pos=i;
		}
    }
    printf("smallest value :%d",small);
    printf("Position of the element:%d",pos);
}

