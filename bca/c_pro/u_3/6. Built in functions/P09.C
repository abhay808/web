#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char m[20],e[20];
 clrscr();

 printf("Enter name :");
 scanf("%s",&m);

 printf("Enter name :");
 scanf("%s",&e);

 strcat(m,e);

 printf("\n%s",m);

 getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)