#include<stdio.h>
#include<conio.h>
int Maximum (const int number1, const int number2){
	return (number1 > number2) ? number1 : number2;
}
int Sequence(const int number1, const int number2, const int number3) {
	int x;
	x = Maximum(number1, Maximum(number2, number3));
	if (x == number1){
		if(number2 > number3) {
			printf("%d %d %d", number3, number2, number1);
		}
		else {
			printf("%d %d %d", number2, number3, number1);
		}
	}
	else if (x == number2) {
		if(number1 > number3) {
			printf("%d %d %d", number3, number1, number2);
		}
		else {
			printf("%d %d %d", number1, number3, number2);
		}
	}
	else {
		if(number1 > number2) {
			printf("%d %d %d", number2, number1, number3);
		}
		else {
			printf("%d %d %d", number1, number2, number3);
		}
	}
	return x;
}
void main() {
	int number1, number2, number3;
	clrscr();
	printf("Enter number1 : ");
	scanf("%d", &number1);
	printf("Enter number2 : ");
	scanf("%d", &number2);
	printf("Enter number3 : ");
	scanf("%d", &number3);
	Sequence(number1, number2, number3);
 	getch();
}