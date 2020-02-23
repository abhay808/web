// Write a C program to enter temperature in Fahrenheit and convert it into Celsius.
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("\n\tEnter the Temperature in Fahrenheit: ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("\n\tThe Temperature in Celsius is %.2f",c);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)