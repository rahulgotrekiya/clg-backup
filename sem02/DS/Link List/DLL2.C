#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=0, *tail=0;
struct node *chead=0, *ctail=0;

void createNode(int data){
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof (struct node));
	newnode->data=data;
	newnode->prev=0;
	newnode->next=0;

	if(head == 0) {
		head=newnode;
		tail=newnode;
	}
	else{
		tail->next=newnode;
		newnode->prev=tail;
		tail = newnode;
	}
	printf("\n%d is inserted...", newnode->data);
}

void traversal(struct node *h){
	struct node *temp;
	temp=h;
	if(h==0){
		printf("\nEmpty...");
	}
	printf("\nForward: ");
	while(temp!=0){
		printf("%d-> ", temp->data);
		temp=temp->next;
	}
}
void backTraversal(struct node *t){
	struct node *temp;
	temp=t;
	printf("\nbackward: ");
	while(temp!=0){
		printf("%d-> ", temp->data);
		temp=temp->prev;
	}
}

void copyNode(){
	struct node *temp;
	temp = head;
	while(temp!=0){
		struct node *newnode;
		newnode=(struct node *) malloc(sizeof (struct node));
		newnode->data=temp->data;
		newnode->prev=0;
		newnode->next=0;

		if(chead == 0 ) {
			chead=newnode;
			ctail=newnode;
		}
		else{
			ctail->next=newnode;
			newnode->prev=ctail;
			ctail = newnode;
		}
		temp=temp->next;
	}
	printf("\nNode Copied...");
	traversal(chead);

}

void mergeNode(){
	tail->next=chead;
	chead->prev = tail;
	tail=ctail;

	printf("\nNodes Merged...");
	traversal(head);
	backTraversal(tail);
}

void search(int data){
	struct node *temp;
	int count = 0;
	temp=head;
	while(temp!=0){
		if(data==temp->data) count++;
		temp=temp->next;

	}
	if(count>0){
		printf("\n%d found %d times...", data, count);
	}
	else {
		printf("\nNot found...");
	}
}

void Menu(){
	printf("\n1. Create");
	printf("\n2. Traversal");
	printf("\n3. Copy");
	printf("\n4. Merge");
	printf("\n5. Search Count");
	printf("\n0. Exit");
}

void main(){
	int pos, ch, val;
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
				createNode(val);
				break;
			case 2:
				traversal(head);
				break;
			case 3:
				copyNode();
				break;
			case 4:
				mergeNode();
				break;
			case 5:
				printf("\nEnter Value for Search:");
				scanf("%d", &val);

				search(val);
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
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