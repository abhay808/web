#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("\n\tenter cost price : ");
	scanf("%d",&x);
	printf("\n\tenter selling price : ");
	scanf("%d",&y);
	z=y-x;
	if(x<y)
	{
		printf("\n\n\n\tPROFIT : %d",z);
	}
	else
	{
		printf("\n\n\n\tLOSS : %d",z);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)