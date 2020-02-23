#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n\tEnter an Alphabet : ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	{
		printf("\n\t%c is a Vowel",ch);
	}
	else
	{
		printf("\n\t%c is a Consonant",ch);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)