/*
	Prog12: WAP to display sum up to a number
	Date: 13/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float sum(const float number) {
	return number*(number+1)/2;
}
void main() {
	float number;
	clrscr();
	printf("\nEnter Number : ");
	scanf("%f",&number);
	printf("\nThe Sum of first %g Natural numbers is : %g", number, sum(number));
	getch();
}
/*
Output:

Enter Number : 5

The Sum of first 5 Natural numbers is : 15
*/