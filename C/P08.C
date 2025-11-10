/*
	Prog08: WAP to convert tempreture form celsius to fahrenheit where
		tempreture in celsius is entered by user
	Date: 13/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float CelsiusToFahrenheit(const float celsius) {
	return (celsius*9/5)+32;
}
void main() {
	float tempreture;
	clrscr();
	printf("\nEnter tempreture in Celsius:");
	scanf("%f",&tempreture);
	printf("\nTempreture is : %gdegF", CelsiusToFahrenheit(tempreture));
	getch();
}
/*
Output:

Enter tempreture in Celsius:48.8889

Tempreture is : 120degF

*/