#include<stdio.h>
#include<conio.h>
void main()

{
	int i,j,k=1;
	clrscr();
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            k++;
        }
        printf("\n");
    }
    getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)