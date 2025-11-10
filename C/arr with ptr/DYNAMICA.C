#include<stdio.h>
#include<conio.h>
int small(int a[], int n);
int max(int a[], int n);
void main() {
	int *p, n, i;
	clrscr();
	printf("Enter size of array : ");
	scanf("%d", &n);
	p = (int *)malloc(n * sizeof(int));
	for(i = 0; i < n; i++){
			scanf("%d", &p[i]);
	}
	for(i = 0; i < n; i++) {
		printf("%d", p[i]);
	}
	printf("\nMinimum : %d", small(p, n));
	printf("\nMaximum : %d", max(p, n));
	free(p);
	getch();
}
int small(int a[], int n){
	int i, min = a[0];
	for (i = 0; i < n; i++) {
		if (min > a[i])
		min = a[i];
	}
	return min;
}
int max(int a[], int n){
	int i, max = a[0];
	for (i = 0; i < n; i++) {
		if (max < a[i])
		max = a[i];
	}
	return max;
}