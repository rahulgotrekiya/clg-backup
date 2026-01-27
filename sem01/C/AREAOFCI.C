include<stdio.h>
#include<conio.h>
#define PI 3.14
float AreaOfCircle(const float radius) {
	float area;
	area=PI*radius*radius;
	return area;
}
void main() {
	float area,radius;
	clrscr();
	printf("\nEnter radius:");
	scanf("%f",&radius);
	area=AreaOfCircle(radius);
	printf("\nArea of Circle = %g", area);
	getch();
}