#include<stdio.h>
#include<conio.h>
/*
	print designs
*/
void pattern61() {
	int i, j;
	for(i = 1; i <= 4; i++) {
		for (j = 1; j <= 4; j++) {
			printf("%d\t", j);
		}
		printf("\n");
	}
}
void pattern62() {
	int i, j, k=1;
	for(i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("%d\t", k++);
		}
		printf("\n");
	}
}
void pattern63() {
	int i, j, k;
	for(i = 1; i <= 5; i++) {
		for (k = i; k <= 5;k++) {
			printf("  ");
		}

		for (j = 1; j <= i; j++) {
			printf(" *");
		}
		printf("\n");
	}
}
void pattern64() {
	int i, j;
	for(i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf(" *");
		}
		printf("\n");
	}
}
void pattern65() {
	int i, j, k;
	for(i = 1; i <= 5; i++) {
		for (k = i; k <= 5;k++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf(" *");
		}
		printf("\n");
	}
}
void pattern66() {
	int i, j, k;
	for(i = 1; i <= 4; i++) {
		for (k = i; k <= 4;k++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf(" %d", j);
		}
		printf("\n");
	}
}
void pattern67() {
	int i, j, k=1, l=1;
	for(i = 1; i <= 5; i++) {
		for (k = i; k <= 5;k++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf(" %d", l);
		}
		l++ ;
		printf("\n");
	}
}

