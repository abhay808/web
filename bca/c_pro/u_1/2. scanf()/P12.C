//Write a C program to enter value in centimeter and convert it into meter and kilometer.
#include<stdio.h>
#include<conio.h>
void main()
{
	float cm, km, m;
	clrscr();
	printf("\n\tEnter the length in centimeter: ");
	scanf("%f",&cm);
	m=cm/100;
	km=100000/cm;
	printf("\n\tThe value in meter is %.3f",m);
	printf("\n\tThe value in kilometer is %.3f",km);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)