/*Write a C program that accepts some integers from the user and find the highest value and the input position. Go to the editor


*/
#include <stdio.h>
#define MAX 6

int main() 
{
	int number[MAX], i, j, max=0, num_pos=0;
	printf("Input 6 integers: \n");
	for(i = 1; i <= MAX; i++) {
		scanf(" %d", &number[i]);
	}
	
	for(j = 1; j <= MAX; j++) 
	{
		if(number[j] > max) {
			max = number[j];
			num_pos = j;
		}
	}
	printf("Highest value: %d\nPosition: %d\n", max, num_pos+1);
	return 0;
}
