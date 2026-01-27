/*
	WAP to find roots of qadratci equation ax^2+bx*c=0
		x1=-b+sqrt(b*b-4*a*c)/2*a
		x2=-b-sqrt(b*b-4*a*c)/2*a
	Date: 26/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void printRoot(const float a, const float b, const float c) {
	float x1, x2;
	if (b*b < 4*a*c){
		printf("Roots are not possible");
		getch();
		return;
	}
	if (a == 0){
		printf("Roots are not possible because value a can't be 0");
		getch();
		return;
	}
	x1=-b+sqrt(b*b-4*a*c)/(2*a);
	x2=-b-sqrt(b*b-4*a*c)/(2*a);
	printf("\nX1 = %g ", x1);
	printf("\nX2 = %g ", x2);
}
void main() {
	float a, b, c;
	clrscr();
	printf("Enter the value of a, b and c : ");
	scanf("%f %f %f", &a, &b, &c);
	printRoot(a, b, c);
	getch();
}
