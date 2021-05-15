/*
44. Write a C program to calculate the average marks of mathematics of some students. Input 0 (excluding to calculate the average) or negative value to terminate the input process. Go to the editor
Test Data :
Input Mathematics marks (0 to terminate): 10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50
*/
#include <stdio.h>
void main()
{
	int marks[99], a=0, i, total=0;
	float average;
	printf("Enter the marks of students of mathematics");
	for(i=1; ;i++)
	{
		scanf("%d",&marks[i]);
		if(marks[i]<=0)
		{
			break;
		}
		a++;
		total=total+marks[i];	
	}
	average= total/a;
	printf("Average=%lf",average);	
}
