/*
	Prog03: WAP to add, multiply and divide two integer and float numbers using four user define functions.
	Date: 12/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float add(const float a,const float b) {
	return a+b;
}
float mult(const float a,const float b) {
	return a*b;
}
float div(const float a,const float b) {
	return a/b;
}
void main() {
	float a, b, ans;
	clrscr();
	printf("\nEnter 1st value:");
	scanf("%f",&a);
	printf("\nEnter 2nd value:");
	scanf("%f",&b);
	printf("\nAddition of %g and %g = %g", a, b, add(a, b));
	printf("\nMultiplication of %g and %g = %g", a, b, mult(a, b));
	printf("\nDivision of %g and %g = %g", a, b, div(a, b));
	getch();
}
/*
Output:

Enter 1st value:3.3

Enter 2nd value:2

Addition of 3.3 and 2 = 5.3
Multiplication of 3.3 and 2 = 6.6
Division of 3.3 and 2 = 1.65
*/