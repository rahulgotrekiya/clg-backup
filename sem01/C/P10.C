/*
	Prog10: WAP to Circumference of circle
	Date: 13/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float CircumferenceOfCircle(const float radius) {
	return 2*22*radius/7;
}
void main() {
	float radius;
	clrscr();
	printf("\nEnter Radius of circle : ");
	scanf("%f",&radius);
	printf("\nThe Area of circle is : %g", CircumferenceOfCircle(radius));
	getch();
}
/*
Output:

Enter Radius of circle : 32

The Area of circle is : 201.143
*/