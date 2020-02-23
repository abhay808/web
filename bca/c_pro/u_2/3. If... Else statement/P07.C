#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("enter x:");
	scanf("%d",&x);
	if(x%4==0)
	{
		printf("\n\n\tleap year");
	}
	else
	{
		printf("\n\n\tnot leap year");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)