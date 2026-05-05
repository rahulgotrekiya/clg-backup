#include<stdio.h>
#include<conio.h>

struct node {
	int data;
	struct node *next;

};

struct node *head=0, *temp;

void create(int data){
	struct node * newnode;
	newnode = (struct node *)malloc(sizeof(struct  node));
	newnode->next = 0;
	newnode->data = data;

	if(head==0){
		head = newnode;
		temp = newnode;
	}
	else{
		temp=head;
		while(temp->next!=0){
			temp=temp->next;
		}
		temp->next = newnode;
		temp = newnode;
	}
}
void search(int data) {
	int found=0;
	temp = head;
	while(temp != 0){
		if (temp->data==data){
			found=1;
			break;
		}
		temp=temp->next;
	}
	if(found == 1){
		printf("%d found !", data);
	}
	else {
		printf("%d not found !", data);
	}
}

void main(){
	int data;
	clrscr();

	create(10);
	create(20);
	create(30);
	create(40);
	create(50);


	search(50);

	getch();
}