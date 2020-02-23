//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include<stdio.h>
#include<conio.h>
void main()
{
	float celsius, fahrenheit;
	clrscr();
	printf("\nEnter temperature in celsius: ");
	scanf("%f",&celsius);
	fahrenheit=(1.8*celsius)+32;
	printf("\nTemperature in Fahrenheit is %.2f",fahrenheit);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)