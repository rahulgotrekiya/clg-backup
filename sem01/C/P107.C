/*
	Prog07: Prit first 50 odd numbers.NOTE that program should display only
		five number per line
	Date: 26/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void printOdd() {
	int i, n = 1;
	for(i=1; i<=50; i++ ){
		printf("%d ", n);

		if(i%5 == 0)
			printf("\n");
		n+=2;
	}
}
void main() {
	clrscr();
	printOdd();
	getch();
}
/*
1 3 5 7 9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49
51 53 55 57 59
61 63 65 67 69
71 73 75 77 79
81 83 85 87 89
91 93 95 97 99
*/