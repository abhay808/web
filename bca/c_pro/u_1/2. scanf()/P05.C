// Calculate the area of circle.
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,area;
	float pi=3.14;
	clrscr();
	printf("\n\tEnter the radius of circle = ");
	scanf("%d",&r);
	area=(float)pi*r*r;
	printf("\n\n\tThe area of the circle is %.3f",area);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)