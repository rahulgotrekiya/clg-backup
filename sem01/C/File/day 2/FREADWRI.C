#include<stdio.h>
#include<conio.h>
void main () {
	FILE *fp;
	char str[20] = "Hello !!!";
	int no;

	clrscr();

	fp = fopen("data.txt", "w");
	putw(123, fp);

      //	fwrite(str, 1, strlen(str), fp);

	fclose(fp);

	// Read the same file
	fp = fopen("data.txt", "r");
	no = getw(fp);
       //	fread(str, 1, 5, fp);
	printf("%d", no);

	fclose(fp);

	getch();
}