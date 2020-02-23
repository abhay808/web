/* Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate total, percentage and grade according to following:
Percentage >= 70% : Distinction
Percentage >= 60% and Percentage < 70% : First Class
Percentage >= 50% and Percentage < 60% : Second Class
Percentage >= 40% and Percentage < 50% : Pass Class
Otherwise : Fail */
#include<stdio.h>
#include<conio.h>
void main()
{
	float phy,chem,bio,math,comp,total,per;
	clrscr();
	printf("\n\tEnter Physics Marks : ");
	scanf("%f",&phy);
	printf("\tEnter Chemistry Marks : ");
	scanf("%f",&chem);
	printf("\tEnter Biology Marks : ");
	scanf("%f",&bio);
	printf("\tEnter Mathematics Marks : ");
	scanf("%f",&math);
	printf("\tEnter Computer Marks : ");
	scanf("%f",&comp);
	total=phy+chem+bio+math+comp;
	per=total*100/500;
	if(per<40)
	{
		printf("\n\t\tFAIL");
	}
	else
	{
		if(per>=40 && per<50)
		{
			printf("\n\t\tTotal Marks : %.0f",total);
			printf("\n\t\tPercentage : %.2f",per);
			printf("\n\t\tPASS CLASS");
		}
		else if(per>=50 && per<60)
		{
			printf("\n\t\tTotal Marks : %.0f",total);
			printf("\n\t\tPercentage : %.2f",per);
			printf("\n\t\tSECOND CLASS");
		}
		else if(per>=60 && per<70)
		{
			printf("\n\t\tTotal Marks : %.0f",total);
			printf("\n\t\tPercentage : %.2f",per);
			printf("\n\t\tFIRST CLASS");
		}
		else
		{
			printf("\n\t\tTotal Marks : %.0f",total);
			printf("\n\t\tPercentage : %.2f",per);
			printf("\n\t\tDISTINCTION");
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)