#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
 double m,e,r;
 clrscr();

 printf("Enter Base No :");
 scanf("%lf",&m);

 printf("Enter Exponent No :");
 scanf("%lf",&e);

 r=pow(m,e);

 printf("\n%.0lf^%.0lf=%.0lf",m,e,r);

 getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)