// Pyramid 8, Pattern 2
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf(" %d  ",j);
		}
		printf("\n");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)