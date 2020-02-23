// Write a C program to find power of any number xy (x^y).
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double b,expo,ans;
	clrscr();
	printf("\n\tEnter a Base Number : ");
	scanf("%lf",&b);
	printf("\tEnter an Exponent : ");
	scanf("%lf",&expo);
	ans=pow(b,expo);
	printf("\n\t%.0lf^%.0lf = %.0lf",b,expo,ans);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)