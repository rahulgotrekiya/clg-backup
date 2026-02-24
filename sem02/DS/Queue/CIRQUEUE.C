#include<stdio.h>
#include<conio.h>

#define SIZE 3

char queue[SIZE];
int rear=-1;
int front=-1;

void enqueue(int data);
void dequeue();
void peek();
int isFull();
int isEmpty();
void traversal();

void Menu(){
	printf("\n-- MENU --");
	printf("\n1. Enqueue");
	printf("\n2. Dequeue");
	printf("\n3. Peek");
	printf("\n4. Is full");
	printf("\n5. Is Empty");
	printf("\n6. Traveral");
	printf("\n0. Exit");
}

void main() {
	int ch, val;
	clrscr();

	do {
		clrscr();
		Menu();

		printf("\nEnter Your choice:");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				printf("\nEnter Value:");
				scanf("%d", &val);
				enqueue(val);

				break;
			case 2:
				dequeue();
				break;
			case 3:
				peek();
				break;
			case 4:
				if(isFull()){
					printf("\nQueue is Full...");
				}
				else {
					printf("\nQueue is Not full\nFront: %d\nRear: %d", queue[front], queue[rear]);
				}
				break;
			case 5:
				if(isEmpty()){
					printf("\nQueue is Empty...");
				}
				else {
					printf("\nQueue is not Empty\nFront: %d\nRear: %d", queue[front], queue[rear]);
				}
				break;
			case 6:
				traversal();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("\nInvalid choice !");
		}
		getch();
	} while(1);
}

void enqueue(int data) {
	if(isFull()){
		printf("\nQueue Overflow...");
	}
	else if(front == -1 && rear == -1) {
		front = 0;
		rear = 0;
		queue[rear]=data;
		printf("\n%d is enqueued...", data);
	}
	else {
		rear = (rear+1) % SIZE;
		queue[rear]=data;
		printf("\n%d is enqueued...", data);
	}
}

void dequeue(){
	if(isEmpty()){
		printf("\nQueue is Empty...");
	}
	else if(front == rear) {
		printf("\n%d is Dequeued...", queue[front]);
		front = -1;
		rear = -1;
	}
	else {
		printf("\n%d is Dequeued...", queue[front]);
		front=(front+1) % SIZE;
	}
}

void peek(){
	if(isEmpty()){
		printf("\nQueue is Empty...");
	}
	else {
		printf("\n%d is Front Element", queue[front]);
	}
}

int isFull(){
	if((rear+1) % SIZE == front)
		return 1;
	else
		return 0;
}

int isEmpty(){
	if(front==-1 && rear==-1)
		return 1;
	else
		return 0;
}

void traversal(){
	int i=front;
	if(isEmpty()){
		printf("\nQueue is empty");
	}

	while(i!=rear) {
		printf("| %d |",queue[i]);
		i = (i+1)%SIZE;
	}
	printf("| %d |",queue[rear]);

	/*
	for(i=front;i<=rear;i++){
		printf("| %d |",queue[i]);
		i =(i+1)%SIZE;
	}
	*/
}