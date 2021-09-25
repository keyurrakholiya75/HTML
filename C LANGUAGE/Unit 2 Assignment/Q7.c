//Write a c program to print "Hello" without using main() function.
Calculate simple interest

#include <stdio.h>
# define x main
void x()
{
	printf("Hello World!\n");
	
	float P,R,T,SI;
	printf("Enter Principle Amount:");
	scanf("%f",&P);
	printf("Enter Rate of Interest per annum:");
	scanf("%f",&R);
	printf("Enter the period of time:");
	scanf("%f",&T);
	
	SI=(P*R*T)/100;
	printf("Simple interest is %f\n", SI);
	return 0;
}