void pattern68() {
	int i, j, k;
	for(i = 5; i >= 1; i--) {
		for (k = 1; k <= 5-i;k++) {
			printf(" ");
		}

		for(j = 1; j <= i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
}
void pattern69() {
	int i, j, k;
	for(i = 1; i <= 5; i++) {
		for (k = 1; k < i;k++) {
			printf("  ");
		}
		for(j = i; j <= 5; j++) {
			printf("$ ");
		}
		printf("\n");
	}
}
void pattern70() {
	int i, j;
	for(i = 1; i <= 5; i++) {
		for(j = i; j <= 5; j++) {
			printf("$ ");
		}
		printf("\n");
	}
}
void pattern71() {
	int i, j, k=1;
	for(i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf(" %d", k++);
		}
		printf("\n");
	}
}
void pattern72() {
	int i, j;
	for(i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			printf(" %d\t", j);
		}
		printf("\n");
	}
}
void pattern73() {
	int i, j, k=1;
	for(i = 1; i <= 4; i++) {
		for(j = i; j <= 4; j++) {
			printf("%d\t", k++);
		}
		printf("\n");
	}

}
void pattern74() {
	int i, j;
	for(i = 1; i <= 5; i++) {
		for(j = 1; j <= 5-i; j++) {
			printf("%d\t ", j);
		}
		printf("\n");
	}
}
void pattern75(const int row, const int col) {
	int i, j, k, l;
	l = 6;
	for(i = 1; i <= row; i++) {
		for (k = 1; k < i;k++) {
			printf("  ");
		}
		for(j = i; j <= col; j++) {
			if(l == 2){
				printf("3 ");
			}
			printf("%d ", l--);
		}
		printf("\n");
	}
}
void pattern76(const int row, const int col) {
	int i, j, k;
	k = row * col;
	for(i = 1; i <= row; i++) {
		for(j = 1; j <= col; j++) {
			printf("%d ", k--);
		}
		printf("\n");
	}
}
void pattern77(const int row, const int col) {
	int i, j, k;
	k = row * col;
	for(i = 1; i <= row; i++) {
		for(j = 1; j <= col; j++) {
			printf("%d ", k--);
		}
		printf("\n");
	}
}
void pattern78(const int row, const int col) {
	int i, j, k;
	k = row * col;
	for(i = 1; i <= row; i++) {
		for(j = 1; j <= col; j++) {
			printf("%d ", k--);
		}
		printf("\n");
	}
}
void pattern79(int row) {
	int i, j;
	char ch;
	for(i = 1; i <= row; i++) {
		if(i%2) {
			for(j = 1; j <= i; j++)
			printf("%d ", j);
		} else {
			for(ch = 'A'; ch < 'A' + i; ch++)
			printf("%c ", ch);
		}
		printf("\n");
	}
}
void pattern80(int row) {
	int i, j;
	char ch;
	for(i = 1; i <= row; i++) {
		for(ch = 'A'; ch < 'A' + i; ch++) {

			printf("%c ", ch);
		}
		printf("\n");
	}
}
void pattern81(int row){
	int i, j;
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= row - i;j++) printf(" ");
		for (j = 1; j <= i; j++) printf(" *");
		printf("\n");
	}
	for(i = row-1; i >= 1; i--) {
		for (j = 1; j <= row - i;j++) printf(" ");
		for (j = 1; j <= i; j++) printf(" *");
		printf("\n");
	}
}
void pattern82(int row){
	int i, j;
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= row - i;j++) printf(" ");
		printf("*");
		for (j = 1; j < 2 * (i-1); j++) printf(" ");
		if(i > 1) printf("*");
		printf("\n");
	}
	for(i = row-1; i >= 1; i--) {
		for (j = 1; j <= row - i;j++) printf(" ");
		printf("*");
		for (j = 1; j < 2 * (i-1) ; j++) printf(" ");
		if(i > 1) printf("*");
		printf("\n");
	}
}
void pattern83(int row){
	int i, j;
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= row;j++) {
			if(i == 1 || i == row || j == 1 || j == row)
				printf("* ");
			else
				printf("  ");
		}

	printf("\n");

	}
}
void pattern84(int row){
	int i, j;
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		for (j = 1; j <= 2 * (row - i); j++) {
			printf("  ");
		}
		for(j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
int factorial(int n){
	int i, fact = 1;
	for(i = 1; i <= n; i++){
		fact *= i;
	}
	return fact;
}
int pascalPattern(int n, int r){
	return factorial(n) / (factorial(r) * factorial(n - r));
}
void pattern85(int row){
		int i, j;
	for(i = 0; i < row; i++) {
		for (j = 0; j <= row - i - 1; j++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("%d ", pascalPattern(i , j));
		}
	printf("\n");
	}
}
void pattern86(int row){

	int i, j;

	char ch;
	for(i = row; i >= 1; i--) {
		for (j = 1; j <= row - i;j++) printf(" ");
		for(ch = 'a'; ch < 'a' + i; ch++) printf("%c ", ch);
		printf("\n");
	}

}
void pattern87(int row) {
	int i, j;
	int ch = 1;
	for(i = 1; i <= row; i++) {
		if(i%2==0) {
			ch=0;
		} else{
			ch=1;
		}
		for (j = 1; j <= i; j++) {
			printf(" %d", ch);
			if(ch == 1)
				ch=0;
			else if (ch == 0)
				ch=1;
		}
		printf("\n");
	}
}
void pattern88(int row){

	int i, j, k=1;
	char ch;
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= i; j++) {
			printf(" %d ", k);
			k += 2;
		}
		k = 1;
		printf("\n");
	}
}
void pattern90(int row) {
	int i, j;
	char ch;
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= row; j++) {
			ch = ((i + j) % 2 == 0) ? 'A' : 'a';
			printf("%c\t", ch);
		}
		printf("\n");
	}
}
void pattern91(int row) {
	int i, j;
	char ch='a';
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= row; j++) {
			printf("%c\t", ch++);
		}
		printf("\n");
	}
}
void pattern92(int row){
	int i, j;
	for(i = 1; i <= row; i++) {
		for (j = i; j <= row; j++) {
			printf("  ");
		}
		for (j = i; j >= 1; j--) {
			printf("%d ", j);
		}
		for (j = 2; j <= i; j++) {
			printf("%d ", j);
		}
	printf("\n");
	}
}
void pattern93(int row){
	int i, j;
	for(i = row; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		for (j = 1; j <= 2 * (row - i); j++) {
			printf("  ");
		}
		for(j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

}
void pattern94(int row){
	int i, j;
	for(i = row; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		for (j = 1; j <= 2 * (row - i); j++) {
			printf("  ");
		}
		for(j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for(i = 1; i <= row; i++) {
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		for (j = 1; j <= 2 * (row - i); j++) {
			printf("  ");
		}
		for(j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

}
void Menu(){
	int i, j, k=61;
	printf("\nPattern Programs !!!\n");
	for(i = 1; i <= 6; i++) {
		for (j = 1; j <= 6 && k<=94; j++) {
			printf("Pattern %d\t", k++);
		}
		printf("\n");
	}
	printf("\n\n0. Exit\n");

}
void main(){
	int choice, row, col;
	do {
	clrscr();
	Menu();
	printf("\n\nEnter Your Choice : ");
	scanf("%d", &choice);
	switch (choice){
		case 61:
			clrscr();
			pattern61();
		break;
		case 62:
			clrscr();
			pattern62();
		break;
		case 63:
			clrscr();
			pattern63();
		break;
		case 64:
			clrscr();
			pattern64();
		break;
		case 65:
			clrscr();
			pattern65();
		break;
		case 66:
			clrscr();
			pattern66();
		break;
		case 67:
			clrscr();
			pattern67();
		break;
		case 68:
			clrscr();
			pattern68();
		break;
		case 69:
			clrscr();
			pattern69();
		break;
		case 70:
			clrscr();
			pattern70();
		break;
		case 71:
			clrscr();
			pattern71();
		break;
		case 72:
			clrscr();
			pattern72();
		break;
		case 73:
			clrscr();
			pattern73();
		break;
		case 74:
			clrscr();
			pattern74();
		break;
		case 75:
			clrscr();
			printf("\n\nEnter Rows and columns : ");
			scanf("%d %d", &row, &col);
			pattern75(row, col);
		break;
		case 76:
			clrscr();
			printf("\n\nEnter Rows and columns : ");
			scanf("%d %d", &row, &col);
			pattern76(row, col);
		break;
		case 77:
			clrscr();
			printf("\n\nEnter Rows and columns : ");
			scanf("%d %d", &row, &col);
			pattern77(row, col);
		break;
		case 78:
			clrscr();
			printf("\n\nEnter Rows and columns : ");
			scanf("%d %d", &row, &col);
			pattern78(row, col);
		break;
		case 79:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern79(row);
		break;
		case 80:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern80(row);
		break;
		case 81:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern81(row);
		break;
		case 82:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern82(row);
		break;
		case 83:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern83(row);
		break;
		case 84:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern84(row);
		break;
		case 85:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern85(row);
			getch();
		break;
		case 86:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern86(row);
			getch();
		break;
		case 87:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern87(row);
			getch();
		break;
		case 88:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern88(row);
			getch();
		break;
		case 90:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern90(row);
			getch();
		break;
		case 91:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern91(row);
			getch();
		break;
		case 92:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern92(row);
			getch();
		break;
		case 93:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern93(row);
			getch();
		break;
		case 94:
			clrscr();
			printf("\n\nEnter Rows : ");
			scanf("%d", &row);
			pattern94(row);
			getch();
		break;
		case 0:
			clrscr();
			gotoxy(35,12);
			printf("Thank You!!!");
			getch();
			return;
		default:
			printf("\nWrong Choice!!!");
		}
		} while(choice != 0);
	printf("\nPress any key to continue...");
	getch();
}