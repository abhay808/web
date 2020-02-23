#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=6;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1,k=k-i;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");

	}
	getch();

}
// Made by Bhavya Popat, B.Sc IT (D2)