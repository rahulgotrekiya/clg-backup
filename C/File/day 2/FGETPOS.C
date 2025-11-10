#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fp;
	fpos_t pos;
	clrscr();

	fp = fopen("n1.txt", "w");

	fgetpos(fp, &pos);
	fputs("Hello world !!!", fp);
	fsetpos(fp, &pos);

	fputs("This is going to override the previous content	", fp);

	fclose(fp);
	getch();
}