#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[20];
	int s1, s2, s3;
};
void main() {
	struct student *ptr;
	int total[3], i, n = 2;
	clrscr();
	ptr = (struct student *)malloc(n*sizeof(struct student));
	for (i = 0; i < 3; i++) {
		printf("\nEnter Rollno of student: ");
		scanf("%d", &(ptr+i)->rollno);
		scanf("%*c");
		printf("Enter Name of student : ");
		gets((ptr+i)->name);
		printf("Enter marks of subject 1: ");
		scanf("%d", &(ptr+i)->s1);
		printf("Enter marks of subject 2: ");
		scanf("%d", &(ptr+i)->s2);
		printf("Enter marks of subject 3: ");
		scanf("%d", &(ptr+i)->s3);
		total[i] = (ptr+i)->s1 + (ptr+i)->s2 + (ptr+i)->s3;

		printf("\nRollno %d Name %s Total Marks %d\n", (ptr+i)->rollno, (ptr+i)->name, total[i]);
	}
	getch();
}