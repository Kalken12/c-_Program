/*Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV). Go to the editor
Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (-,+), III (-,-), and IV (+,-).
Test Data :
Input the Coordinate(x,y):
x: 25
y: 15
Expected Output:
Quadrant-I(+,+)
*/
#include <stdio.h>
void main()
{
	int X,Y;
	printf("Enter the coordinate (X,Y) respectively");
	scanf("%d %d",&X,&Y);
	if((X>0) &&(Y>0))
	{
		printf("Quadrant-I(+,+)");
	}
	else if((X<0)&&(Y>0))
	{
		printf("Qudrant-II(-,+)");
	}
	else if((X<0)&&Y<0)
	{
		printf("Qudrant-III(-,-)");
	}
	else if((X>0)&&(Y<0))
	{
		printf("Qudrant -IV(+,-)");
	}
	else if((X==0)&&(Y==0))
	{
		printf("It is origin point");
	}else
	printf("It is on axis");
}
