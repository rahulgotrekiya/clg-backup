#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[20];
}s1, s2;

void main() {

	clrscr();

	// Student 1
	printf("Enter roll no of s1 : ");
	scanf("%d", &s1.rollno);
	printf("Enter Name of s1: ");
	scanf("%s", &s1.name);

	s2 = s1;

	printf("\n %d \t %s", s1.rollno, s1.name);

	printf("\n %d \t %s", s2.rollno, s2.name);
	getch();
}