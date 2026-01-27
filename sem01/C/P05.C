/*
	Prog05: WAP to volume of cube.
	Date: 12/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float VolOfCube(const float length,const float breadth, const float height) {
	return length*breadth*height;
}
void main() {
	float length, breadth, height, ans;
	clrscr();
	printf("\nEnter length :");
	scanf("%f",&length);
	printf("\nEnter breadth :");
	scanf("%f",&breadth);
	printf("\nEnter hieght :");
	scanf("%f",&height);
	ans = VolOfCube(length, breadth, height);
	printf("\nIf the length of Cube is %g, breadth is %g and height is %g \n then Volume of cube is : %g", length, breadth, height, ans);
	getch();
}
/*
Output:

Enter length :2

Enter breadth :2

Enter hieght :2

If the length of Cube is 2, breadth is 2 and height is 2
 then Volume of cube is : 8
*/