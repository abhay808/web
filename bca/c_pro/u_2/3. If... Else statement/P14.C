/* Write a C program to input basic salary of an employee and calculate it's Gross salary according to following:
Basic Salary >= 10000 : HRA = 20%, DA = 80%
Basic Salary >= 20000 : HRA = 25%, DA = 90%
Basic Salary >= 30000 : HRA = 30%, DA = 95% */
#include<stdio.h>
#include<conio.h>
void main()
{
	float bs,gs,hra,da;
	clrscr();
	printf("\n\tEnter Basic Salary : ");
	scanf("%f",&bs);
	if(bs<10000)
	{
		printf("\n\t\tGross Salary : %.0f",bs);
	}
	else
	{
		if(bs>=10000 && bs<20000)
		{
			hra=bs*20/100;
			da=bs*80/100;
			gs=bs+hra+da;
			printf("\n\t\tGross Salary : %.0f",gs);
		}
		else if(bs>=20000 && bs<30000)
		{
			hra=bs*25/100;
			da=bs*90/100;
			gs=bs+hra+da;
			printf("\n\t\tGross Salary : %.0f",gs);
		}
		else
		{
			hra=bs*30/100;
			da=bs*95/100;
			gs=bs+hra+da;
			printf("\n\t\tGross Salary : %.0f",gs);
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)