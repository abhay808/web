// Pyramid 23, Pattern 1
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=5;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
		}
		k--;
		printf("\n");
	}
		getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)