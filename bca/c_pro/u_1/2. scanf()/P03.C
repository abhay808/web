// Input two numbers and print their square and cube.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sqa,sqb,cua,cub;
	clrscr();
	printf("\n\n\tEnter First Value: ");
	scanf("%d",&a);
	printf("\tEnter Second Value: ");
	scanf("%d",&b);
	sqa=a*a;
	sqb=b*b;
	cua=a*a*a;
	cub=b*b*b;
	printf("\n\n\tFor First Value");
	printf("\n\tSquare: %d",sqa);
	printf("\n\tCube: %d",cua);
	printf("\n\n\tFor Second Value");
	printf("\n\tSquare: %d",sqb);
	printf("\n\tCube: %d",cub);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)