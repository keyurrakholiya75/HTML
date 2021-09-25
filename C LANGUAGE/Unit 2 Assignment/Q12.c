//Write a program to read your name, address and contact no from user and print it.

#include <stdio.h>
int main()
{
	char n[20], add[80], number[10];
	printf("Enter your name:");
	gets(n);
	
	printf("Enter your address:");
	gets(add);
	
	printf("Enter your phone number:");
	gets(number);
	
	printf("***********************************\n");
	printf("Your name is %s\n",n);
	printf("Your address is %s\n",add);
	printf("Your phone number is %s\n",number);
	printf("***********************************\n");
}