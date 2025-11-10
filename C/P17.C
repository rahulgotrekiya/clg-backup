/*
	Prog17: WAP to read an integer number form user and then displya the
		right most digit the number.
	Date: 10/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int rightMostDigit(const int number) {
	return number % 10;
}
void main() {
	int number;
	clrscr();
	printf("\nEnter an Integer number: ");
	scanf("%d",&number);
	printf("\nThe Right most digit is : %d", rightMostDigit(number));
	getch();
}
/*
Output:

Enter principal: 100

Enter rate: 5

Enter time: 3

The Compound Interest is : 15.7625
*/