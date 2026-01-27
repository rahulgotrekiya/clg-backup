/*
	Prog33: Indroductin to loop
	Date: 25/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
	int i = 1;	// Initialization
	clrscr();
	/*
	Loop:
	while (i <= 10) {
		printf("\n%d Hello word", i);
		i++;
		goto Loop;
	}
	*/
	while (i <= 10) {	// condition
		printf("\n%d Hello word", i);
		i++;	// inc/dec
		// goto Loop;
	}
	for (i=1; i<=10;i++) {
		printf("\n%d Hello word", i);
	}
	getch();
}