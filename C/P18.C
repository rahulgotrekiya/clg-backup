/*
	Prog18: WAP to read an integer distance between two cities in km.
		and print that in meters, feet, inch and centimeters.
	Date: 10/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float rightMostDigit(const float kilomiter) {
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


Enter an Integer number: 2333

The Right most digit is : 3
*/