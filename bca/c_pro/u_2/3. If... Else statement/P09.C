#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("enter x:");
	scanf("%d",&x);
	if(x%5==0 || x%11==0)
	{
		printf("\n\tx is divisible by 5 and 11");
	}
	else
	{
		printf("\n\tx is not divisible by 5 and 11");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)