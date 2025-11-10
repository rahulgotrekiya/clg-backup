#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fp;
	char ch;
	clrscr();

	fp = fopen("data.txt", "r");
	do {
		ch = fgetc(fp);
		printf("%c", ch);
	} while(ch != EOF);
	printf("%d", ftell(fp));

	rewind(fp);

	do {
		ch = fgetc(fp);
		printf("%c", ch);
	} while(ch != EOF);

	fclose(fp);
	getch();

}