#include<stdio.h>
#include<conio.h>
int ASCII(char);
void main()
{
	char ch;
	int z;
	clrscr();
	z=ASCII(ch);
	printf("\n\tASCII Value : %d",z);
	getch();
}
int ASCII(char ch)
{
	printf("\n\tEnter the Character : ");
	scanf("%c",&ch);
	return ch;
}
// Made by Bhavya Popat, B.Sc IT (D2)