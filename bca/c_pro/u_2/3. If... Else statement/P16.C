#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	float pi=3.14,r,area,base,alt,area2,f,g,add,ans3,p,r1,n,si;
	clrscr();
	printf("\n\t  (1) Area of Circle");
	printf("\n\t  (2) Area of Triangle");
	printf("\n\t  (3) (f+g) * (f+g)");
	printf("\n\t  (4) Simple Interest");
	printf("\nENTER YOUR CHOICE (1/2/3/4) : ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		{
			clrscr();
			printf("\n\tEnter Radius of the Circle : ");
			scanf("%f",&r);
			area=pi*r*r;
			printf("\n\tArea of the Circle : %.2f",area);
		}
		break;
		case 2:
		{
			clrscr();
			printf("\n\tEnter Length of Base : ");
			scanf("%f",&base);
			printf("\tEnter Length of Altitude : ");
			scanf("%f",&alt);
			area2=0.5*base*alt;
			printf("\n\tArea of Triangle : %.2f",area2);
		}
		break;
		case 3:
		{
			clrscr();
			printf("\n\tEnter Value of F : ");
			scanf("%f",&f);
			printf("\tEnter Value of G : ");
			scanf("%f",&g);
			add=f+g;
			ans3=add*add;
			printf("\n\t(%.0f+%.0f) * (%.0f+%.0f) = %.0f",f,g,f,g,ans3);
		}
		break;
		case 4:
		{
			clrscr();
			printf("\n\tEnter Value of P : ");
			scanf("%f",&p);
			printf("\n\tEnter Value of R : ");
			scanf("%f",&r1);
			printf("\n\tEnter Value of N : ");
			scanf("%f",&n);
			si=p*r1*n/100;
			printf("\n\tSimple Interest : %.2f",si);
		}
		break;
		default:
		goto zzz;
	}
	zzz:
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)