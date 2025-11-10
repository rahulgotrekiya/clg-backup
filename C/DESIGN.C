#include<stdio.h>
#include<conio.h>

/*
	print designs
*/
void Print(const int col, const int row) {
	int i, j, k;
	for(i = 1; i <= row; i++) {
		for (k = 1; k < i;k++) {
			printf("  ");
		}
		for(j = i; j <= col; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
void main() {
	int col = 5, row = 5;
	clrscr();
	Print(col, row);
	getch();
}