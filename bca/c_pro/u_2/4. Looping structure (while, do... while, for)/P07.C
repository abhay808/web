// Print 1, 11, 10, 28, 35, 41, 46, 50, 53, 55, 56.
#include<stdio.h>
#include<conio.h>
void main()
{
	int y=10,sum=1;
	clrscr();
	while(y>=0)
	{
		printf(" %d",sum);
		sum=sum+y;
		y--;
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)