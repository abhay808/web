#include<stdio.h>
#include<conio.h>
void main()
{
	float i,k=0,temp,l=10,sum=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		++k;
		temp=i/l;
		l=l*10;
		sum=sum+temp;
		printf("%.5f ",temp);
		if(i<5)
		{
			printf("+ ");
		}
	}
	printf("= %.5f",sum);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)