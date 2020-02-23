#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10],m[10],i;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter no. : ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
		m[i]=n[i];
	}
	for(i=0;i<10;i++)
	{
		printf("\n%d",m[i]);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)