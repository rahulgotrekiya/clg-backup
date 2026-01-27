/*
	WAP in c to create a structure for student and store the following
	details.(name , couse, year, gender, Marks of three subjects)
	calculate total marks and percentage
*/
#include<stdio.h>
#include<conio.h>
struct student {
	char name[20], course[20], gender;
	int year, sub1, sub2, sub3;

}s1, s2;
void main() {
	int total;
	float per;
	clrscr();

s2 = s1;
	// Student 1
	printf("Enter Name of s1: ");
	gets(s1.name);
	printf("Enter Course of s1 : ");
	gets(s1.course);
	printf("Enter Year of s1: ");
	scanf("%d", &s1.year);
	printf("Enter gender of s1 (M or F): ");
	scanf("%c", &s1.gender);
	scanf("%*c");

	printf("Enter Marks of sub1: ");
	scanf("%d", &s1.sub1);
	printf("Enter Marks of sub2: ");
	scanf("%d", &s1.sub2);
	printf("Enter Marks of sub3: ");
	scanf("%d", &s1.sub3);

	total = s1.sub1 + s1.sub2 + s1.sub3;
	per = total / 3;

	printf("\n %s\t%s\t%d\%c\t%d\t%g\n", s1.name, s1.course, s1.year, total, per);


	// Student 2
	scanf("%*c");
	printf("Enter Name of s2 : ");
	gets(s2.name);
	printf("Enter Course of s2 : ");
	gets(s2.course);
	printf("Enter Year of s2: ");
	scanf("%d", &s2.year);
	printf("Enter gender of s2 (M or F): ");
	scanf("%c", &s2.gender);
	scanf("%*c");

	printf("\nEnter Marks of sub1: ");
	scanf("%d", &s2.sub1);
	printf("\nEnter Marks of sub2: ");
	scanf("%d", &s2.sub2);
	printf("\nEnter Marks of sub3: ");
	scanf("%d", &s2.sub3);

	total = s2.sub1 + s2.sub2 + s2.sub3;
	per = total / 3;

	printf("\n %s %s %d %c %d %g", s2.name, s2.course, s2.year, s2.gender, total, per);

	getch();
}