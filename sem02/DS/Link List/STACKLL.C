#include<stdio.h>
#include<conio.h>
struct node {
	int data;
	struct node *next;
};

struct node *top1=0, *temp;
struct node *top2=0, *temp2;

struct node * createLL(int d, struct node *t){
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof (struct node));
	newnode->data=d;
	newnode->next=t;
	t=newnode;
	printf("\n %d Pushed...", d);
	return t;
}

void traversal(struct node *t) {
	struct node *trav;
	trav=t;
	while(trav!=0){
		printf("\n%d", trav->data);
		trav=trav->next;
	}
}

void pop(){
	if(top1==0){
		printf("\nStack is Empty...");
	}
	else {
		temp=top1;
		top1=top1->next;
		printf("\n%d Poped!",temp->data);
		free(temp);
	}
}

void peek(){
	if(top1==0)
		printf("\nStack is Empty...");
	else
		printf("\n%d",top1->data);
}
void Menu() {
	printf("\n1. Push");
	printf("\n2. Push 2");
	printf("\n3. Pop");
	printf("\n4. Peek");
	printf("\n5. Traversal");
	printf("\n6. Traversal 2");
	printf("\n7. Union");
	printf("\n0. exit");
}
void main(){
	int ch, data;
	clrscr();
	do{
		clrscr();
		Menu();
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				printf("\nEnter data: ");
				scanf("%d", &data);
				createLL(data, top1);
				break;
			case 2:
				printf("\nEnter data: ");
				scanf("%d", &data);
				createLL(data, top2);
				break;
			case 3:
				pop();
				break;
			case 4:
				peek();
				break;
			case 5:
				traversal(top1);
				break;
			case 6:
				traversal(top2);
				break;
			case 7:
				break;
			case 0:
				exit(1);
				break;
		}
		getch();
	}while(1);
}