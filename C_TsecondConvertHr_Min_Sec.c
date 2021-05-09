/*17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. Go to the editor
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int H,M,S, tSecond;
	printf("Enter time in second");
	scanf("%d",&tSecond);
	
	H = tSecond/3600; 
	M = (tSecond- (H*3600))/60; 
	S = tSecond-((H*3600)+(M*60));
	printf("%d:%d:%d",H,M,S);
	
	
}

