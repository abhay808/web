// Input Number of chairs and total cost of chairs and print the cost of each chair.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,c;
	clrscr();
	printf("\n\tEnter the total cost : ");
	scanf("%d",&t);
	printf("\tEnter the number of chairs : ");
	scanf("%d",&n);
	c=t/n;
	printf("\n\tThe cost of each chair is %d",c);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)