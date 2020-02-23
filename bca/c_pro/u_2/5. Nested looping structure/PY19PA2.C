// Pyramid 19, Pattern 2
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,l;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(l=5;l>=i;l--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d  ",j*k);
		}
		printf("\n");
		k++;
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)