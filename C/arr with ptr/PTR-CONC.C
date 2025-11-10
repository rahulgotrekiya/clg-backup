/*
	concat two string into third strig
	Date: 21/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void concat(char str1[10], char str2[10]);
void main() {
	char str1[10], str2[10];
	clrscr();
	printf("\nEnter Name : ");
	gets(str1);
	printf("\nEnter Surname : ");
	gets(str2);
	concat(str1, str2);
	getch();
}
void concat(char s1[10], char s2[10]) {
	char *p1, *p2, *p3;
	char s3[20];
	p1 = s1;
	p2 = s2;
	p3 = s3;
	while(*p1 != '\0') {
		*p3 = *p1;
		p1++;
		p3++;
	}
	while(*p2 != '\0') {
		*p3 = *p2;
		p2++;
		p3++;
	}
	*p3='\0';
	puts(s3);
}