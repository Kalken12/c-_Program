/*
41. Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user. Go to the editor
Test Data :
Input number of lines: 5
Expected Output:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
*/
#include <stdio.h>
void main()
{
	int i, line,mult;
	printf("Enter the number of line");
	scanf("%d",&line);
	
	mult=3*line;
	
	for(i=1; i<=mult;i++)
	{
	 printf("\t %d",i);
	 if(i%3==0)
	 {
	  
	 	printf(" \n");
	 	
	 }
	
}

		
	
	
}
