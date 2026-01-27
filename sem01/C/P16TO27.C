#include<stdio.h>
#include<conio.h>
/*
	Menu driven program
*/
int IsArmstrong(int n){
	int  sum = 0, temp = n;
	while (n > 0) {
		int r = n % 10;
		sum += r * r * r;
		n /= 10;
	}
	return sum == temp;
}
int factorial(int n){
	int  factorial = 1, i;
	for (i = 1; i <= n; i++) {
		factorial *= i;
	}
	return factorial;
}
int IsKrishnamurty(int n){
	int sum = 0, temp = n;
	while (n > 0) {
		sum +=  factorial(n % 10);
		n /= 10;
	}
	return sum == temp;
}
void FahrenheigtToCelsius(){
	int f;
	printf("\nFahrenheigt\t|\t Celsius\n\t");
	for (f = 0; f <= 160; f += 20) {
		float c = (f -32) * 5.0 / 9.0;
		printf("\n%d\t\t|\t%g", f, c);
	}
}
void IsDivisibleBy7(){
	int i, sum = 0;
	for (i = 101; i <= 200; i++) {
		if(i%7 == 0){
			printf("%d + ", i);
			sum += i;
		}
	}
	printf("\nSum = %d", sum);
}
int gcd(int a, int b){
	int i, g = 1;
	for(i = 1; i <= a && i <= b; i ++)
		if(a % i == 0 && b % i == 0)
			g = i;
		return g;
}
int lcm(int a, int b){
	int max = a > b ? a : b;
	while(1) {
		if(max % a == 0 && max % b == 0)
		return max;
		max++;
	}
}
int IsPerfect(int n){
	int i, sum = 0;
	for(i = 1; i < n; i ++)
		if(n % i == 0)
			sum += i;
		return sum == n;
}
int IsPrime(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= n/2; i++)
		if(n % i == 0) return 0;
	return 1;
}
int Count(int n) {
	int c = 0;
	while (n > 0) {
		c++;
		n /= 10;
	}
	return c;
}
int Rotate(int n, int len){
	int reminder = n % 10, mult = 1, i;
	n = n/10;

	for(i = 1; i <= len; i++){
		mult *= 10;
	}
	return reminder * mult + n;

}
int IsCircularPrime(int n){
	int len = Count(n), rotate = n;
	do {
	  if(IsPrime(rotate)) return 0;
	  rotate = Rotate(rotate, len);
	} while (rotate != n);

	return 1;
}
void Menu() {
	printf("\n16. Armstrong");
	printf("\n17. Krishnamurty");
	printf("\n18. Fahrenheigt To Celsius");
	printf("\n19. Divisible By 7");
	printf("\n20. GCD");
	printf("\n21. LCM");
	printf("\n22. Perfect");
	printf("\n23. Circular Prime");
	printf("\n0..Exit");
	printf("\n \n Enter your choice : ");
}
void main(){
	int ch, a, b;
	clrscr();
	Menu();
	scanf("%d", &ch);
	switch(ch) {
		case 16:	 // Armstrong
			clrscr();
			printf("Enter a number : ");
			scanf("%d", &a);
			if (IsArmstrong(a))
				printf("\nThe number is Armstrong !");
			else
				printf("\nThe number is NOT Armstrong !");
			getch();
		break;
		case 17:	// Krishnamurty
			clrscr();
			printf("Enter a number : ");
			scanf("%d", &a);
			if (IsKrishnamurty(a))
				printf("\nThe number is Krishnamurty !");
			else
				printf("\nThe number is NOT Krishnamurty !");
			getch();
		break;
		case 18:	// FahrenheigtToCelsius
			clrscr();
			FahrenheigtToCelsius();
			getch();
		break;
		case 19:
			clrscr();
			IsDivisibleBy7();
			getch();
		case 20:
			clrscr();
			printf("\nEnter two numbers : ");
			scanf("%d %d", &a, &b);
			printf("\nGCD = %d", gcd(a, b));
			getch();
		case 21:
			clrscr();
			printf("\nEnter two numbers : ");
			scanf("%d %d", &a, &b);
			printf("\nLCS = %d", lcm(a, b));
			getch();
		case 22:
			clrscr();
			printf("\nEnter number : ");
			scanf("%d", &a);
			if (IsPerfect(a))
				printf("\nThe number is Perfect! ");
			else
				printf("\nThe number is NOT Perfect !");
			getch();
		case 23:
			clrscr();
			printf("\nEnter number : ");
			scanf("%d", &a);
			if (IsCircularPrime(a))
				printf("\nThe number is Circular Prime! ");
			else
				printf("\nThe number is Not Circular Prime!");
			getch();
		case 0:	// Exit
			clrscr();
			gotoxy(35,12);
			printf("Thank You !!!");
		break;
		default:
			printf("\nWrong choice !!!");
		break;
	}
	getch();
}