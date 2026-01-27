#include<stdio.h>
#include<conio.h>
int sumAarray(int a[100], int n);
void main() {
	int *a, i, n = 5;
	clrscr();
	//a = (int *)malloc(n * sizeof(int));
	a = (int *)calloc(n, sizeof(int));
	printf("Enter Elements : ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
	printf("\nSum of array is : %d", sumArray(a));
	free(a);
	getch();
}
int sumArray(int a[], int n) {
	int i, sum=0;
	for(i = 0; i < n; i++){
		sum += a[i];
	}
	return sum;
}
