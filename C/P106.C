/*
	Prog06: WAP to acept number from the user till their sum exceeds 50.
	Date: 30/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int sum(int limit) {
	int n, sum=0;
	while(sum <= limit) {
		printf("\nEnter Number: ");
		scanf("%d", &n);
		sum += n;
		printf("\nCurrent sum : %d", sum);
	}
	printf("\n\nSum limit Exceeded : %d \nYour Final Sum: %d", limit, sum);

}
void main() {
	int limit=50;
	clrscr();
	sum(limit);
	getch();
}
/*

Enter any Number : 4
2 + 4 + 6 + 8 = 20

*/