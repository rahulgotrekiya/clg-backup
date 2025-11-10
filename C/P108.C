/*
	Prog08: WAP to read 4-digit number and print the sum of first and
		last digit of the number
	Date: 2/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int sumFirstLast(int num) {
	int first, last;
	last = num % 10;
	first = num / 1000;
	return first + last;
}
void main() {
	int num, result;
	clrscr();
	printf("Enter a 4-Digit number : ");
	scanf("%d", &num);
	result = sumFirstLast(num);
	printf("Sum of first and last digit = %d", result);
	getch();
}
/*
Output:

Enter a 4-Digit number : 4335
Sum of first and last digit = 9

*/