#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fptr;
	clrscr();

	fptr = fopen("name.txt", "w+");
	fputs("\nThis is inserted from Program !", fptr);

	fclose(fptr);
	getch();
}