//Pyramid 25, Pattern 2
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,k;
	clrscr();
	for(k=97;k<=101;k++)
	{
		for(j=97;j<=k;j++)
		{
			printf("  ");
		}
		for(i=k;i<=101;i++)
		{
			printf(" %c  ",i);
		}

		printf("\n");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)