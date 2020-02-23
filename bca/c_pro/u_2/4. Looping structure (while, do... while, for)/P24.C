// Write a C Program to enter any number and check whether it is Armstrong number or not.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int number, originalNumber, remainder, result = 0, n = 0 ;
	clrscr();
	printf("Enter an integer: ");
	scanf("%d", &number);
	 originalNumber = number;

	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}
	originalNumber = number;
	while (originalNumber != 0)
	{
		remainder = originalNumber%10;
		result += pow(remainder, n);
		originalNumber /= 10;
	}
	if(result == number)
		printf("%d is an Armstrong number.", number);
	else
		printf("%d is not an Armstrong number.", number);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)