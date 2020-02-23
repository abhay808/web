// Write a C program to enter the marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
#include<conio.h>
void main()
{
	float math,cl,cf,eng,es,per,avg,total;
	clrscr();
	printf("\n\tEnter marks below (Maximum 50 Marks)");
	printf("\n\tEnter marks of Maths : ");
	scanf("%f",&math);
	printf("\tEnter marks of C Language : ");
	scanf("%f",&cl);
	printf("\tEnter marks of Computer Fundamentals : ");
	scanf("%f",&cf);
	printf("\tEnter marks of English : ");
	scanf("%f",&eng);
	printf("\tEnter marks of Enviournmental Science : ");
	scanf("%f",&es);
	total=math+cf+cl+es+eng;
	avg=(math+cf+cl+es+eng)/5;
	per=(math+cf+cl+es+eng)*100/250;
	printf("\n\tTotal Marks Obtained : %.0f",total);
	printf("\n\tAverage Marks : %.0f",avg);
	printf("\n\tPercentage Obtained : %.2f %",per);
	getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)