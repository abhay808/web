#include<stdio.h>
#include<conio.h>

int fact(int x);

void main()
{
 int a,y,c;
 clrscr();

   printf("\nEnter No.:");
   scanf("%d",&a);

 c=fact(a);

 printf("\n Factorial=%d ",c);
 getch();
}
int fact(int x)
{
 int y,z=1;

 for(y=1;y<=x;y++)
 {
   z=z*y;
 }

  return z;
}
// Made by Bhavya Popat, B.Sc IT (D2)