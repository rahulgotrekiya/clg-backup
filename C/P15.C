/*
	Prog15: WAP to find out the area of right angle triangle using formula
		area = 1/2 * base * height
	Date: 18/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float areaOfRightAngleTriangle(const float base, const float height) {
	return (1.0 / 2.0) * base * height;
}
void main() {
	float base, height;
	clrscr();
	printf("\nEnter base of triangle : ");
	scanf("%f",&base);
	printf("\nEnter height of triangle : ");
	scanf("%f",&height);
	printf("\nThe area of right angle triangle is : %g", areaOfRightAngleTriangle(base, height));
	getch();
}
/*
Output:

Enter base of triangle : 5

Enter height of triangle : 10

The area of right angle triangle is : 25
*/