// Verify the formula l=(c+d)*(g+h).
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,c,d,g,h;
	clrscr();
	printf("\n\tEnter value of C : ");
	scanf("%d",&c);
	printf("\tEnter value of D : ");
	scanf("%d",&d);
	printf("\tEnter value of G : ");
	scanf("%d",&g);
	printf("\tEnter value of C : ");
	scanf("%d",&h);
	l=(c+d)*(g+h);
	printf("\n\t(%d + %d) * (%d + %d) = %d = L",c,d,g,h,l);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)