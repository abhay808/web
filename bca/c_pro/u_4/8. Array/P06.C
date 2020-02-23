#include<stdio.h>
#include<conio.h>
void main()
{
	int n[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter no. : ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		if(n[i]<0)
		{
			printf("\n%d",n[i]);
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)