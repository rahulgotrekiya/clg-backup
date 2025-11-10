/*
	Print string using pointer and char
	Date: 21/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void printArray(char str[10]);
int stringLength(char str[10]);
void main() {
int str[10];
	clrscr();
	printf("\nEnter string : ");
	gets(str);
	printArray(str);
	printf("\nString Length is : %d", stringLength(str));
	getch();
}
void printArray(char a[10]) {
	char *p;
	p = a;	// First element address is stored int p
	while(*p != '\0') {
		printf("%c", *p);
		p++;
	}
}
int stringLength(char str[10]){
	char *p;
	int counter=0;
	p = str;	// First element address is stored int p
	while(*p != '\0') {
		p++;
		counter++;
	}
	return counter;
}