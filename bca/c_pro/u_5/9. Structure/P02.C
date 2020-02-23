#include<stdio.h>
#include<conio.h>
void main()
{
	struct EMP
	{
		float emp_no,bs,da,hra,ta,pf,gs;
		char emp_name[20];
	};
	struct EMP a;
	clrscr();
	printf("\nEnter Employee Name : ");
	scanf("%s",a.emp_name);
	printf("Enter Employee No. : ");
	scanf("%f",&a.emp_no);
	printf("\n\tEnter Basic Salary : ");
	scanf("%f",&a.bs);
	if(a.bs<10000)
	{
		printf("\n\t\tGross Salary : %.0f",a.bs);
	}
	else
	{
		if(a.bs>=10000 && a.bs<20000)
		{
			a.hra=a.bs*20/100;
			a.da=a.bs*80/100;
			a.ta=a.bs*10/100;
			a.pf=a.bs*30/100;
			a.gs=a.bs+a.hra+a.da+a.ta-a.pf;
			printf("\n\t\tGross Salary : %.0f",a.gs);
		}
		else if(a.bs>=20000 && a.bs<30000)
		{
			a.hra=a.bs*25/100;
			a.da=a.bs*90/100;
			a.ta=a.bs*15/100;
			a.pf=a.bs*40/100;
			a.gs=a.bs+a.hra+a.da+a.ta-a.pf;
			printf("\n\t\tGross Salary : %.0f",a.gs);
		}
		else
		{
			a.hra=a.bs*30/100;
			a.da=a.bs*95/100;
			a.ta=a.bs*25/100;
			a.pf=a.bs*50/100;
			a.gs=a.bs+a.hra+a.da+a.ta-a.pf;
			printf("\n\t\tGross Salary : %.0f",a.gs);
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)