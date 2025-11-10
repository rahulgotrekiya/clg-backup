/*
	Prog35: WAP for grade calculation using if...else if ladder and switch
		statement. Accept marks of 3 subjects, calculate total and base on
		it calculate grade.

		Total grater or equal to than 80		 	Grade A+
		Total grater or equal to than 70 and less than 80	Grade A
		Total grater or equal to than 60 and less than 70	Grade A-
		Total grater or equal to than 50 and less then 60	Grade B+

	Date: 28/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float calculateGrade(const int makrs) {
	if (marks >= 80)
		return 'A';
	else if(marks >= 70)
		return 'A';
	else if(marks >= 60)
		return 'B';
	else
		return 'B';
	return bills;
}
char calculateGradeSwitch(const int marks){
	int grade_number;

	if (marks >= 80)
		grade_number = 4;
	else if(marks >= 70)
		grade_number = 3;
	else if(marks >= 60)
		grade_number = 2;
	else
		grade_number = 1;

	switch(grade_number) {
		case 4:
			return 'A';
		case 3:
			return 'A';
		case 2:
			return 'A';
		default:
			return 'A';
	}
}
void main() {
	int marks1, marks2, marks3, total;
	char grade;

	clrscr();

	printf("Enter number of units : ");
	scanf("%d", &units);

	amount = calculateBill(units);

	printf("\nElectric Bill...\n");
	printf("\nTotal bill amount = Rs %g", amount);
	getch();
}
/*
Output:

Enter number of units : 320

Electric Bill...

Total bill amount = Rs 1037
*/