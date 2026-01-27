/*
	Prog11: WAP to calculate simple interst
	Date: 13/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float SimpleInterest(const float principal, const float rate, const float NoOfYears) {
	return (principal*rate*NoOfYears)/100;
}
void main() {
	float principal, rate, NoOfYears;
	clrscr();
	printf("\nEnter Principal : ");
	scanf("%f",&principal);
	printf("\nEnter Rate : ");
	scanf("%f",&rate);
	printf("\nEnter Number of Years : ");
	scanf("%f",&NoOfYears);
	printf("\nThe Simple interest is : %g", SimpleInterest(principal, rate, NoOfYears));
	getch();
}
/*
Output:


Enter Principal : 2000

Enter Rate : 5

Enter Number of Years : 3

The Simple interest is : 300
*/