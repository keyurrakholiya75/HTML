/*Write a C program to convert Centimetre into Meter and Kilometre.Take km as user input*/

#include <stdio.h>

int main()
{
	float cm, m, km;
	printf("Enter length in Centimeters:");
	scanf("%f",&cm);
	
	m=cm/100;
	km=m/1000;
	
	printf("Measured length in Meters:%.4f\n",m);
	printf("Measured length in Kilometers:%.4f\n",km);
	return 0;
}
