#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	clrscr();
	printf("\n\tEnter the Value of A : ");
	scanf("%f",&a);
	printf("\tEnter the Value of B : ");
	scanf("%f",&b);
	c=(a+b)*(a+b);
	printf("\n\tC = (%.0f+%.0f) * (%.0f+%.0f) = %.2f",a,b,a,b,c);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)