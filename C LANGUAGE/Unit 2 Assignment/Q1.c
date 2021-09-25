/*Write a C program to find the slope of given point. Take Point as user input
Eg:
Enter x1 value : 3
Enter y1 value : 4
Enter x2 value : 6
Enter y2 value : 8
Slope of Point is: 4/3
Formula for calculating Slope= y2-y1/x2-x1*/

#include <stdio.h>

int main()
{
	float x1, y1, x2, y2;
	printf("Enter the value of x1:");
	scanf("%f",&x1);
	printf("Enter the value of y1:");
	scanf("%f",&y1);
	printf("Enter the value of x2:");
	scanf("%f",&x2);
	printf("Enter the value of y2:");
	scanf("%f",&y2);
	
	float slope;
	slope=(y2-y1)/(x2-x1);
	printf("%f is a slope of given point.\n",slope);
	return 0;
}