/*
	Prog04: WAP to print multiplication table of given number enterd by
		user
	Date: 30/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void printTable(const int no){
	int i;
	for (i=1; i<=10; i++){
		printf("\n%d * %d = %d", no, i, no*i);
	}
}
void main() {
	int no, start,end;
	clrscr();
	printf("\nEnter any Number : ");
	scanf("%d", &no);
	printTable(no);
	getch();
}
/*
Output:

Enter any Number : 5

5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

*/