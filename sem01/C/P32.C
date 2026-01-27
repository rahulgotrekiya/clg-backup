/*
	Prog32: WAP to read marks from keyboard adnd your program should
		display equivalent grade according to following state.
		================
		 Marks	Grade
		================
		 0-34	Fail
		 35-59 	Second Class
		 60-79	First Class
		 80-59	Dist
	Date: 25/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void grade(const int Marks){
	if(Marks <= 34) {
		return printf("\nGrade : Fail");
	} else if(Marks <= 59) {
		return printf("\nGrade : Second Class");
	} else if(Marks <= 79) {
		return printf("\nGrade : Firs Class");
	} else {
		return printf("\nGrade : Dist");
	}
}
void main() {
	int Marks;
	clrscr();
	printf("\nEnter Marks (0 - 100) : ");
	scanf("%d", &Marks);
	if (Marks < 0 || Marks > 100 ) {
		printf("\nUnvalid Marks !!!");
	} else {
		grade(Marks);
	}
	getch();
}
/*
Output:

Enter Marks (0 - 100) : 13

Grade : Fail
*/