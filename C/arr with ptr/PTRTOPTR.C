#include<stdio.h>
#include<conio.h>
void main() {
	int a = 5;
	int *p, **q;
	clrscr();
	p = &a;
	q = &p;
	printf("\n *p = %d", *p);
	printf("\n **q = %d", **q);
	getch();
}