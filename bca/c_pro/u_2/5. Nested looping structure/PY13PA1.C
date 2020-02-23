#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char k='a';
clrscr();
for(i=1;i<6;i++)
{
for(j=1;j<=i;j++)
{
printf(" %c",k++);
}
printf("\n");
}
getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)