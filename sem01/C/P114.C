/*
	Prog15: WAP to check whether the given numbet is octal or not

	Date: 2/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int isOctal(int num) {
	int digit;
	while (num > 0) {
		digit = num % 10;
		if (digit > 7)
			return 0;
		num /= 10;
	}
	return 1;
}
void main() {
	int num;
	clrscr();
	printf("Enter a number : ");
	scanf("%d", &num);
	if (isOctal(num))
		printf("\nThe number is Octal !");
	else
		printf("\nThe number is NOT Octal !");
	getch();

}
/*
Output:

Enter a number : 9

The number is NOT Octal !

*/