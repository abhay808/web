#include<stdio.h>
#include<conio.h>
void main()
{
	int first[3][3],second[3][3],sum[3][3],i,j;
	clrscr();
	printf("first matrix\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter no. : ");
			scanf("%d",&first[i][j]);
		}
	}
	printf("\nsecond matrix : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter no. : ");
			scanf("%d",&second[i][j]);
		}
	}
	printf("\nFirst Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",first[i][j]);
		}
		printf("\n");
	}
	printf("\nSecond matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",second[i][j]);
		}
		printf("\n");
	}
	printf("\nSum of Matrix is here :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=first[i][j]+second[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)