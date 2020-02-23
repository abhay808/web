// Write a C program to calculate compound interest.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,p,r,t;
	clrscr();
	printf("\n\tEnter the Principle amount: ");
	scanf("%d",&p);
	printf("\tEnter Time: ");
	scanf("%d",&t);
	printf("\tEnter the Rate: ");
	scanf("%d",&r);
	a=p*(pow((1+r/100),t)-1);
	printf("\n\tFinal Amount = %d",a);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)