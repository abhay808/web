// Accept one no from user and display sum of it's digits.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0,r;
	clrscr();
	printf("Enter a Number: ");
	scanf("%d",&num);
	while(num)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("Sum of Digits of Number:  %d",sum);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)