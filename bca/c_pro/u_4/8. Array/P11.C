#include<stdio.h>
#include<conio.h>
void main()
{
	int x[3][4],i,j,rt=0,ct=0,max=0,min,tot=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\tRow %d : \n",i+1);
		for(j=0;j<4;j++)
		{
			printf("\t Enter Value : ");
			scanf("%d",&x[i][j]);
		}
		printf("\n");
	}
	printf(" Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			rt+=x[i][j];
		}
		printf("\n\t Number %d Row Total : %d",i+1,rt);
		rt=0;
	}
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
			ct+=x[i][j];
		}
		ct=0;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			min=x[0][0];
			if(x[i][j]>max)
			{
				max=x[i][j];
			}
		}
	}
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
			min=x[0][0];
			if(x[i][j]<min)
			{
				min=x[i][j];
			}
		}
	}
	printf("\n\tMaximum Value : %d",max);
	printf("\n\tMinimum Value : %d",min);
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			tot+=x[i][j];
		}
		printf("\n");
	}
	printf("\n\t Total : %d",tot);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)