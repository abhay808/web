// Write a C program to convert days into years, weeks and months.
#include<stdio.h>
#include<conio.h>
void main()
{
	int days,weeks,months,years;
	clrscr();
	printf("\nEnter the days: ");
	scanf("%d",&days);
	weeks=days/7;
	months=days/30;
	years=days/365;
	printf("\nWeeks : %d",weeks);
	printf("\nMonths : %d",months);
	printf("\nYears : %d",years);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)