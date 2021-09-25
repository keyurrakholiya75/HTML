//C Program to find Area of a Triangle.

#include <stdio.h>

int main()
{
	float b,h,area;
	printf("Base of a triangle:");
	scanf("%f",&b);
	printf("Perpendicular height of a triangle:");
	scanf("%f",&h);
	
	area=(b*h)/2;
	printf("Area of a triangle : %.2f\n",area);
	return 0;
}