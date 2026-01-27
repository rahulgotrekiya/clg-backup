/*
	Prog31: WAP to check eligibility of student for admission.
		Student Shoud fulffil the following criteria for admission:
		Mathematics >= 50	Physics >= 45	Chemistry >= 60
		Total of all Subjects >=170
					  OR
		Total of Mathematics + Physics > 120
		Acept the marks of all the three subjects from user and check if
		student is eligible for admission
		PRINT THE MESSAGE: Student eligible for Admission
					OR
		Student is not eligible for admission
	Date: 25/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float checkEligibility(const float Mathematics, const float Physics, const float Chemistry, const float TotalOfAll, const float TotalOfTwo){
	if(Mathematics >=50 && Physics >= 45 && Chemistry >= 60 && TotalOfAll
		|| TotalOfTwo >= 120) {
		return printf("\n\nStudent is eligible for Admission");
	} else {
	     return printf("\n\nStudent is not eligible for Admission");
	}
}
void main() {
	float Mathematics, Physics, Chemistry, TotalOfAll, TotalOfTwo;
	clrscr();
	printf("\nEnter Mathematics marks : ");
	scanf("%f", &Mathematics);
	printf("\nEnter Physics marks : ");
	scanf("%f", &Physics);
	printf("\nEnter Chemistry marks : ");
	scanf("%f", &Chemistry);
	TotalOfAll = Mathematics + Physics + Chemistry;
	TotalOfTwo = Mathematics + Physics;
	printf("\nTotal marks of all subjects = %g", TotalOfAll);
	checkEligibility(Mathematics, Physics, Chemistry, TotalOfAll, TotalOfTwo);
	getch();
}
/*
Output:

Enter Mathematics marks : 323

Enter Physics marks : 223

Enter Chemistry marks : 22

Total marks of all subjects = 345

Student is eligible for Admission
*/