#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	for(i=2;i<=200;i+=2)
	{
		 sum=sum+i;
	}
	printf("\n\tSum of first 100 even numbers : %d",sum);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)