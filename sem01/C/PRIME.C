/*
	WAP to check whether the given number is prime or not
	Date: 28/06/2025
	Author: Rahul Gotrekiya

	Circular prime numbers
	13 31
	1193 1931 9311 3119
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int isPrime(const int n) {
	int sq = sqrt(n),i;
	if(n == 0 || n == 1)
		return -1;
	if(n == 2)
		return 1;
	if(n%2 == 2)
		return 0;
	for(i = 3; i <=sq; i++) {
		if(n%i == 0)
			return 0;
	}
	return 1;
}
void main() {
	int n;
	clrscr();

	printf("\nEnter any Number : ");
	scanf("%d", &n);

	if(isPrime(n)==1)  {
		printf("\n %d is Prime Number", n);
	}
	else {
		printf("\n %d is not Prime Number", n);
	}
/*
	for(n = 1; n<=100; n++) {
		if(isPrime(n)==1)
		printf("%5d",n);
	}
	*/
	getch();


}
/*

Enter any Number : 4
1 * 2 * 3 * 4 = 24
*/