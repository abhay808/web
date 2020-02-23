#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	float n1,n2,ans;
	char sym;
	clrscr();
	printf("\n\tEnter 1st Value : ");
	scanf("%f",&n1);
	printf("\n\tEnter 2nd Value : ");
	scanf("%f",&n2);
	printf("\n\tHere are your Options");
	printf("\n\t(1) Addition");
	printf("\n\t(2) Subtraction");
	printf("\n\t(3) Multiplication");
	printf("\n\t(4) Division");
	zzz:
	printf("\nEnter Your Choice[1/2/3/4] : ");
	scanf("%d",&choice);
	if(choice==1)
	{
		ans=n1+n2;
		sym='+';
	}
	else if(choice==2)
	{
		ans=n1-n2;
		sym='-';
	}
	else if(choice==3)
	{
		ans=n1*n2;
		sym='*';
	}
	else if(choice==4)
	{
		ans=n1/n2;
		sym='/';
	}
	else
	{
		printf("\n\t/Invalid choice! Please Enter a Valid Choice");
		goto zzz;
	}
	printf("\n\t%.0f %c %.0f : %.2f",n1,sym,n2,ans);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)