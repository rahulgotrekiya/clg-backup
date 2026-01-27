/*
	Prog33: A manufacturing company classified its executive int 4 levels
		for the benifit of certain perks. The levels and corresponding
		persks are shown below:
		---------------------------------------------------------
		|     Levels 	|		  Perks			|
		---------------------------------------------------------
		|		|      Conveyance	| Entertaintment|	|
		|		|	Allowance	|   Allowance   |
		---------------------------------------------------------
		| 	1	|	  1000		|      500	|
		---------------------------------------------------------
		|       2	|	   750		|      200	|
		---------------------------------------------------------
		| 	3	|          500		|      100	|
		---------------------------------------------------------
		| 	4	|	   250		|	 0	|
		---------------------------------------------------------
		Income tax is deducted from the salary on a percentage basis
		as followed
		---------------------------------------------------------
		|     Consumption Unit      |	    Tax Rate		|
		---------------------------------------------------------
		|     Gross <= 200	    |	    No Deduction	|
		---------------------------------------------------------
		|     2000 to 4000	    |	    3%			|
		---------------------------------------------------------
		|     4000 to 5000	    |	    5%			|
		---------------------------------------------------------
		|     Gross to 5000	    |	    8%			|
		---------------------------------------------------------
		WAP that will read an executive's job number, level number and basic
		pay and then compute the net salary after withholding (deducting)
		Incom tax.
		Gross Salary = basic + HRA + Perks (HRA = 10% of basic)
		Net Salary = Gross Salary - Income Tax
	Date: 25/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
float getConveyanceAllowance(int level) {
	if (level == 1)
		return 1000;
	else if (level == 2)
		return 750;
	else if (level == 3)
		return 500;
	else if (level == 4)
		return 250;
	else
		return 0;
}
float getEntertainmentAllowance(int level) {
	if (level == 1)
		return 500;
	else if (level == 2)
		return 200;
	else if (level == 3)
		return 100;
	else if (level == 4)
		return 0;
	else
		return 0;
}
float calculateHRA(float basic) {
	return basic * 0.10;
}
float calculatePerks(int level) {
	float conveyance = getConveyanceAllowance(level);
	float entertainment = getEntertainmentAllowance(level);
	return conveyance + entertainment;
}
float calculateGrossSalary(float basic, int level) {
	float hra = calculateHRA(basic);
	float perks = calculatePerks(level);
	return basic + hra + perks;
}
float calculateIncomeTax(float gross){
	if (gross <= 2000)
		return 0;
	else if (gross > 2000 && gross <= 4000)
		return gross * 0.03;
	else if (gross > 4000 && gross <= 5000)
		return gross * 0.05;
	else
		return gross * 0.08;
}
float calculateNetSalary(float gross, float tax) {
	return gross - tax;
}
void main() {
	int jobNumber, level;
	float basicPay, hra, perks, grossSalary, incomeTax, netSalary;
	clrscr();
	printf("Enter Job Number : ");
	scanf("%d", &jobNumber);
	printf("Enter Level (1 to 4) : ");
	scanf("%d", &level);
	printf("Enter Basic Pay : ");
	scanf("%f", &basicPay);
	if(level < 1 || level > 4) {
		printf("Invalid Level...");
		getch();
		return;
	}
	hra = calculateHRA(basicPay);
	perks = calculatePerks(level);
	grossSalary = calculateGrossSalary(basicPay, level);
	incomeTax = calculateIncomeTax(grossSalary);
	netSalary = calculateNetSalary(grossSalary, incomeTax);

	printf("\nSalary details...\n");
	printf("\nJob Number = %d", jobNumber);
	printf("\nLevel = %d", level);
	printf("\nBasic Pay = %g", basicPay);
	printf("\nHRA = %g", hra);
	printf("\nConveyance Allowance = %g", getConveyanceAllowance(level));
	printf("\nEntertanment Allowance = %g", getEntertainmentAllowance(level));
	printf("\nTotal Perks = %g", perks);
	printf("\nGross Salary = %g", grossSalary);
	printf("\nIncome Tax = %g", incomeTax);
	printf("\nNet Salary = %g", netSalary);
	getch();
}
/*
Output:

Enter Job Number : 101
Enter Level (1 to 4) : 1
Enter Basic Pay : 3000

Salary details...

Job Number = 101
Level = 1
Basic Pay = 3000
HRA = 300
Conveyance Allowance = 1000
Entertanment Allowance = 500
Total Perks = 1500
Gross Salary = 4800
Income Tax = 240
Net Salary = 4560
*/