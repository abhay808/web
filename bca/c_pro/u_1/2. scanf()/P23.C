// Verify the formula t=((v+s)+(l-m)*l).
#include<stdio.h>
#include<conio.h>
void main()
{
	int t,v,s,l,m;
	clrscr();
	printf("\n\tEnter the value of V : ");
	scanf("%d",&v);
	printf("\tEnter the value of S : ");
	scanf("%d",&s);
	printf("\tEnter the value of L : ");
	scanf("%d",&l);
	printf("\tEnter the value of M : ");
	scanf("%d",&m);
	t=((v+s)+(l-m)*l);
	printf("\n\t((%d + %d) + (%d - %d) * %d) = %d",v,s,l,m,l,t);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)