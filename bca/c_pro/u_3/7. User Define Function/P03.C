#include<stdio.h>
#include<conio.h>
int evenodd(int);

void main()
{
 int m,e,r;
 clrscr();
 printf("\n Enter Number :");
 scanf("%d",&m);

 r=evenodd(m);

 if(r==1)
 {
  printf("\n This Number is odd");
 }
 else
 {
  printf("\n This Number is even");
 }
 getch();
}
 int evenodd(int m)
{
  int s;
   if(m%2==0)
   {
    s=0;
   }
   else
   {
    s=1;
   }
  return(s);
}
// Made by Bhavya Popat, B.Sc IT (D2)