#include<stdio.h>
#include<conio.h>
void triangle(int);

void main()
{
 int m,e,r;
 clrscr();
 printf("\n Enter Number :");
 scanf("%d",&m);

 triangle(m);

 getch();
}
 void triangle(int m)
{
  int e,r;
  for(e=1;e<=m;e++)
    {
     for(r=1;r<=e;r++)
      {
       printf("%d ",r);
      }
      printf("\n");
  }
}
// Made by Bhavya Popat, B.Sc IT (D2)