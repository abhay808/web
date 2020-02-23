#include<stdio.h>
#include<conio.h>
void prime(int);
void main()
{
	int ans;
	clrscr();
	prime(ans);
	getch();
}
void prime()
{
	int n,i,p=0;
	printf("\n\tEnter the Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			p++;
		}
	}
	if(p==2)
	{
		printf("\n\tEntered Number is a Prime Number");
	}
	else
	{
		printf("\n\tEntered Number is not a Prime Number");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)