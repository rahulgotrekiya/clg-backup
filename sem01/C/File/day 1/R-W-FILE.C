#include<stdio.h>
#include<conio.h>
void main () {
	// Declare file ptr
	FILE *fptr1, *fptr2;
	int no;
	char name[50];


	clrscr();

	// Syntax: fopen(file name, mode);
	fptr1 = fopen("text1.txt", "r");
	fptr2 = fopen("tex2.txt", "w");

	// Read / Write
	fscanf(fptr1, "%d %s", &no, &name);
	fprintf(fptr2, "%d %s" , no, name);

	// close
	fclose(fptr1);
	fclose(fptr2);

	printf("File is printed !!!");
	getch();
}