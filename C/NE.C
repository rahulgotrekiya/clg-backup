#include<stdio.h>
#include<conio.h>
void main() {
	int x = (3 == 2) && (3 != 3 || 4 >=4);
	clrscr();
	printf("%d", x);
	getch();
}