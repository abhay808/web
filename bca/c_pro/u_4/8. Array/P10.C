#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n[5];
	float avg,total=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter no. : ");
		scanf("%d",&n[i]);
		total=total+n[i];
	}
	avg=total/5;
	printf("\nAverage = %.2f\n",avg);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)