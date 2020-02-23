// Write a program to enter any character and determine whether it is Uppercase, Lowercase, Digit or special symbol.
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n\t\tEnter the Character : ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("\n\tIt is a lowercase alphabet.");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("\n\tIt is an uppercase alphabet.");
	}
	else if(ch>=0 && ch<=9)
	{
		printf("\n\tIt is a digit.");
	}
	else
	{
		printf("\n\tIt is a special symbol.");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)