/*
	Find Maximum number usnig pointer
	Date: 16/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int *maximum(int *p1, int *p2){
	int ans;
	return (*p1 > *p2) ? *p1 : *p2;
}
void main() {
	int a, b, result;
	int *p1, *p2;
	clrscr();
	printf("\nEnter value of a: ");
	scanf("%d", &a);
	printf("\nEnter value of b: ");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	result = maximum(p1, p2);
	printf("\nMaximum No is : %d", result);
	getch();
}