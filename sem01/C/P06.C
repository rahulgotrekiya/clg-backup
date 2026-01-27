/*
	Prog05: WAP to area of triangle.
	Date: 12/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float AreaOfTriangle(const float length,const float breadth) {
	return (length*breadth)/2;
}
void main() {
	float length, breadth, ans;
	clrscr();
	printf("\nEnter length :");
	scanf("%f",&length);
	printf("\nEnter breadth :");
	scanf("%f",&breadth);
	ans = AreaOfTriangle(length, breadth);
	printf("\nIf the length of Triangle %g and breadth is %g \n then area of Triangle is : %g", length, breadth, ans);
	getch();
}
/*
Output:


Enter length :3

Enter breadth :5

If the length of Triangle 3 and breadth is 5
 then area of Triangle is : 7.5
*/