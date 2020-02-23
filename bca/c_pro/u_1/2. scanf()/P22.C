// Verify the formula a=p*(1+(r/100)/n)-p.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,p,r,n;
	clrscr();
	printf("\n\tEnter the value of P : ");
	scanf("%d",&p);
	printf("\tEnter the value of R : ");
	scanf("%d",&r);
	printf("\tEnter the value of N : ");
	scanf("%d",&n);
	a=p*(1+(r/100)/n)-p;
	printf("\n\t %d * (1 + (%d / 100) / %d) - %d = %d",p,r,n,p,a);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)