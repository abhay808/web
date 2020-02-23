#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=2,sum=0;
	clrscr();
	for(i=1;i<=9;i+=2)
	{
		sum=sum+i-j;
		printf("%d - %d",i,j);
		if(i<9)
		{
			printf(" + ");
		}
		j+=2;
	}
	printf(" = %d",sum);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)