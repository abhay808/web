#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[10],Positive_Count=0,Negative_Count=0;
 clrscr();
 printf("\nPlease Enter the Array Elements\n");
 for(i=0;i<10;i++)
 {
	  printf("Value [%d] : ",i+1);
	  scanf("%d", &a[i]);
 }

 for(i=0;i<10;i++)
 {
   if(a[i]>=0)
   {
	Positive_Count++;
   }
   else
   {
	Negative_Count++;
   }
 }
 printf("\n Total Number of Positive Numbers in this Array = %d ", Positive_Count);
 printf("\n Total Number of Negative Numbers in this Array = %d ", Negative_Count);
 getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)