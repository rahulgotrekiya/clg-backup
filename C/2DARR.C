/*
	WAP to perform operation on two dimentional array
	Date: 11/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#define ROW 10
#define COL 10
void isMagicMatrix(int arr[ROW][COL], const int row, const int col) {
	int i, j, sumDiag1 = 0, sumDiag2 = 2;
	int sumRow, sumCol, flag = 1;

	if(row != col){
		printf("\nNot a Sqare matrix !, Please Enter same row and col !!!");
		return;
	}
	for (i = 0; i < row; i++) {
		sumDiag1 += arr[i][i];
	}
	for (i = 0; i < row; i++) {
		sumDiag2 += arr[i][row - i - 1];
	}
	if(sumDiag1 != sumDiag2) {
		flag = 0;
	}
	for (i = 0; i < row; i++) {
		sumRow = 0;
		sumCol = 0;
		for(j = 0; j < col; j++) {
			sumRow += arr[i][j];
			sumCol += arr[j][i];
		}
		if(sumRow != sumDiag1 || sumCol != sumDiag1) {
			flag = 0;
			break;
		}
	}
	if(flag) {
		printf("\nThe matrix is a MagicMatrix");
	} else {
		printf("\nThe matrix is NOT a MagicMatrix");
	}
	/*
	int i;
	int r1 = 0, r2 = 0, r3 = 0;
	int c1 = 0, c2 = 0, c3 = 0;
	int d1 = 0, d2 = 0;

	for(i = 0; i < row; i++) {
		r1 += a[0][i];
		r2 += a[1][i];
		r3 += a[2][i];
		c1 += a[i][0];
		c2 += a[i][1];
		c3 += a[i][2];
	}
	// Diagonal Sum
	for(i = 0; i < row; i++) {
		d1 += a[i][i];
		d2 += a[i][2 - i];
	}

	printf("\n");
	printf("\nSum of first diagonal = %d", d1);
	printf("\nSum of second diagonal = %d", d2);
	printf("\nSum of first row = %d", r1);
	printf("\nSum of second row = %d", r2);
	printf("\nSum of third row = %d", r3);
	printf("\nSum of first column = %d", c1);
	printf("\nSum of second column = %d", c2);
	printf("\nSum of third column = %d", c3);
	printf("\n");

	if(r1 == r2 && r2 == r3 && r3 == c1 && c1 == c2 && c2 == c3 && c3 == d1 && d1 == d2) {
		printf("\nIt is a Magic Matrix !!!");
	} else {
		printf("\nIt is Not a Magic Matrix :(");
	}
	*/
}
void Transpose(int arr[][COL], const int row, const int col) {
	int i, j ;
	printf("\n");
	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			printf("%4d", arr[j][i]);
		}
		printf("\n");
	}
}
void Multiplication(int a[][COL], int b[][COL], int c[][COL], const int row, const int col) {

	/*
		1 2	5 6	= 	1*5+2*7		1*6+2*8         19  22
		3 4	7 8  	= 	3*5+4*7		3*6+4*8		43  50
	*/

	int i, j, k;

	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			for(k=0; k < col; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
}
void Subtraction(int a[][COL], int b[][COL], int c[][COL], const int row, const int col) {

	int i, j;

	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			c[i][j] = a[i][j]-b[i][j];
		}
	}
}
void Addition(int a[][COL], int b[][COL], int c[][COL], const int row, const int col) {

	int i, j;

	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}
int Minimum(int arr[][COL], const int row, const int col)  {

	int i, j, min=arr[0][0];
	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			if(min >= arr[i][j])
			min = arr[i][j];
		}
	}
	return min;
}
int Maximum(int arr[][COL], const int row, const int col)  {

	int i, j, max=arr[0][0];
	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			if(max <= arr[i][j])
			max = arr[i][j];
		}
	}
	return max;
}

void PrintArray(int arr[][COL], const int row, const int col) {
	int i, j ;
	printf("\n");
	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}
