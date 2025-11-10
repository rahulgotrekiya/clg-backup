#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[20];
}s1[5];
void printDetails(struct student s1);
void main() {
	int i;
	clrscr();
	for (i = 0; i < 3; i++) {
		printf("\nEnter Rollno of student: ");
		scanf("%d", &s1[i].rollno);
		scanf("%*c");
		printf("Enter Name of student : ");
		scanf("%s", &s1[i].name);

		printDetails(s1[i]);

	}
	getch();
}
void printDetails(struct student s1){
	printf("\n %d \t %s", s1.rollno, s1.name);
}