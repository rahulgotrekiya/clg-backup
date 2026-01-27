#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[20];
	int s1, s2, s3;
}s[3];
void main() {
	int total[3], i, n;
	clrscr();
	for (i = 0; i < 3; i++) {
		printf("\nEnter Rollno of student: ");
		scanf("%d", &s[i].rollno);
		scanf("%*c");
		printf("Enter Name of student : ");
		gets(s[i].name);
		printf("Enter marks of subject 1: ");
		scanf("%d", &s[i].s1);
		printf("Enter marks of subject 2: ");
		scanf("%d", &s[i].s2);
		printf("Enter marks of subject 3: ");
		scanf("%d", &s[i].s3);
		total[i] = s[i].s1 + s[i].s2 + s[i].s3;

		printf("\nRollno %d Name %s Total Marks %d", s[i].rollno, s[i].name, total[i]);
	}
	getch();
}