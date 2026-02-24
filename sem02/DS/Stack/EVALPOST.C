#include<stdio.h>
#include<conio.h>
#define size 50
int stack[size];
char postfix[size];
int top=-1;
void push(int no)
{
	if(top==size-1)
		printf("\n Stack is Full");
	else{
		top++;
		stack[top] = no;
	}
}
char pop()
{
	char temp = '\0';
	if(top==-1)
		printf("\n Stack is Empty");
	else{
		temp = stack[top];
		top--;
	}
	return temp;
}
void EvalutePostfix(char postfix[size])
{
	int temp,index=0,ans;
	char ch,op1,op2;
	//len = strlen(postfix);
	while(postfix[index] != '\0')
	{
		ch=postfix[index];
		if(ch>='0' && ch<='9')
		{
			push(ch-'0');
		}
		else
		{
			op2 = pop();
			op1 = pop();

			switch(ch)
			{
				case '+':
				ans = op2+op1;
				push(ans);
				break;

				case '-':
				ans = op1-op2;
				push(ans);
				break;

				case '*':
				ans = op2*op1;
				push(ans);
				break;

				case '/':
				ans = op2/op1;
				push(ans);
				break;

				case '%':
				ans = op2%op1;
				push(ans);
				break;

				default:
				ans = 0;
			}

		}
		index++;
	}
	printf("\n%d",pop());
}
void main()
{
	clrscr();
	printf("\n Enter a Postfix Expression : ");
	scanf("%s",postfix);
	//printf("%s",postfix);
	EvalutePostfix(postfix);
	getch();
}