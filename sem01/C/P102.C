/*
	Prog02: WAP to display a sum of first N even numbers.
	Date: 30/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int sumOfEven(int n) {
	int i, sum = 0;
	for(i=1; i<=n; i++ ){
		if(i!=n)
			printf("%d + ", i*2);
		else
			printf("%d = ", i*2);
		sum+=2*i;
	}

	return sum;
}
void main() {
	int no;
	clrscr();
	printf("\nEnter any Number : ");
	scanf("%d", &no);
	printf("%d", sumOfEven(no));
	getch();
}
/*

Enter any Number : 4
2 + 4 + 6 + 8 = 20

*/