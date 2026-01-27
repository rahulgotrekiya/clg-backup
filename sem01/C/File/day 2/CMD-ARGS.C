#include<stdio.h>
#include<conio.h>
void main(int argc, char *argv[]) {
	printf("%d", argc);
	printf("%s", argv[0]);
	printf("%s", argv[1]);
	printf("%s", argv[2]);
	getch();
}