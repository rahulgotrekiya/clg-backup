/*
		WAP to perform operation of 1 D Array
		Author: Rahul Gotrekiya
		Date: 08/07/2025
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 50
void main() {
	//	int x = 10;	// initilization
	// 	x = 5; 		// assignment
	int i;
	int a[] = { 1, 2, 3, 4, 5}; 	// initilization of array
	int b[5] = {1, 2, 3, 4, 5};
	clrscr();
	if(a[0] == b[0])
	printf("1");
	else
	printf("0");
	//	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	for(i= 0; i<10; i++){
	       //	printf("%4d", a[i]);
	}
	getch();
}