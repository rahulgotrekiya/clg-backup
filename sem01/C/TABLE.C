/*
	Prog04:
	Date: 25/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void printTable(const int no, const int start,const int end){
	int i;
	for (i=start; i<=end; i++){
		printf("\n%d * %d = %d", no, i, no*i);
	}
}
int sum(int n) {
	int i, sum = 0;
	for(i=1; i<=n; i++){
		if(i!=n)
			printf("%d + ", i);
		else
			printf("%d = ", i);
			sum+=i;
	}
	return sum;
}
void main() {
	int no, start,end;
	clrscr();
	printf("\nEnter any Number : ");
	scanf("%d", &no);
	/*
	printf("\nEnter Start : ");
	scanf("%d", &start);
	printf("\nEnter End : ");
	scanf("%d", &end);
	printTable(no, start, end);
	*/

	printf("%d", sum(no));
	getch();
}