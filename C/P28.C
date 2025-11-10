/*
	Prog28: WAP that reads a number from 1 to 7 and then print corresponding
		day name from week using switch case.
	Date: 24/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void main() {
	int ch;
	clrscr();
	printf("Enter any 1 to 7 number for printing the corresponding day : ");
	scanf("%d", &ch);
	switch(ch) {
		case 1:
			printf("\nSunday");
		break;
		case 2:
			printf("\nMonday");
		break;
		case 3:
			printf("\nTuesday");
		break;
		case 4:
			printf("\nWednesday");
		break;
		case 5:
			printf("\nThursday");
		break;
		case 6:
			printf("\nFriday");
		break;
		case 7:
			printf("\nSaturday");
		break;
		default:
			printf("\nWrong choice !!!");
		break;
	}

	getch();
}
/*
Output:

Enter any 1 to 7 number for printing the corresponding day : 9

Wrong choice !!!
*/