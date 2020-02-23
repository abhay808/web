#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter three value : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n\n\ta is bigger than c and b");
		}
		else
		{
			printf("\n\n\tc is bigger than a and b");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n\n\tb is bigger than a and c");
		}
		else
		{
			printf("\n\n\tc is bigger than a and b");
		}
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)