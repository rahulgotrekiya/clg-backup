/*
	Prog10: WAP to find reverse of of given number.
	Date: 2/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int reverseNumber(int num) {
	int reverse = 0;
	while (num > 0) {
		reverse = reverse * 10 + (num % 10);
		num /= 10;
	}
	return reverse;
}
void main() {
	int num, result;
	clrscr();
	printf("Enter a number : ");
	scanf("%d", &num);
	result = reverseNumber(num);
	printf("Reverse = %d", result);
	getch();
}
/*
Output:

Enter a number : 2566
Reverse = 6652

*/