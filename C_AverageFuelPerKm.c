/*14. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point). Go to the editor
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000*/
#include <stdio.h>
void main()
{
	int km, litre;
	float average;
	char arr[10]="klitre";
	printf("Enter total distance travelled in kilo meter");
	scanf("%d",&km);
	printf("Enter total fuel spent in  litres");
	scanf("%d",&litre);
	
	average = km / litre;
	printf("Average litre fuel taken per km=%lf",average);
}

