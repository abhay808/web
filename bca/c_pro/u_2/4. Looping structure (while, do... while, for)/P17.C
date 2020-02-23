#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n, firstDigit, lastDigit, digits;
	clrscr();
	printf("Enter any number: ");
	scanf("%d", &n);
	lastDigit = n % 10;
	digits = (int)log10(n);
	firstDigit = (int)(n / pow(10, digits));
	printf("First digit = %d\n", firstDigit);
	printf("Last digit = %d\n", lastDigit);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)