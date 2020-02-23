// Input two numbers and print it's Additon, Substraction, Multiplication, and Division.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,diff,prod,div;
	clrscr();
	printf("\n\n\tEnter first Value: ");
	scanf("%d",&a);
	printf("\tEnter second Value: ");
	scanf("%d",&b);
	sum=a+b;
	diff=a-b;
	prod=a*b;
	div=a/b;
	printf("\n\t%d + %d = %d",a,b,sum);
	printf("\n\t%d - %d = %d",a,b,diff);
	printf("\n\t%d * %d = %d",a,b,prod);
	printf("\n\t%d / %d = %d",a,b,div);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)