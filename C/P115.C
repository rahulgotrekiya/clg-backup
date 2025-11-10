/*
	Prog15: WAP to check whether the given numbet is palindrome or not

	Date: 2/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int isPalindrome(int num) {
	int reverse = 0, original = num, reminder;
	while (num > 0) {
		reminder = num % 10;
		reverse = reverse * 10 + reminder;
		num /= 10;
	}
	if (original == reverse)
		return 1;
	else
		return 0;
}
void main() {
	int num;
	clrscr();
	printf("Enter a number : ");
	scanf("%d", &num);
	if (isPalindrome(num))
		printf("\nThe number is Palindrome !");
	else
		printf("\nThe number is NOT Palindrome !");
	getch();

}
/*
Output:

Enter a number : 252

The number is Palindrome !

*/