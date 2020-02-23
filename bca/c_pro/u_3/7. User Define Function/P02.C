#include<stdio.h>
#include<conio.h>
int avg(int a[],int size);

int main()
{
 int a[20],i,size,c;
 clrscr();

 for(i=1;i<=5;i++)
 {
  printf("Enter Number %d :",i);
  scanf("%d",&a[i]);
 }

 c=avg(a,5);

 printf("\n Average=%d",c);
 getch();
}
 int avg(int x[],int size)
{
  int i,sum=0,z;
  for(i=1;i<=5;++i)
  {
     sum=sum+x[i];
  }
   z=sum/size;

   return(z);
}
// Made by Bhavya Popat, B.Sc IT (D2)