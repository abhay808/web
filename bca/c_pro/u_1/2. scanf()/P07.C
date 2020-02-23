// Verify the formula of Simple Interest.
#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,si,p,r,n;
	clrscr();
	printf("\n\tEnter Principle Amount: ");
	scanf("%d",&p);
	printf("\tEnter Rate of Interest: ");
	scanf("%d",&r);
	printf("\tEnter Number of Years: ");
	scanf("%d",&p);
	si=(p*r*n)/100;
	printf("\n\tThe Simple Interest is %d",si);
	amt=p+si;
	printf("\n\tThe Final Amount is %d",amt);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)