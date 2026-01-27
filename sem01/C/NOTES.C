/*
	WAP of Tic-Tac game
	Date: 11/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 3
void Board(char board[SIZE][SIZE]) {
	int i, j;
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++) {
			board[i][j] = '  ';
		}
	}
}
void PrintBoard(char board[SIZE][SIZE]) {
	int i;
	printf("\n");
	for(i = 0; i < SIZE; i++){
		printf("\n %c | %c | %c", board[i][0], board[i][1], board[i][2]);
			if(i < SIZE - 1) printf("\n - | - | - ");
		}
	printf("\n");
}
void Move(char board[SIZE][SIZE], char player) {
	int row, col;
	int valid = 0;

	while(!valid) {
		pritnf("\nPlayer %c", player);
		pritnf("\nEnter Row : ");
		scanf("%d", &row);
		pritnf("\nEnter Col : ");
		scanf("%d", &col);

		row--;
		col--;

		if(row >= 0 && row < SIZE && col >= 0 && col < SIZE) {
			if(board[row][col] == '') {
				board[row][col] = player;
				valid = 1;
			}
			else {
				printf("\nPosition is Not Valid");
			}
		}
		else {
			printf("\nInValid please enter between 1-3 !");
		}
	}
}

void CheckWinner(char board[SIZE][SIZE]) {
	int i, j;
	for(i = 0; i < SIZE; i++){
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ''){
			return 1;
		}
	}

	for(j = 0; j < SIZE; j++){
		if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ''){
			return 1;
		}
	}

	if(board[0][0] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ''){
		return 1;
	}

	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ''){
		return 1;
	}

	return 0;
}
void main() {
	char board[SIZE][SIZE];
	int a, row, col, player = 1;
 //	char mark, winner = 1;
	clrscr();
	Board(board);
	PrintBoard(board);
	getch();
}
