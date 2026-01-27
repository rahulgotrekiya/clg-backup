/*
	check the char of string and print upper case and lower case char
	Date: 21/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void printCase(char str1[10]);
void main() {
	char str1[10];
	clrscr();
	printf("\nEnter Name : ");
	gets(str1);
	printCase(str1);
	getch();
}
void printCase(char s1[10]) {
	char *p1;
	int upper=0, lower=0;
	p1 = s1;
	while(*p1 != '\0') {
		if(*p1 >= 'A' && *p1 <= 'Z'){
			upper++;
		}
		if(*p1 >= 'a' && *p1 <= 'z'){
			lower++;
		}
		p1++;
	}
	printf("\nUpper case : %d", upper);
	printf("\nLower case : %d", lower);
}