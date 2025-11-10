#include<stdio.h>
#include<conio.h>
union student {
	int rollno;
	char name[20];
};
void main() {
	union student u1;
	clrscr();

	printf("\nEnter Rollno of student: ");
	scanf("%d", &u1.rollno);
	printf("\n%d\n", u1.rollno);

	printf("Enter Name of student : ");
	scanf("%s", &u1.name);
	printf("\n%s\n", u1.name);

	printf("\n%d\t%s\n", u1.rollno, u1.name);
	getch();
}