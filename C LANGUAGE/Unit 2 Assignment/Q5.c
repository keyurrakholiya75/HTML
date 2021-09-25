/*Write a C program to calculate Simple Interest . Take Principle, Rate of interest & Time as
user input*/

#include <stdio.h>

int main()
{
	float P,R,T,SI;
	printf("Enter the Principle amount:");
	scanf("%f",&P);
	printf("Enter the Rate of interset per annum:");
	scanf("%f",&R);
	printf("Enter the period of time:");
	scanf("%f",&T);
	
	SI = (P*R*T)/100;
	printf("Simple interest is %.2f\n",SI);
	return 0;
	
}