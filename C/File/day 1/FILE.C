#include<stdio.h>
#include<conio.h>
void main () {
	// Declare file ptr
	FILE *fptr1;
	int n;

	clrscr();

	// Syntax: fopen(file name, mode);
	fptr1 = fopen("text.txt", "w");

	// Read / Write
	fprintf(fptr1, "%d %s", 03, "Rahul Gotrekiya!!!");
	// close
	fclose(fptr1);

	printf("File is printed !!!");
	getch();
}