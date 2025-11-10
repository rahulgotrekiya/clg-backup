/*
	Prog24: WAP to find out given number is positive, nagative or zero.
	Date: 23/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float Number(int number) {
	if (number < 0) {
		printf("\nGiven number is Nagitive");
	}
	else if (number > 0){
		printf("\nGiven number is Positive.");
	}
	else{
		printf("\nGiven number is 0.");
	}
}
void main() {
	int number;
	clrscr();
	printf("\nEnter an Integer number: ");
	scanf("%d",&number);
	Number(number);
	getch();
}
/*
Output:

Enter an Integer number: 33

Given number is Positive.
*/