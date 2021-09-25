/*Write a C program to convert Days into Years, Weeks. Take Days as input.*/

#include <stdio.h>

int main()
{
	int days,yrs,weeks;
	printf("Enter the number of Days:");
	scanf("%d",&days);
	
	yrs=days/365;
	weeks=(days)/7;
	
	printf("Years:%d\n",yrs);
	printf("Weeks:%d\n",weeks);
	return 0;
	
}