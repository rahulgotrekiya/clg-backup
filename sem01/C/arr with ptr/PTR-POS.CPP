/*
	WAP in c to find position of character in string using pointer
	Input :
		Enter String : I am fine
		Enter Character : m
	Output :
		Character position : 4
			OR
		Character Not Fount !
	Date: 21/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void checkPos(char str1[10], char str2);
void main() {
	char str1[10], ch;
	clrscr();
	printf("\nEnter String : ");
	gets(str1);
	printf("\nEnter Character : ");
	scanf("%c", &ch);
	checkPos(str1, ch);
	getch();
}
void checkPos(char s1[10], char ch) {
	char *p1;
	int pos=1;
	p1 = s1;
	while(*p1 != '\0') {
		if(*p1 == ch){
			break;
		}
		else {
			printf("Character Not Fount !");
		}
		pos++;
		p1++;
	}
	printf("\nCharacter position: %d", pos);
}