#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n\tenter x :");
	scanf("%d",&x);
	if (x==0)
	{
		printf("\n\n\n\tx = 0");
	}
	else
	{
		if(x>0)
		{
			printf("\n\n\n\n\t x is positive");
		}
		else
		{
			printf("\n\n\n\n\t x is negative");
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)