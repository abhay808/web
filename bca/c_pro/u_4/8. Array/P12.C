#include<stdio.h>
#include<conio.h>
void main()
{
	int n[5],i,j,temp;
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
			if(n[j]<n[i])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}

		}
	}
	printf("\nSorting Array to ascending order : ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",n[i]);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)