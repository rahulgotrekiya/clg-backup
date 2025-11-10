/*
	Prog12: WAP to check whether the given numbet is binary or not

	Date: 2/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int isBinary(int num) {
	int digit;
	while (num > 0) {
		digit = num % 10;
		if (digit != 0 && digit != 1)
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
	if (isBinary(num))
		printf("\nThe number is Binary !");
	else
		printf("\nThe number is NOT Binary !");
	getch();

}
/*
Output:

Enter a number : 01010

The number is Binary !

*/