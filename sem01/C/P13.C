
/*
	Prog13: WAP to that reads the radius of spere "r" then it calculates
		its volume "v" and surface area "A".
	Date: 13/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14159
float calculateVolume(const float radius) {
	return (4.0 / 3.0) * PI * radius * radius * radius;
}
float calculateArea(const float radius) {
	return 4 * PI * radius * radius;
}
void main() {
	float radius;
	clrscr();
	printf("\nEnter Radius : ");
	scanf("%f",&radius);
	printf("\nThe Volume is : %g", calculateVolume(radius));
	printf("\nThe Area is : %g", calculateArea(radius));
	getch();
}
/*
Output:

Enter Radius : 5

The Volume is : 523.598
The Area is : 314.159
*/