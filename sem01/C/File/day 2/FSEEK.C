#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fp;
	clrscr();

	fp = fopen("n11.txt", "w+");

	fputs("This is example", fp);
	fseek(fp, 8, SEEK_SET);
	fputs("programming", fp);

	fclose(fp);
	getch();
}