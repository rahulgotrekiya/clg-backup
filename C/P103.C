/*
	Prog03: WAP to display a sum from 1 to given number
		1) Using formula n*(n+)/2.
		2) Without using formula.
	Date: 30/06/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>

int calculateSum(const int n){
	return n*(n+1)/2;
}
int sumOfGiven(int n) {
	int i, sum = 0;
	for(i=1; i<=n; i++ ){
		if(i!=n)
			printf("%d + ", i);
		else
			printf("%d = ", i);
		sum+=i;
	}
	return sum;
}
void main() {
	int no;
	clrscr();
	printf("\nEnter any Number : ");
	scanf("%d", &no);
	printf("\n\nWithout using Formula !!!\n%d", sumOfGiven(no));
	printf("\nUsing Formula !!!\n%d", calculateSum(no));
	getch();
}
/*
Output:


Enter any Number : 5
1 + 2 + 3 + 4 + 5 =

Without using Formula !!!
15
Using Formula !!!
15

*/