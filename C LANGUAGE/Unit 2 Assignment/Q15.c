//Write a program to convert the temperature from  centigrade to Fahrenheit.
//[C = ((F-32)*5)/9]

#include <stdio.h>

int main()
{
	float F, C;
	printf("Enter the value of degree Fahrenheit:");
	scanf("%f",&F);
	printf("Enter the value of degree Celius:");
	scanf("%f",&C);
	
	C=((F-32)*5)/9;
	printf("Temperature in Degree Celius: %.3f\n",C);
	return 0;
}