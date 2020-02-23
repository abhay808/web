#include<stdio.h>
#include<conio.h>
void main()
{
    int q=0,count=0;
    char ans;
    while(q<=3)
    {
	++q;
	clrscr();
	printf("\n\t\t\t\t\t\t\tCorrect Answer : %d/3",count);
	switch(q)
	{
		case 1:
		printf("\n\t\t\t\tWelcome to KBC!");
		printf("\n\t\t\t\t===============\n\n");
		printf("\n\n\t(1) What is the Capital of India?\n");
		printf("\n\t(A) Mumbai \t\t (B) Chennai");
		printf("\n\t(C) New Delhi \t\t (D) Kolkata");
		printf("\n\n\n  Enter Your Choice [A/B/C/D] : ");
		scanf("%c",&ans);
		switch(ans)
		{
			case 'c': case 'C':
			count++;
			printf("\n\n\tCorrect Answer. Press any key to continue.");
			getch();
			break;
			default:
			printf("\n\n\n\n\n\t\tWrong Answer. Press any key to exit.");
			goto zzz;
		}
		fflush(stdin);
		break;
		case 2:
		printf("\n\n\t(2) What is India's Population Density?\n");
		printf("\n\t(A) 382 per sq km \t\t (B) 290 per sq km");
		printf("\n\t(C) 375 per sq km \t\t (D) 423 per sq km");
		printf("\n\n\n  Enter Your Choice [A/B/C/D] : ");
		scanf("%c",&ans);
		switch(ans)
		{
			case 'a': case 'A':
			count++;
			printf("\n\n\tCorrect Answer. Press any key to continue.");
			getch();
			break;
			default:
			printf("\n\n\n\n\n\t\tWrong Answer. Press any key to exit.");
			goto zzz;
		}
		fflush(stdin);
		break;
		case 3:
		printf("\n\n\t(3) What is the National Aquatic Animal of India?\n");
		printf("\n\t(A) Crocodile \t\t (B) River Dolphin");
		printf("\n\t(C) Katla Fish \t\t (D) Green Frog");
		printf("\n\n\n  Enter Your Choice [A/B/C/D] : ");
		scanf("%c",&ans);
		switch(ans)
		{
			case 'b': case 'B':
			count++;
			printf("\n\n\tCorrect Answer. Press any key to continue.");
			getch();
			break;
			default:
			printf("\n\n\n\n\n\t\tWrong Answer. Press any key to exit.");
			goto zzz;
		}
		break;
		default:
		printf("\n\n\n\n\n\n\n\n\n\n\t\tThank You for Playing.. Press any key to exit.");
	}
    }
    zzz:
    getch();
}
// Made by Bhavya Popat, B.Sc IT (D2)