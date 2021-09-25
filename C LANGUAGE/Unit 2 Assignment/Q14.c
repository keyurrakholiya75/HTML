//Write a C program to print address of variable.

#include <stdio.h>

int main()
{
	int p;
	float r;
	char q;
	double s;
	
	printf("Address of p : %p\n",&p);
	printf("Address of r : %p\n",&r);
	printf("Address of q : %p\n",&q);
	printf("Address of s : %p\n",&s);
	return 0;
	
}