// Print 1, 2, 4, 8, 16, 32, 64.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=64;i*=2)
	{
		printf(" %d",i);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)