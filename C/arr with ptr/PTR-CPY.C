/*
	copy string using pointer and char
	Date: 21/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void copy(char str1[10]);
void main() {
	char str1[10];
	clrscr();
	printf("\nEnter string : ");
	gets(str1);
	copy(str1);
	getch();
}
void copy(char s1[10]) {
	char *p1;
	char *p2;
	char s2[10];
	p1 = s1;
	p2 = s2;
	while(*p1 != '\0') {
		*p2 = *p1;
		p2++;
		p1++;
	}
	*p2='\0';
	puts(s2);
}