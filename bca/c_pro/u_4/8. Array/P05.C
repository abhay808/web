#include<stdio.h>
#include<conio.h>
void main()
{
	int n[5],i,j,count=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter no. : ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]==n[j])
			{
				count++;
				break;
			}
		}
	}
	printf("\n Total no. of duplicate Elements in this Array : %d",count);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)