#include<stdio.h>
#include<conio.h>
void main()
{
  int n=11, first = 0, second = 1, next, c;
  clrscr();
  for (c = 0; c < n; c++)
  {
	if (c <= 1)
	  next = c;
	else
	{
	  next = first + second;
	  first = second;
	  second = next;
	}
	printf("%d ", next);
  }

  getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)