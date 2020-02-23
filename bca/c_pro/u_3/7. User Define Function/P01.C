#include<stdio.h>
#include<conio.h>

int sum(int ,int);

void main()
{
 int a,b,c;
 clrscr();
 printf("\n Enter 1st Number :");
 scanf("%d",&a);

 printf("\n Enter 2nd Number :");
 scanf("%d",&b);

 c=sum(a,b);

 printf("\n Sum=%d",c);
 getch();

}
 int sum(int x,int y)
{
  int z;
  z=x+y;
  return(z);
}
// Made by Bhavya Popat, B.Sc IT (D2)