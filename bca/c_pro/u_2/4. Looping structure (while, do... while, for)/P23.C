// Write a C program to enter any number and check whether it is Prime number or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,f;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&a);
	f=0;
	i=2;
	while(i <= a/2)
	{
		if(a%i == 0)
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
		printf("Prime Number");
	else
		printf("Not Prime Number");
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)