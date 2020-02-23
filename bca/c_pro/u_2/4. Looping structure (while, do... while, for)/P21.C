#include<stdio.h>
#include<conio.h>

void main()
{
 int no=1,x,y,z;
 clrscr();

 printf("Enter Number:");
 scanf("%d",&x);

 printf("Enter Power:");
 scanf("%d",&y);

 for(z=1;z<=y;z++)
 {
	 no=no*x;
 }
   printf("Answer : %d",no);

 getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)