#include<stdio.h>
#include<conio.h>
void main()
{
	int x,age,count1=0,count2=0;
	clrscr();
	for(x=1;x<=5;x++)
	{
		printf("enter the %d person age :",x);
		scanf("%d",&age);
		if(age<=21)
		{
			count1++;
		}
		else
		{
			count2++;
		}

	}
	printf("\n\t%d person is age above and eqult to 21",count1);
	printf("\n\t%d person is age belove 21",count2);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)