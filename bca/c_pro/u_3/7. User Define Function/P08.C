#include<stdio.h>
#include<conio.h>
#include<math.h>

double root(double x);

void main()
{
 double a,c;
 clrscr();

  printf("\nEnter No.:");
  scanf("%lf",&a);

 c=root(a);

 printf("\n Square Root=%lf ",c);
 getch();
}
double root(double x)
{
 double z=1;

  z=sqrt(x);

  return z;
}
// Made by Bhavya Popat, B.Sc IT (D2)