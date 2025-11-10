/*
	Prog09: WAP to find sum of all digit of given number.
	Date: 2/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int sumOfDigit(int num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
void main() {
	int num, result;
	clrscr();
	printf("Enter a number : ");
	scanf("%d", &num);
	result = sumOfDigit(num);
	printf("Sum of digit = %d", result);
	getch();
}
/*
Output:

Enter a number : 4567
Sum of digit = 22

*/