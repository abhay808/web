// Verify the  formula s=((4*a+c)-2*a*b)/100.
#include<stdio.h>
#include<conio.h>
void main()
{
	float s,a,c,b;
	clrscr();
	printf("\n\tEnter the value of A : ");
	scanf("%f",&a);
	printf("\tEnter the value of C : ");
	scanf("%f",&c);
	printf("\tEnter the value of B : ");
	scanf("%f",&b);
	s=((4*a+c)-2*a*b)/100;
	printf("\n\t ((4 * %.0f + %.0f) - 2 * %.0f * %.0f) / 100 = %.2f)",a,c,a,b,s);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)