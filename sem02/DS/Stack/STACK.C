#include<stdio.h>
#include<conio.h>
#define SIZE 3
int stack[SIZE];
int top = -1;
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

void pop(){
	if(top==-1){
		printf("\nUnderflow");
	}
	else{
		printf("\n%d is poped", stack[top]);
		top--;
	}
}
void travarsal(){
	int i;
	if(top==-1){
		printf("\nStack is Empty!");
	}
	else{
		for(i=0;i<top;i++){
			printf("%d ", stack[i]);
		}
	}
}
void menu(){
	printf("\n1. Push");
	printf("\n2. Pop");
	printf("\n3. Peek");
	printf("\n4. Tavarsal");
	printf("\n5. Count");
	printf("\n0. Exit");

}
void main() {
	clrscr();
	menu();
	do {
		printf("\nEnter Your choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1:

				break;
			case 2:
				pop();
				break;
			case 3:

				break;
			case 4:
				travarsal();
				break;
			case 5:

				break;
			case 0:

				break;
			default	:
				printf("\Wrong Choice!!!");
		}
	} while(ch!=0);
	push(10);
	push(20);
	push(30);
	push(40);	// overflow
	pop();	// 30
	pop();  // 20
	pop();  // 10
	getch();
}
