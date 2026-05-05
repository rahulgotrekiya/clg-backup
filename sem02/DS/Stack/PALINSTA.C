/*
	check string is palindrome or not using stack
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 3
char str[SIZE];
char stack[SIZE];
int top=-1;

void push(int data){
	if(top == SIZE-1){
		printf("\nOverflow");
	}
	else{
		top++;
		stack[top]=data;
		printf("\n%d is pushed", data);
	}
}

char pop(){
	if(top==-1){
		printf("\nUnderflow");
	}
	else{
		printf("\n%d is poped", stack[top]);
		top--;
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

	printf("\nEnter String: ");
	scanf("%s", str);
	len = strlen(str);
	//printf("%d", len);


	for (i=0; i<len;i++){
		printf("%d", str[i]);
	}
	/*
	if(top >= 0)
		flag=0;

	if (flag==1)
		printf("\nExpression is Valid");
	else
		printf("\nExpression is Invnalid");
	*/
	getch();

}
