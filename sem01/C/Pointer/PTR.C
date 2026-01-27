/*
	WAP to perform operation on pointer addition
	Date: 16/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int Addition(int *, int *);	// declaration
void main() {
	int a, b, result;
	int *ptr1, *ptr2;
	clrscr();
	printf("\nEnter value of a: ");
	scanf("%d", &a);
	printf("\nEnter value of b: ");
	scanf("%d", &b);
       //	ans= Addition(&a, &b);	// function call
	printf("\nans is %d", Addition(&a, &b));
	getch();
}
int Addition(int *p, int *q){
	int result;
	result = *p + *q;
	return result;
   //	printf("\nAdditon of two values : %d", result);

}