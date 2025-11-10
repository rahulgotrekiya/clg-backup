#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fptr;
	char name[50];
	clrscr();

	fptr = fopen("name.txt", "r");
	fgets(name, 50, fptr);
	printf("%s", name);

	fclose(fptr);
	getch();
}