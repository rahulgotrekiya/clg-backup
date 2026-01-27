/*
	Prog26: WAP to find out year is leap year or not.
	Date: 23/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int IsLeapYear(const int year){
	if((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
		printf("%d is leap year ", year);
	} else {
		printf("%d is not leap year", year);
	}
}
void main() {
	int year;
	clrscr();
	printf("\nEnter a Year: ");
	scanf("%d",&year);
	IsLeapYear(year);
	getch();
}
/*
Output:

Enter a Year: 2004
2004 is leap year
*/