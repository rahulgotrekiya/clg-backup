/*
	Prog27: WAP to enter any arithmetic operator(+ - * /) and find out
		two integer values and display result accoring to selection
		of operator.
	Date: 23/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int Addition(const int a, const int b){
	return a + b;
}
int Subtraction(const int a, const int b){
	return a - b;
}
int Multiplication(const int a, const int b){
	return a * b;
}
int Division(const int a, const int b){
	return a / b;
}
void Menu() {
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5..Exit");
	printf("\n \n Enter your choice : ");
}
void main() {
	int ch, Add, Sub, Mult, Div;
	int a, b;
	clrscr();
	Menu();
	scanf("%d", &ch);
	switch(ch) {
		case 1:
			clrscr();
			printf("\nEnter two value : ");
			scanf("%d %d", &a, &b);
			printf("\nAddition of %d and %d is = %d", a, b, Addition(a, b));
		break;
		case 2:
			clrscr();
			printf("\nEnter two value : ");
			scanf("%d %d", &a, &b);
			printf("\nSubtraction of %d and %d is = %d", a, b, Subtraction(a, b));
		break;
		case 3:
			clrscr();
			printf("\nEnter two value : ");
			scanf("%d %d", &a, &b);
			printf("\nMultiplication of %d and %d is = %d", a, b, Multiplication(a, b));
		break;
		case 4:
			clrscr();
			printf("\nEnter two value : ");
			scanf("%d %d", &a, &b);
			printf("\nDivision of %d and %d is = %d", a, b, Division(a, b));
		break;
		case 5:	//Exit
			clrscr();
			gotoxy(35,12);
			printf("Thank You !!!");
		break;
		default:
			printf("\nWrong choice !!!");
		break;

	}

	getch();
}
/*
Output:

Enter two value : 10 5

Division of 10 and 5 is = 2
*/