// Accept one no. from user and display reverse of it.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,reverse=0;
	clrscr();
	printf("\n\tEnter the Number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	printf("\n\tReversed Number : %d",reverse);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)