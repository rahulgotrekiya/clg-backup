#include<stdio.h>
#include<conio.h>

int arr[10][10];

void sumCol(int row, int col){                  /*
	int i, j, sum = 0;
	for(i = 0; i < col; i++){	// Col
		for(j=0; j < row; j++) {
			printf("%d ", arr[i][i]);
			sum += arr[i][i];
		}
		printf("= %d", sum);
		printf("\n");
		sum = 0;
	}
					      */
	int i, j, sum=0;
	for(i = 0; i < row; i++){	// Row
		for(j=0; j < col; j++) {
			printf("%d ", arr[j][i]);
			sum += arr[j][i];
		}
		printf("= %d", sum);
		printf("\n");
		sum = 0;
	}
}
void sumRow(int row, int col){
	int i, j, sum=0;
	for(i = 0; i < row; i++){	// Row
		for(j=0; j < col; j++) {
			printf("%d ", arr[i][j]);
			sum += arr[i][j];
		}
		printf("= %d", sum);
		printf("\n");
		sum = 0;
	}
}
void printArr(int row, int col) {
	int i, j ;
	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void readArr(int row, int col) {
	int i, j ;
	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			printf("Array[%d] [%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

void main(){
	int row, col;
	clrscr();
	printf("Enter Row:");
	scanf("%d", &row);

	printf("Enter Col:");
	scanf("%d", &col);

	readArr(row, col);
	printArr(row, col);

	printf("\nSum of Row:\n");
	sumRow(row, col);

	printf("\nSum of Col:\n");
	sumCol(row, col);
	getch();
}