// Write a program to enter length and breadth of a rectangle and find it's perimeter.
#include<stdio.h>
#include<conio.h>
void main()
{
	int peri,l,b;
	clrscr();
	printf("\n\tEnter Length: ");
	scanf("%d",&l);
	printf("\tEnter Breadth: ");
	scanf("%d",&b);
	peri=2*(l+b);
	printf("\n\n\tThe perimeter of the rectangle is %d",peri);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)