#include<stdio.h>
#include<conio.h>
char CHR(int);
void main()
{
	char z,ans;
	clrscr();
	ans=CHR(z);
	printf("\n\tCharacter according to entered ASCII Value : %c",ans);
	getch();
}
char CHR(int a)
{
	printf("\n\tEnter the ASCII Value : ");
	scanf("%d",&a);
	return a;
}
// Made by Bhavya Popat, B.Sc IT (D2)