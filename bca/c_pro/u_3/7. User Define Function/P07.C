#include<stdio.h>
#include<conio.h>
#include<math.h>
double power(double x,double y);

void main()
{
 double m,e,r;
 clrscr();

  printf("\nEnter Base No.:");
  scanf("%lf",&m);

  printf("\nEnter Expon No.:");
  scanf("%lf",&e);

 r=power(m,e);

 printf("\n %.0lf^%.0lf=%.0lf ",m,e,r);
 getch();
}
double power(double x,double y)
{
 double z=1;

  z=pow(x,y);

  return z;
}
// Made by Bhavya Popat, B.Sc IT (D2)