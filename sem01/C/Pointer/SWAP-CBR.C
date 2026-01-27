/*
	WAP to swap two value using call by reference
	Date: 16/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void swap(int *, int *);	// function declaration
void main() {
	int a=10, b=11;
	clrscr();
	printf("\nBefore call a: %d, b: %d", a, b);
	swap(&a, &b);	// function call
	printf("\nAfter call a: %d, b: %d", a, b);
	getch();
}
void swap(int *x, int *y) {	// function definiton
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}