#include<stdio.h>
#include<conio.h>
void main()
{
	float amt,result,sc;
	clrscr();
	printf("\n\tEnter the amount of Units Electricity Charges : ");
	scanf("%f",&amt);
	sc=amt*20/100;
	if(amt<=50)
	{
		result=amt*0.5+sc;
		printf("\n\tBill : Rs. %.2f",result);
	}
	else if(amt>50 && amt<=150)
	{
		result=amt*0.75+sc;
		printf("\n\tBill : Rs. %.2f",result);
	}
	else if(amt>150 && amt<=250)
	{
		result=amt*1.2+sc;
		printf("\n\tBill : Rs. %.2f",result);
	}
	else if(amt>250)
	{
		result=amt*1.5+sc;
		printf("\n\tBill : Rs. %.2f",result);
	}
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)