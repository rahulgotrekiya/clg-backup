#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fptr;
	char ch = 'R';
	clrscr();

	fptr = fopen("t2.txt", "a");
	fputc(ch, fptr);
	fclose(fptr);
	getch();
}