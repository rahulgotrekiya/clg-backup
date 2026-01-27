#include<stdio.h>
#include<conio.h>
struct address {
	int pincode;
	char city[20];
};
struct student {
	int rollno;
	char name[20];
	struct address addr;
};
void main() {
	struct student s1;
	clrscr();

	printf("\nEnter Rollno of student: ");
	scanf("%d", &s1.rollno);
	printf("Enter Name of student : ");
	scanf("%s", &s1.name);
	printf("Enter pincode of student : ");
	scanf("%d", &s1.addr.pincode);
	printf("Enter city of student : ");
	scanf("%s", &s1.addr.city);



	printf("\n%d\t%s\t%d\t%s\n", s1.rollno, s1.name, s1.addr.pincode, s1.addr.city);

	getch();
}