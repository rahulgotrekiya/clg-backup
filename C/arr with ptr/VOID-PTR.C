#include<stdio.h>
#include<conio.h>
void main() {
	int a = 10;
	float b = 1.5;
	char c = 'a';

	void *ptr;

	clrscr();

	ptr = &a;
	printf("%d\n", *(int *)ptr);

	ptr = &b;
	printf("%f\n", *(float *)ptr);

	ptr = &c;
	printf("%c", *(char *)ptr);

	getch();
}