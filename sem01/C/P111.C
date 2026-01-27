/*
	Prog11: WAP to find out and print all prime numbers lying between
		1 and 200
	Date: 2/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int isPrime(int n) {
	int i;
	if (n <= 1)
		return 0;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void main() {
	int i;
	clrscr();
	printf("Prime numbers between 1 and 200 : \n");
	for (i = 1; i <= 200; i++) {
		if (isPrime(i))
		printf("%d ", i);
	}
	getch();
}
/*
Output:

Prime numbers between 1 and 200 :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 1
07 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199

*/