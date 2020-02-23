// Pyramid 15, Pattern 2
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l;
	char k='z';
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(l=5;l>=i;l--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %c",k);
			k--;
		}
		printf("\n");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)