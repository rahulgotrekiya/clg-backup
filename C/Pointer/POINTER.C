/*
	WAP to perform operation on two dimentional array
	Date: 11/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>

/*
void main() {
	int i = 10;
	int *p, **q, ***k;
	p = &i;
	q = &p;
	k = &q;
	clrscr();
	printf("\n Value of i = %d", i);
	printf("\n Address of i = %X", &i);
	printf("\n Value of p = %X", p);
	printf("\n Value of *p = %d", *p);
	printf("\n Address of p = %X", &p);
	printf("\n Value of q = %X", q);
	printf("\n Value of *q = %X", *q);
	printf("\n Value of **q = %d", **q);
	printf("\n Value of k = %X", k);
	printf("\n Value of *k = %X", *k);
	printf("\n Value of **k = %X", **k);
	printf("\n Value of ***k = %d", ***k);


	getch();
}
*/
void Swap(int *a, int *b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
	printf("\nIn Swatp a = %d and b = %d", a, b);
}
void main() {
	int a = 10, b = 20;
	int *p, *q;
	clrscr();
	p = &a;
	q = &b;
	printf("\nBefore Swap a = %d and b = %d", a, b);
	Swap(&a, &b);
	printf("\nAfter Swap a = %d and b = %d", a, b);
	getch();
}

