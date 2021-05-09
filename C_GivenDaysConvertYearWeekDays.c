//C program to convert specified days into years, weeks and days. Note- ignore leap year.

#include <stdio.h>
int main()
{
	int year, days, week, month;
	int no_days;
	printf("Enter number off days");
	scanf("%d",&no_days);
	
	year = no_days/365;
	month = (no_days %365)/30;
	week = (no_days % 365) /7;
	days = no_days - ((year*365) + (week*7));
	
	printf("%d\n",year);
	printf("%d\n", month);
	printf("%d\n",week);
	printf("%d\n",days);

	return 0;
		
}
