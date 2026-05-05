#include<stdio.h>
#include<conio.h>
struct node {
	int data;
	struct node *next;
};

struct node *front=0, *rear=0;

struct node * enqueue(int d){
	struct node * newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = d;
	newnode->next = 0;

	if (front == 0 && rear == 0) {
		front = newnode;
		rear = newnode;
	}
	else {
		rear->next = newnode;
		rear = newnode;
	}
	return front;
}

struct node * dequeue() {
	if(front == 0 && rear == 0){
		printf("\nQueue Empty!!!");
	}
	else {
		struct node * temp;
		temp = front;
		printf("%d Dequeued...", temp->data);
		front=front->next;

		free(temp);
	}
	return front;
}

void traversal(struct node  *t) {
	if(front == 0 && rear == 0){
		printf("\nQueue Empty!!!");
		return;
	}
	while(t!=0){
		printf("%d ", t->data);
		t=t->next;
	}
}

void peek(){
	if(front==0 && rear==0)
		printf("\nQueue is Empty...");
	else
		printf("\n%d",front->data);
}

void Menu() {
	printf("\n1. Enqueue");
	printf("\n2. Dequeue");
	printf("\n3. Peek");
	printf("\n4. Traversal");
	printf("\n0. exit");
}
void main(){
	int ch, val;
	struct node *f;
	clrscr();
	do{
		clrscr();
		Menu();
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				printf("\nEnter Value:");
				scanf("%d", &val);
				f = enqueue(val);
				traversal(f);
				break;
			case 2:
				f = dequeue();
				break;
			case 3:
				peek();
				break;
			case 4:
				traversal(f);
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("\nEnter Valid Choice !!!");
		}
		getch();
	}while(1);
}