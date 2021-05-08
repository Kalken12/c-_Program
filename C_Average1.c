/*C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values)
 and calculate the average value of the items.*/
 #include <stdio.h>
 void main()
 {
 	float w1, w2;
 	float pis1, pis2;
 	float average;
 	
 	printf("Enter the weight of iterm 1\n");
 	scanf("%lf",&w1);
 	
 	printf("Enter the number of item 1\n");
	scanf("%lf",&pis1);
	
	printf("Enter the weightt of item 2\n");
	scanf("%lf",&w2);

	printf("Enter the number of item 2\n");	
	scanf("%lf",&pis2);
	
	
	average= ((w1*pis1)+(w2*pis2)) / (pis1+pis2);
	printf("%lf",average);
}
