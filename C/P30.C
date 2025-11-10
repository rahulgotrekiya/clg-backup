/*
	Prog30: WAP to calculate gross salary from user and display it in string.
		1. Gross salary = Basic Pay + DA + HRA - PF.
		2. DA = 30% If basic pay < 5000 otherwise DA = 45% of basic pay
		3. HRA= 15% of basic pay
		4. PF = 12% of basic pay
	Date: 25/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void main() {
	float BasicPay, da, hra, pf, GrossSalary;
	clrscr();
	printf("Enter Basic Pay : ");
	scanf("%f", &BasicPay);
	if(BasicPay < 5000) {
		da = 0.30 * BasicPay;
	} else {
		da = 0.45 * BasicPay;
	}
	hra = 0.15 * BasicPay;
	pf = 0.12 * BasicPay;
	GrossSalary = BasicPay + da + hra - pf;

	printf("\nSalary details...\n");
	printf("\nBasicPay = %g", BasicPay);
	printf("\nDA = %g", da);
	printf("\nHRA = %g", hra);
	printf("\nPF = %g", pf);
	printf("\nGross Salary = %g", GrossSalary);
	getch();
}
/*
Output:

Enter Basic Pay : 6000

Salary details...

BasicPay = 6000
DA = 2700
HRA = 900
PF = 720
Gross Salary = 8880
*/