#include<stdio.h>
#include<conio.h>
void main()
{
	float x=1,y=2,sum=0,i,div;
	clrscr();
	for(i=1;i<=9;i++)
	{
		div=x/y;
		sum=sum+div;
		printf("%.0f/%.0f ",x,y);
		if(i<9)
		{
			printf("+ ");
		}
		x++;
		y++;
	}
	printf("= %.3f",sum);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)