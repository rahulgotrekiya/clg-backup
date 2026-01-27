/*
	How to return integer pointer
	Date: 16/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int *addition(int *p1, int *p2){
	int ans;
	ans = *p1 + *p2;
	return ans;
}
int *f1() {
	int a = 10;
	int *ptr;
	ptr = &a;
	return ptr;
}
void main() {
	int a=10, b=20, result;
 //	int *p1;
	int *ptr1, *ptr2;
	clrscr();
     //	p1 = f1();
	result = addition(&a, &b);
       //	printf("\nValue of a : %d", *p1);
	printf("\nAdditon is : %d", result);
	getch();
}