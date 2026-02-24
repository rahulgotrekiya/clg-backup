#include<stdio.h>
#include<conio.h>
#define size 50
char exp[size];
char stack[size];
int top=-1;
void push(char ch){
	if(top==size-1)
		printf("\n Stack is Full");
	else {
		top++;
		stack[top]=ch;
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




void main(){
	int len, i, flag=1;
	char temp;
	clrscr();

	printf("\nEnter Expression: ");
	scanf("%s", exp);
	len = strlen(exp);
	//printf("%d", len);

	for (i=0; i<len;i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push(exp[i]);
		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
			if(top==-1)
				flag=0;
			else {
				temp=pop();
				if(exp[i]==')' && (temp=='{' || temp=='['))
					flag=0;
				if(exp[i]=='}' && (temp=='(' || temp=='['))
					flag=0;
				if(exp[i]==']' && (temp=='(' || temp=='{'))
					flag=0;
			}
	}
	if(top >= 0)
		flag=0;

	if (flag==1)
		printf("\nExpression is Valid");
	else
		printf("\nExpression is Invnalid");
	getch();

}
