/*Write a C program to calculate Total, Average, Percentage, and CGPA of 5 subject. Take 5
subject marks as user input*/

#include <stdio.h>

int main()
{
	float maths, phys, chem, eng, comp;
	float sum, avg, per,cgpa,total=500;
	printf("Marks of Mathematics:");
	scanf("%f",&maths);
	printf("Marks of Physics:");
	scanf("%f",&phys);
	printf("Marks of Chemistry:");
	scanf("%f",&chem);
	printf("Marks of English:");
	scanf("%f",&eng);
	printf("Marks of Computer:");
	scanf("%f",&comp);
	
	sum=(maths+phys+chem+eng+comp);
	printf("Total Marks Obtained:%f\n",sum);
	avg=(sum)/5;
	printf("Average Marks Obtained:%f \n",avg);
	cgpa=(per)/9.5;
	printf("CGPA:%f\n",cgpa);
	per=(sum)*100/total;
	printf("Percentage Obtained:%.2f%\n",per);
	return 0;
	
	
}