// Write a C program to create Simple Calculator using switch case.
#include<stdio.h>
#include<conio.h>
void main()
{
	char op;
	double firstNumber,secondNumber;
	clrscr();
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &op);
	printf("Enter two operands: ");
	scanf("%lf %lf",&firstNumber, &secondNumber);
	switch(op)
	{
		case '+':
			printf("%.0lf + %.0lf = %.0lf",firstNumber, secondNumber, firstNumber + secondNumber);
			break;
		case '-':
			printf("%.0lf - %.0lf = %.0lf",firstNumber, secondNumber, firstNumber - secondNumber);
			break;
		case '*':
			printf("%.0lf * %.0lf = %.0lf",firstNumber, secondNumber, firstNumber * secondNumber);
			break;
		case '/':
			printf("%.0lf / %.0lf = %.2lf",firstNumber, secondNumber, firstNumber / secondNumber);
			break;
		default:
			printf("Error! operator is not correct");
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)