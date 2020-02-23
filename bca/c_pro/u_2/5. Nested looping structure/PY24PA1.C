//Pyramid 24, Pattern 1
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k;
	clrscr();
	for(k=2;k<=10;k+=2)
	{
		for(i=k;i<=10;i+=2)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)