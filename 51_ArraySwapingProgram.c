/*
51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array. Go to the editor
Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15
*/
#include <stdio.h>
#define AL 5

void main() 
{
	int array_n[AL], i, temp1=0 ,temp2=0;
	
	printf("Input the 5 members of the array\n");
	for(i = 0; i <  AL; i++) 
	{
		scanf("%d", &array_n[i]);
	}
	temp1=array_n[0];
	array_n[0]=array_n[4];
	array_n[4]=temp1;
	
	temp2=array_n[1];
	array_n[1]=array_n[3];
	array_n[3]=array_n[1];
	for(i=0; i<AL; i++)
	{
		printf("array_n[%d]=%d\n",i,array_n[i]);
	}
}
	
	
	
