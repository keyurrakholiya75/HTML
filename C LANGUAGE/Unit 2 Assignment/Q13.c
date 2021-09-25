//Write a C program to swap of two numbers.

#include <stdio.h>

int main()
{
	double num1,num2,swap;
	printf("Enter First number:");
	scanf("%lf",&num1);
	printf("Enter Second number:");
	scanf("%lf",&num2);
	
	swap=num1;
	num1=num2;
	num2=swap;
	printf("After swapping, First number: %.2lf\n",num1);
	printf("After swapping, Second number: %.2lf\n",num2);
	return 0;
}