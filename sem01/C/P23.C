/*
	Prog23: WAP to findout Maximum number among two numbers
	Date: 23/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int Maximum(const int number1, const int number2){
	return (number1 > number2) ? number1 : number2;
}
void main() {
	int number1, number2;
	clrscr();
	printf("Enter number1 : ");
	scanf("%d", &number1);
	printf("Enter number2 : ");
	scanf("%d", &number2);
	printf("\nThe Maximum number is %d.", Maximum(number1, number2));
	getch();
}
/*
Output:
Enter number1 : 3
Enter number2 : 6

The Minimum number is 3.
*/