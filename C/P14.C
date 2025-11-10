/*
	Prog14: WAP to obtain an hourly pay rate and the number of hours worked
		by workers. Calculate their pay for week.
	Date: 18/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float weeklyPay(const float rate, const float workHours) {
	return (rate * workHours) * 7;
}
void main() {
	float rate, workHours;
	clrscr();
	printf("\nEnter Hourly pay rate : ");
	scanf("%f",&rate);
	printf("\nEnter no of Hours worked in week : ");
	scanf("%f",&workHours);
	printf("\nThe Pay for week is : %g", weeklyPay(rate, workHours));
	getch();
}
/*
Output:

Enter Hourly pay rate : 100

Enter no of Hours worked in week : 8

The Pay for week is : 5600
*/