// Verify the formula x=((k-4)*(a*4))/100.
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,k,a;
	clrscr();
	printf("\n\tEnter K : ");
	scanf("%d",&k);
	printf("\n\tEnter A : ");
	scanf("%d",&a);
	x=((k-4)*(a*4))/100;
	printf("\n\t ( ( %d - 4 ) * ( %d * 4) ) / 100 = %d",k,a,x);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)