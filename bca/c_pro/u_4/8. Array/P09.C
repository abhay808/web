#include<stdio.h>
#include<conio.h>
void main()
{
	int n[5],i,max,min;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter no. : ");
		scanf("%d",&n[i]);
	}
	max=n[0];
	min=n[0];
	for(i=0;i<5;i++)
	{
		if(n[i]>max)
		{
			max=n[i];
		}
		if(n[i]<min)
		{
			min=n[i];
		}
	}
	printf("\nMAXIMUM ELEMENT = %d\n",max);
	printf("\nMINIMUM ELEMENT = %d",min);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)