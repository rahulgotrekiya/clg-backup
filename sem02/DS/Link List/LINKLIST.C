#include<stdio.h>
#include<conio.h>
struct node {
	int data;
	struct node * next;
};
struct node *head = 0, *temp;
void create();
void traversal();
void main(){
	clrscr();
	create(10);
	create(11);
	create(12);
	create(13);
	traversal();
	getch();
}

void create(int data){
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next = 0;
	if(head==0){
		head=newnode;
		temp=newnode;
	}
	else {
		temp->next = newnode;
		temp = newnode;
	}
}

void traversal(){
	temp = head;
	while(temp != 0){
		printf("%d ", temp->data);
		temp = temp->next;
	}
}









