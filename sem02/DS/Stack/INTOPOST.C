#include<stdio.h>
#include<conio.h>
#define SIZE 50
char stack[SIZE];
char infix[SIZE];
char postfix[SIZE];
int top = -1;

void push(char val){
	if(top == SIZE-1){
		printf("\nOverflow");
	}
	else{
		top++;
		stack[top]=val;
		printf("\n%d is pushed at position %d", num, val);
	}
}

char pop(){
	int no;
	if(top==-1){
		printf("\nUnderflow");
	}
	else{
		no=stack[top];
		top--;
	}
	return no;
}

void main(){
	clrscr();
	printf("\nEnter infix Expression: ");
	gets(infix);
	converToPostfix(infix);
	getch();
}
void converToPostfix(char infix[SIZE]){
	int len = 0, index = 0, pos = 0;
	char symbol, temp;
	len = strlen(infix);
	while(index < len) {
		symbol = infix[index];
		switch(symbol){
			case '(':
				push(symbol);
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				while(prec(stac[top] >= prec(symbol)){
					temp = pop();
					postfix[pos] = temp;
					pos++
				}
				push(symbol);
				break;
			case ')':
				temp = pop();
				while(temp != '(') {
					postfix[pos]= temp;
					pos++
					temp = pop();
				}
				break;
			default:
				postfix[pos]=symbol;
				pos++;
				break;
		}       // switch close
		index++
		while(stack[top] > 0) {
			temp=pop();
			postfix[pos]=temp;
			post++;
		}
	}
}

int prec(char symbol){
	switch(symbol){
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		default:
			return -1;
	}
}