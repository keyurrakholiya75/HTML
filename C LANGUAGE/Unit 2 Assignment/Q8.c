//Find the area and circumference of a circle

#include <stdio.h>

int main()
{
	float r,area,cir;
	float pi=3.14;
	printf("Please enter the radius of a circle:");
	scanf("%f",&r);
	
	area=pi*r*r;
	printf("Area of a circle: %.2f\n", area);
	cir=2*pi*r;
	printf("Circumference of a circle: %.2f\n", cir);
	return 0;
}