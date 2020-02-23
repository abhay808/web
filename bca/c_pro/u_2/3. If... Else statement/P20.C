// Get a character in lower case from user and display it in upper case.
#include<stdio.h>
#include<conio.h>
void main()
{
	char lc,uc;
	clrscr();
	printf("\n\tEnter Lowecase Alphabet : ");
	scanf("%c",&lc);
	uc=lc-32;
	printf("\n\tAfter Conversion...");
	printf("\n\tUppercase Alphabet : %c",uc);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)