#include<stdio.h>
#include<conio.h>
void main() {
	int i = 2024;
	clrscr();
	if((i % 100 != 0 && i % 4 == 0) || i % 400 == 0) {
		printf("%d is leap year ", i);
	} else {
		printf("%d is not leap year", i);
	}
	getch();
}