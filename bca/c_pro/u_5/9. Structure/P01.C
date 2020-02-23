#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int rno;
		char name[20],grade;
		float m1,m2,m3,sum,average;
	};
	struct student s1;
	clrscr();
	printf("\nEnter Roll No. : ");
	scanf("%d",&s1.rno);
	printf("Enter Name : ");
	scanf("%s",s1.name);
	printf("Enter C Language Marks : ");
	scanf("%f",&s1.m1);
	printf("Enter Computer Fundamentals Marks : ");
	scanf("%f",&s1.m2);
	printf("Enter English Marks : ");
	scanf("%f",&s1.m3);
	s1.sum=s1.m1+s1.m2+s1.m3;
	s1.average=s1.sum/3;
	if(s1.average>=80)
	{
		s1.grade='A';
	}
	else if(s1.average>=60 && s1.average<80)
	{
		s1.grade='B';
	}
	else if(s1.average>=40 && s1.average<60)
	{
		s1.grade='C';
	}
	else if(s1.average<40 || s1.m1<40 || s1.m2<40 || s1.m3<40)
	{
		s1.grade='F';
	}
	clrscr();
	printf("\nEnter Roll No. : %d",s1.rno);
	printf("\nEnter Name : %s",s1.name);
	printf("\n\tTotal : %.0f",s1.sum);
	printf("\n\tAverage : %.2f",s1.average);
	printf("\n\tGrade : %c",s1.grade);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)