/*
	Prog34: An Electronic power Distribution company changes its consumers
		---------------------------------------------------------
		|     Consumption Unit      |	  Rate of charges (Rs)	|
		---------------------------------------------------------
		|     For first 50 Units    |	    2.30		|
		---------------------------------------------------------
		|     Next 50 Unit	    |	    2.60		|
		---------------------------------------------------------
		|     Next 150 Unit	    |	    3.25		|
		---------------------------------------------------------
		|     More than 300 Units   |	    4.35		|
		---------------------------------------------------------
		WAP a program to take no of units consumed from user and
		calculate the bill amount.
	Date: 28/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float calculateBill(const int units) {
	float bills = 0;

	if (units <= 50)
		bills = units * 2.30;
	else if(units <= 100)
		bills = (50 * 2.30) + ((units - 50) * 2.60);
	else if(units <= 250)
		bills = (50 * 2.30) + (50 * 2.60) + ((units - 100) * 3.25);
	else
		bills = (50 * 2.30) + (50 * 2.60) + (150 * 3.25) + ((units - 250) * 4.35);

	return bills;
}
void main() {
	int units;
	float amount;

	clrscr();

	printf("Enter number of units : ");
	scanf("%d", &units);

	amount = calculateBill(units);

	printf("\nElectric Bill...\n");
	printf("\nTotal bill amount = Rs %g", amount);
	getch();
}
/*
Output:

Enter number of units : 320

Electric Bill...

Total bill amount = Rs 1037
*/