#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char n[50],temp[50];
	clrscr();
	printf("Enter name : ");
	scanf("%s",&n);
	strcpy(temp,n);
	strrev(temp);
	if(strcmp(n,temp)==0)
	{
		printf("\n\"%s\" is palindrome\n",n);
	}
	else
	{
		printf("\n\"%s\" is not palindrome",n);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)