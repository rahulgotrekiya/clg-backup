/*
	Factorial
	Date: 28/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int factorial(int n) {
	int i, fact = 1;
	for(i=1; i<=n; i++ ){
		if(i!=n)
			printf("%d * ", i);
		else
			printf("%d = ", i);
		fact*=i;
	}

	return fact;
}
void main() {
	int no;
	clrscr();
	printf("\nEnter any Number : ");
	scanf("%d", &no);
	printf("%d", factorial(no));
	getch();
}
/*

Enter any Number : 4
1 * 2 * 3 * 4 = 24
*/