void ReadArray(int arr[][COL], const int row, const int col) {
	int i, j ;
	for(i = 0; i < row; i++){
		for(j=0; j < col; j++) {
//			printf("\nArray[%d] = ", i);
			scanf("%d", &arr[i][j]);
		}
	}
}
void Menu() {
	printf("\n1. Read Array");
	printf("\n2. Pritf Array");
	printf("\n3. Maximum");
	printf("\n4. Minimum");
	printf("\n5. Addition of Two Matrieces");
	printf("\n6. Subtraction of Two Matrieces");
	printf("\n7. Multiplication of Two Matrieces");
	printf("\n8. Transpose");
	printf("\n9. Magic Matrix");
	printf("\n10. Exit");
	printf("\n\nEnter your choice : ");

}
void main() {
/*
	// Initilization
	int i, j;
	int a[][2] =  {
		{1, 2},
		{3, 4},
		{5, 6}
	};
	clrscr();
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	getch();
*/
	int ch, A[ROW][COL], B[ROW][COL], C[ROW][COL] = {0, 0}, row, col;
	do {
		clrscr();
		Menu();
		scanf("%d", &ch);
		switch(ch){
			case 1: 	//Read Array
				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of Matrix: ", row*col);
				ReadArray(A, row, col);
			 /*
				printf("\nElement of array : ");
				PrintArray(arr, size);
				printf("\nSum of all elements of arry : %d ", Sum(arr,size));
				getch();                    */
			break;
			case 2:         // Print array
				printf("\nElement of Matrix: ", row*col);
				PrintArray(A, row, col);
			break;
			case 3:		// Maximum
				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of Matrix: ", row*col);
				ReadArray(A, row, col);
				printf("\nThe maximum value is : %d", Maximum(A, row, col));
			break;
			case 4:         // Minimum
				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of Matrix: ", row*col);
				ReadArray(A, row, col);
				printf("\nThe Minimum value is : %d", Minimum(A, row, col));


			break;
			case 5:         // Additon
				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of first  Matrix: ", row*col);
				ReadArray(A, row, col);
				printf("\nEnter %d element of second Matrix: ", row*col);
				ReadArray(B, row, col);

				Addition(A, B, C, row, col);

				printf("\nElement of first Matrix are: ");
				PrintArray(A, row, col);
				printf("\nElement of second Matrix are: ");
				PrintArray(B, row, col);
				printf("\nElement of Resultant Matrix are: ");
				PrintArray(C, row, col);
			break;
			case 6:		// Subtraction

				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of first  Matrix: ", row*col);
				ReadArray(A, row, col);
				printf("\nEnter %d element of second Matrix: ", row*col);
				ReadArray(B, row, col);

				Subtraction(A, B, C, row, col);

				printf("\nElement of first Matrix are: ");
				PrintArray(A, row, col);
				printf("\nElement of second Matrix are: ");
				PrintArray(B, row, col);
				printf("\nElement of Resultant Matrix are: ");
				PrintArray(C, row, col);
			break;
			case 7:		// Multiplication
				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of first  Matrix: ", row*col);
				ReadArray(A, row, col);
				printf("\nEnter %d element of second Matrix: ", row*col);
				ReadArray(B, row, col);

				Multiplication(A, B, C, row, col);

				printf("\nElement of first Matrix are: ");
				PrintArray(A, row, col);
				printf("\nElement of second Matrix are: ");
				PrintArray(B, row, col);
				printf("\nElement of Resultant Matrix are: ");
				PrintArray(C, row, col);
			break;
			case 8: 	// Transpose
				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of Matrix: ", row*col);
				ReadArray(A, row, col);

				printf("\nElement of Matrix: ");
				PrintArray(A, row, col);

				printf("\nTranspose: ");
				Transpose(A, row, col);
			break;
			case 9:         // Magic Matrix

				/*
					2   7   6	15
					9   5   1	15
					4   3   8      	15

					15  15  15
				*/

				do {
					clrscr();
					printf("\nEnter Row : ");
					scanf("%d", &row);
					if(row < 1 || row > 10) {
						printf("\nPlease Enter proper value of Row (between 1 and 10) !");
						getch();
					}
				} while(row < 1 || row > 10);
				do {
					printf("\nEnter Col : ");
					scanf("%d", &col);
					if(col < 1 || col > 10) {
						printf("\nPlease Enter proper value of Column (between 1 and 10) !");
						getch();
					}
				} while(col < 1 || col > 10);
				printf("\nEnter %d element of Matrix: ", row*col);
				ReadArray(A, row, col);

				printf("\nElement of Matrix: ");
				PrintArray(A, row, col);

				isMagicMatrix(A, row, col);
			break;
			case 10:	// Exit
				clrscr();
				gotoxy(35, 12);
				printf("Thank You!!!");
				getch();
			break;
			default:
				printf("\n\n Wrong Choice !");
		}
		getch();
	} while(ch != 10);

}