#include<stdio.h>
#include<conio.h>
struct Customer {
	int id;
	char name[20];
	float units;
}c[3];
float calcBill(float units);
void main() {
	int i;
	float amount[3];
	clrscr();
	for (i = 0; i < 3; i++) {
		printf("\nEnter ID of customer : ");
		scanf("%d", &c[i].id);
		scanf("%*c");

		printf("Enter Name of customer: ");
		gets(c[i].name);
		printf("Enter cunsumed units : ");
		scanf("%f", &c[i].units);

	if(c[i].units <= 50) {
		bill_amount[i] = c[i].units * 2.30;
	} else if(c[i].units >= 100) {
		bill_amount[i] = (50 * 2.30) + ((c[i].units - 50) * 2.60);
	} else if(c[i].units >= 250) {
		bill_amount[i] = (50 * 2.30) + (50 * 2.60) + ((c[i].units - 100) * 3.25);
		} else {
		bill_amount[i] = (50 * 2.30) + (50 * 2.60) + (150 * 3.25) +((c[i].units - 250) * 4.35);
		}
	}
	getch();
}
float calcBill(float units) {
	float bill_amount;

	if(units <= 50) {
		bill_amount = units * 2.30;
	} else if(units >= 100) {
		bill_amount = (50 * 2.30) + ((units - 50) * 2.60);
	} else if(units >= 250) {
		bill_amount = (50 * 2.30) + (50 * 2.60) + ((units - 100) * 3.25);
	} else {
		bill_amount = (50 * 2.30) + (50 * 2.60) + (150 * 3.25) +((units - 250) * 4.35);
	}

	return bill_amount;

}