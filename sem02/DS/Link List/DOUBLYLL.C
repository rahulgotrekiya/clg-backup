#include<stdio.h>
#include<conio.h>
struct node {
	int data;
	struct node * next;
	struct node * prev;
};
struct node *head=0, *tail=0;

void createNode(int d){
	struct node * newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = d;
	newnode->prev = 0;
	newnode->next = 0;

	if (head == 0) {
		head=newnode;
		tail=newnode;
	}
	else {
		tail->next=newnode;
		newnode->prev=tail;
		tail = newnode;
	}
	printf("\n%d is inserted...", newnode->data);
}

void insertFirst(int val){
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));

	newnode->prev = 0;
	newnode->next = 0;

	newnode->data = val;
	if(head == 0 && tail == 0){
		head = newnode;
		tail = newnode;
	}
	else {
		newnode->next = head;
		head->prev=newnode;
		head=newnode;
	}
}

void insertLast(int val){
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));

	newnode->prev = 0;
	newnode->next = 0;

	newnode->data = val;
	if(head == 0 && tail == 0){
		head = newnode;
		tail = newnode;
	}
	else {
		newnode->prev = tail;
		tail->next=newnode;
		tail=newnode;
	}
}


void insertAtPos(int val, int pos){
	int i=0;
	struct node *newnode, *temp, *nn;
	newnode = (struct node *) malloc(sizeof(struct node));

	newnode->prev = 0;
	newnode->next = 0;

	newnode->data = val;

	temp = head;
	while(i< pos-2){
		temp = temp->next;
		i++;
	}
	newnode->prev=temp;
	nn= temp->next;
	temp->next=newnode;
	newnode->next=nn;
}

void traversal() {
	struct node *temp;
	temp=head;
	if(head == 0){
		printf("\nLinked List is Empty!!!");
		return;
	}
	while(temp!=0){
		printf("%d ", temp->data);
		temp=temp->next;
	}
}

void delFirst(){
	struct node *temp;
	temp=head;
	head=temp->next;
	printf("%d Deleted", temp->data);
	head->prev=0;
	free(temp);
}

void delLast(){
	struct node *temp;
	temp = tail;
	printf("%d Deleted", temp->data);
	tail = tail->prev;
	tail->next=0;
	free(temp);
}

void delAtPos(int pos) {
	int i=1;
	struct node *temp;

	temp = head;
	while(i< pos){
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;

	temp->next->prev=temp->prev;

	printf("%d Deleted", temp->data);

	free(temp);
}

void Menu() {
	printf("\n1. Create");
	printf("\n2. Traversal");
	printf("\n3. Insert at First");
	printf("\n4. Insert at Last");
	printf("\n5. Insert at Position");
	printf("\n6. Delete First");
	printf("\n7. Delete Last");
	printf("\n8. Delete at Position");
	printf("\n0. exit");
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
				traversal();
				break;
			case 3:
				printf("\nEnter Value:");
				scanf("%d", &val);
				insertFirst(val);

				break;
			case 4:
				printf("\nEnter Value:");
				scanf("%d", &val);
				insertLast(val);
				break;
			case 5:
				printf("\nEnter Value:");
				scanf("%d", &val);
				printf("\nEnter Position:");
				scanf("%d", &pos);
				insertAtPos(val, pos);
				break;
			case 6:
				delFirst();
				break;
			case 7:
				delLast();
				break;
			case 8:
				printf("\nEnter Position:");
				scanf("%d", &pos);
				delAtPos(pos);
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