/*
	Prog04: WAP to find area of a ractangle.
	Date: 12/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float AreaOfRect(const float length,const float breadth) {
	return length*breadth;
}
void main() {
	float length, breadth;
	clrscr();
	printf("\nEnter length :");
	scanf("%f", &length);
	printf("\nEnter breadth :");
	scanf("%f", &breadth);
	printf("\nIf the length of Rectangle is %g and breadth is %g \n then area of Rectangle is : %g", length, breadth, AreaOfRect(length, breadth));
	getch();
}
/*
Output:

Enter length :2

Enter breadth :2

If the length of Rectangle is 2 and breadth is 2
 then area of Rectangle is : 4
*/