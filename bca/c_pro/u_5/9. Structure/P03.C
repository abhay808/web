#include<stdio.h>
#include<conio.h>
void main()
{
	struct EMP
	{
		int emp_no,bs;
		float da,hra,ta,pf,gs;
		char emp_name[20];
	};
	struct EMP a[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\n\nEnter Employee Name %d : ",i+1);
		scanf("%s",a[i].emp_name);
		printf("Enter Employee No. : ");
		scanf("%d",&a[i].emp_no);
		printf("\n\tEnter Basic Salary : ");
		scanf("%d",&a[i].bs);
		if(a[i].bs<10000)
		{
			printf("\n\t\tGross Salary : %d",a[i].bs);
		}
		else
		{
		if(a[i].bs>=10000 && a[i].bs<20000)
		{
			a[i].hra=(float)a[i].bs*20/100;
			a[i].da=(float)a[i].bs*80/100;
			a[i].ta=(float)a[i].bs*10/100;
			a[i].pf=(float)a[i].bs*30/100;
			a[i].gs=(float)a[i].bs+a[i].hra+a[i].da+a[i].ta-a[i].pf;
			printf("\n\t\tGross Salary : %.0f",a[i].gs);
		}
		else if(a[i].bs>=20000 && a[i].bs<30000)
		{
			a[i].hra=(float)a[i].bs*25/100;
			a[i].da=(float)a[i].bs*90/100;
			a[i].ta=(float)a[i].bs*15/100;
			a[i].pf=(float)a[i].bs*40/100;
			a[i].gs=(float)a[i].bs+a[i].hra+a[i].da+a[i].ta-a[i].pf;
			printf("\n\t\tGross Salary : %.0f",a[i].gs);
		}
		else
		{
			a[i].hra=(float)a[i].bs*30/100;
			a[i].da=(float)a[i].bs*95/100;
			a[i].ta=(float)a[i].bs*25/100;
			a[i].pf=(float)a[i].bs*50/100;
			a[i].gs=(float)a[i].bs+a[i].hra+a[i].da+a[i].ta-a[i].pf;
			printf("\n\t\tGross Salary : %.0f",a[i].gs);
			}
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)