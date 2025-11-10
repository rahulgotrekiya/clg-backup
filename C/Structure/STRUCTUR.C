#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[20];
}s1 = {1, "Test1"}, s2;
void main() {
	//	struct student s1, s2;
	clrscr();

	/*
	printf("\nEnter Rollno of s1: ");
	scanf("%d", &s1.rollno);
	scanf("%*c");
	printf("\nEnter Name of s1 : ");
	gets(&s1.name);
	*/

	printf("\nEnter Rollno of s2: ");
	scanf("%d", &s2.rollno);
	scanf("%*c");
	printf("\nEnter Name of s2 : ");
	gets(&s2.name);

	printf("\nRollno %d Name %s", s1.rollno, s1.name);
	printf("\nRollno %d Name %s", s2.rollno, s2.name);

	getch();
}