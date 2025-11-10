/*
	Date: 21/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void printCount(char str1[10]);
void main() {
	char str1[10];
	clrscr();
	printf("\nEnter Name : ");
	gets(str1);
	printCount(str1);
	getch();
}
void printCount(char s1[10]) {
	char *p1;
	int word=1, ch=0;
	p1 = s1;
	while(*p1 != '\0') {
		if(*p1 == ' '){
			word++;
		}
		if(*p1 >= 'A' && *p1 <= 'Z' || *p1 >= 'a' && *p1 <= 'z'){
			ch++;
		}
		p1++;
	}
	printf("\nWords : %d", word);
	printf("\nCharacters : %d", ch);
}