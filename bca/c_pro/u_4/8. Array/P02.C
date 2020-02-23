#include<stdio.h>
#include<conio.h>
void main()
{
	int n[1][1],i,j;
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("Enter no. [%d][%d] : ",i+1,j+1);
		scanf("%d",&n[i][j]);
		}
	}
	printf("\nHere is no. you have entered :-\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("\n%d",n[i][j]);
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)