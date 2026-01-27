#include<stdio.h>
#include<conio.h>
struct student {
	char name[20];
	int marks;
}s1[5];
void main() {
	FILE *fptr1;
	int i, n;
	clrscr();

	printf("Enter number of students : ");
	scanf("%d", &n);

	fptr1 = fopen("student.txt", "a");

	fprintf(fptr1, "Name\tMakrs\n");
	fprintf(fptr1, "----\t-----\n");

	clrscr();
	for (i = 0; i < n; i++) {
		printf("\nEnter Name of student %d : ", i + 1);
		scanf("%s", &s1[i].name);

		printf("Enter Marks of student %d : ", i + 1);
		scanf("%d", &s1[i].marks);

		fprintf(fptr1, "%s\t%d\n", s1[i].name, s1[i].marks);
	}
	fclose(fptr1);
	printf("File is printed !!!");
	getch();
}