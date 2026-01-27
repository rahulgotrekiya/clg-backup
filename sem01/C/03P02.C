/*
	WAP to find out and print all circular prime numbers between
		1 and 5000
	Date: 10/07/2025
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
int Rotate(int n, int len){
	int rem = n % 10;
	n /= 10;
	return rem*len+n;
}
int CirPrime(int n) {
	int len = 1, temp = n;
	int rot = n;
	if(!isPrime(n)) {
		return 0;
	}
	while (temp >=10) {
		temp /= 10;
		len *= 10;
	}
	do {
		rot = Rotate(rot, len);
		if(!isPrime(rot)) {
			return 0;
		}
	}while(rot != n);
	return 1;
}
void main() {
	int i;
	clrscr();
	printf("Circular Prime numbers between 1 and 5000 : \n");
	for (i = 1; i <= 5000; i++) {
		if (CirPrime(i))
		printf("%d\t ", i);
	}
	getch();
}