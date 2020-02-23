// Write a C program to enter radius of a circle and find it's diameter, circumference and area.
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,d,ccf,area;
	float pi=3.14;
	clrscr();
	printf("\n\tEnter the radius of the circcle: ");
	scanf("%d",&r);
	d=2*r;
	ccf=(float)2*pi*r;
	area=(float)pi*r*r;
	printf("\n\tThe Diameter of circle is %d",d);
	printf("\n\tThe Circumference of circle is %.3f",ccf);
	printf("\n\tThe Area of circle is %.3f",area);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)