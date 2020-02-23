// Pyramid 22, Pattern 3
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)