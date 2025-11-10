/*
	Prog09: WAP to calculate area of circle
	Date: 13/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float AreaOfCircle(const float radius) {
	return PI*radius*radius;
}
void main() {
	float radius;
	clrscr();
	printf("\nEnter Radius of circle : ");
	scanf("%f",&radius);
	printf("\nThe Area of circle is : %g", AreaOfCircle(radius));
	getch();
}
/*
Output:


Enter Radius of circle : 32

The Area of circle is : 3215.36
*/