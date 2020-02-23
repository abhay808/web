// Accept one no. from user and display it's factorial.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num, i, fact=1;
	clrscr();
	printf("Enter the number\n");
	scanf("%d",&num);
	i=num;
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("The factorial of given number %d is %d\n",num,fact);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)