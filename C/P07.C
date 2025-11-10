/*
	Prog05: WAP to Convert the given tempreture form fahrenheit to Celsius.
	Date: 12/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float fahrenheitToCelsius(const float fahrenheit) {
	return (fahrenheit-32)/1.8;
}
void main() {
	float tempreture;
	clrscr();
	printf("\nEnter tempreture in fahrenheit:");
	scanf("%f",&tempreture);
	printf("\nTempreture is : %gC", fahrenheitToCelsius(tempreture));
	getch();
}
/*
Output:

Enter tempreture in fahrenheit:120

Tempreture is : 48.8889C
*/