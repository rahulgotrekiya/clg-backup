#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fptr1, *fptr2;
	char ch;

	clrscr();

	fptr1 = fopen("student.txt", "r");
	fptr2 = fopen("duplicate.txt", "w");

	do {
		ch = getc(fptr1);
		fprintf(fptr2, "%c", ch);

	} while (ch != EOF);
	fclose(fptr1);
	fclose(fptr2);

	printf("File is printed !!!");
	getch();

	}