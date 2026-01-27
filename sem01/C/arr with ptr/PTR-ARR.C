/*
	Print the array element using pointer
	Date: 21/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
void printArray(int a[10]);
int sumArray(int arr[10]);
void main() {
	int a[5] = {1, 2, 3, 4, 5};
	clrscr();
	printArray(a);
	printf("Addition of Array is : %d", sumArray(a));
	getch();
}
void printArray(int a[10]) {
	int *p, i;
	p = a;	// First element address is stored int p
	for (i = 0; i < 5; i++){
		printf("%d\n", *(p + i));
	}
}
int sumArray(int a[]) {
	int *p, i, sum=0;
	for(i = 0; i < 5; i++){
		sum = sum + *(p + i);
	}
	return sum;
}
