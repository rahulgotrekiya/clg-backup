/*
	Addition of odd no
	Date: 26/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
int square(int i){
	return i*i;
}
int sumOfOdd(int n) {
	int i=square(i), sum = 0;
	for(i=1; i<=n; i++ ){
		if(i!=n)
			printf("%d + ", i);
		else
			printf("%d = ", i);
		sum+=2*i-1;
	}

	return sum;
}
void main() {
	int no;
	clrscr();
	printf("\nEnter any Number : ");
	scanf("%d", &no);
	printf("%d", sumOfOdd(no));
	getch();
}
/*
Enter any Number : 3
1 + 2 + 3 = 9
*/