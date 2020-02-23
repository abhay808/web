#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n\tEnter Length of First Side : ");
	scanf("%d",&a);
	printf("\n\tEnter Length of Second Side : ");
	scanf("%d",&b);
	printf("\n\tEnter Length of Third Side : ");
	scanf("%d",&c);
	if(a==b && a==c)
	{
		printf("\n\tIt is an Equilateral Triangle");
	}
	else if(a==b || a==c || b==c)
	{
		printf("\n\tIt is an Isosceles Triangle");
	}
	else if(a!=b && a!=c)
	{
		printf("\n\tIt is a Scalene Triangle");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)