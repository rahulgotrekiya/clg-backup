/*
	WAP of Tic-Tac Game
	Date: 11/07/2025
	Author: Rahul Gotrekiya
*/
#include<stdio.h>
#include<conio.h>
char cp;
char board[3][3];
void demoBoard()
{
	int i, j;
	clrscr();
	printf("\n DEMO Positons \n\n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d%d", i, j);
			if(i < 2) printf("  |  ");
		}
		if (i < 2) printf("\n---------------\n");
	}
	printf("\n\n");
}
void printBoard()
{
	int i;
	clrscr();
	demoBoard();
	printf("\n");
	for(i=0; i<3; i++)
	{
		printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
		if(i<2) printf("\n---|---|---\n");
	}
	printf("\n\n");
}
void initBoard()
{
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			board[i][j]=' ';
	}
}
int isDrow()
{
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(board[i][j] == ' ')
			return 0;
		}

	}
	return 1;
}
void switchPlayer()
{
	cp = (cp == 'X') ? 'O' : 'X';
}
int CheckWin()
{
	int i;
	for(i=0; i<3; i++)
	{
		if(board[i][0] == cp&&board[i][1] == cp&&board[i][2] == cp) return 1;

		if(board[0][i] == cp && board[1][i] == cp && board[2][i] == cp) return 1;

		if(board[0][0] == cp && board[1][1] == cp && board[2][2] == cp) return 1;

		if(board[0][2] == cp && board[1][1] == cp && board[2][0] == cp) return 1;
	}
	return 0;
}

void playGame()
{
	int row,col;
	cp='X';
	initBoard();
	while(1)
	{
		printBoard();
		printf("Player %c ,Enter Row & Col : ", cp);
		scanf("%d", &row);
		scanf("%d", &col);

		if(row < 0 || row > 2 || col <0 || col > 2 || board[row][col]!=' ')
		{
			printf("Invalid Move !");
			getch();
			continue;
		}
		else if (row == 9 || col == 9){
			break;
		}
		board[row][col] = cp;
		if(CheckWin())
		{
			printBoard();
			printf("Player %c Win !",cp);
			break;
		}
		if(isDrow())
		{
			printBoard();
			printf("It's Drow ! ");
			break;
		}
		switchPlayer();
	}

}
void main()
{
	clrscr();
	playGame();
	getch();
}
