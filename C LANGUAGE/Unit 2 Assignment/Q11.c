//Write a C Program to calculate the following:
//a) Area of circle
//b) Area of Square
//c) Perimeter of Rectangle

#include <stdio.h>

int main()
{
	float r,l,b,a;
	float ac,as,p; //ac=area of circle, as=area of square, p=perimeter of rectangle.
	printf("Please enter the radius of circle:");
	scanf("%f",&r);
	float pi=3.14;
	ac=pi*r*r;
	printf("Area of a circle: %.2f\n",ac);
	
	printf("Please enter the side of square:");
	scanf("%f",&a);
	as=a*a;
	printf("Area of a square: %.2f\n",as);
	
	printf("Please enter the length of rectangle:");
	scanf("%f",&l);
	printf("Please enter the breadth of rectangle:");
	scanf("%f",&b);
	p=2*(l+b);
	printf("Perimeter of a rectangle: %.2f\n",p);
	return 0;
	
}