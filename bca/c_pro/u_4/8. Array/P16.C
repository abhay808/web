#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char n[20];
	int i,vow=0,cons=0;
	clrscr();
	printf("Enter name : ");
	scanf("%s",&n);
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')
		{
			vow++;
		}
		else
		{
			cons++;
		}
	}
	printf("\nVowels = %d\n",vow);
	printf("Constants = %d\n",cons);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)