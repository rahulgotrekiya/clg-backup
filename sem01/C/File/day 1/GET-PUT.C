#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fptr;
	char ch;
	clrscr();

	fptr = fopen("t1.txt", "r");
	do {
		ch = fgetc(fptr);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(fptr);
	getch();
}