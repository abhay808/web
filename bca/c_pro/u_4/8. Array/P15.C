#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char n[10];
	int i=0,alph=0,digit=0,othr=0;
	clrscr();
	printf("Enter name : ");
	scanf("%s",&n);
	for(i=0;i<10;i++)
	{
		if(isalpha(n[i]))
		{
			alph++;
		}
		else if(isdigit(n[i]))
		{
			digit++;
		}
		else
		{
			othr++;
		}
	}
	printf("\nAlphabets = %d\n",alph);
	printf("Digits = %d\n",digit);
	printf("Special Characters = %d",othr);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)