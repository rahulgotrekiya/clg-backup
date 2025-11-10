#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[20];
};

void main() {
	struct student *ptr;
	int i;
	int n = 3;
	clrscr();
	ptr = (struct student *)malloc(n*sizeof(struct student));
	//	p = (int *)malloc(n*sizeof(int));
	for(i = 0; i < 3; i++) {
		printf("\nEnter roll no of s1 : ");
		scanf("%d", &(ptr+i)->rollno);
		printf("Enter Name of s1: ");
		scanf("%s", &(ptr+i)->name);

		printf("\n %d \t %s", (ptr+i)->rollno, (ptr+i)->name);
	}
	getch();
}