 /*Write a C program to solve the following equation z= 2a-3b *(3 +4a)
Take the value of a and b as user
Eg:
Enter value of a:2
Enter value of b:1*/
 
 #include <stdio.h>
 
 int main()
{
	float a, b;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	
	float z;
	z=(2*a-3*b)*(3+4*a);
	printf("Answer:%f\n",z);
	
	return 0;
}
 