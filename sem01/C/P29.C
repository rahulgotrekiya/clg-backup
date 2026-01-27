/*
	Prog29: WAP to enter 4 digit number from user and display it in string
		eg. Input:1234
		Output: One Two Three Four
	Date: 25/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void digitToWord(char digit){
	switch(digit) {
		case '0':
			printf("Zero");
		break;
		case '1':
			printf("One");
		break;
		case '2':
			printf("Two");
		break;
		case '3':
			printf("Three");
		break;
		case '4':
			printf("Four");
		break;
		case '5':
			printf("Five");
		break;
		case '6':
			printf("Six");
		break;
		case '7':
			printf("Seven");
		case '8':
			printf("Eight");
		case '9':
			printf("Nine");
		break;
		default:
			printf("\nWrong choice !!!");
		break;
	}
}
void main() {
	char number[5];
	int i;
	clrscr();
	printf("Enter any four digit number : ");
	scanf("%4s", number);
	for (i = 0; i < 4; i++) {
		digitToWord(number[i]);
		printf(" ");
	}
	getch();
}
/*
Output:

Enter any four digit number : 4232
Four Two Three Two
*/