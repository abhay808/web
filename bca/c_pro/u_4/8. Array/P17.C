#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char n[20];
	int i,count=1;
	clrscr();
	printf("Enter name : ");
	scanf("%s",&n);
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]==' ')
		{
			count++;
		}
	}
	printf("\nTotal words in string = %d\n",count);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)