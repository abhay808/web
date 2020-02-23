#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n\tEnter an Alphabet : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("\n\t%c is a Vowel",ch);
		break;
		default:
			printf("\n\t%c is a Consonant",ch);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)