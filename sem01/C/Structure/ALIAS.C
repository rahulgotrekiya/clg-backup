#include<stdio.h>
#include<conio.h>
typedef struct student {
	int rollno;
	char name[20];
}std;
void main() {
	std s1, s2;
	clrscr();

	printf("\nEnter Rollno of student: ");
	scanf("%d", &s1.rollno);
	printf("Enter Name of student : ");
	scanf("%s", &s1.name);

	printf("\nEnter Rollno of student: ");
	scanf("%d", &s2.rollno);
	printf("Enter Name of student : ");
	scanf("%s", &s2.name);

	printf("\nRollno %d Name %s\n", s1.rollno, s1.name);

	printf("\nRollno %d Name %s\n", s2.rollno, s2.name);

	getch();
}