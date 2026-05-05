#include<stdio.h>
#include<conio.h>

struct node {
	int data;
	struct node * next;
};

struct node *head=0, *temp, *n, *cn, *pn, *nn;
struct node *head2=0, *temp2;

void Menu(){
	printf("\n-- MENU --");
	printf("\n1. Create Node");
	printf("\n2. Create Node 2");
	printf("\n3. Traversal");
	printf("\n4. Merge Nodes");
	printf("\n5. Merge Nodes (Using Reccursion)");
	printf("\n6. Copy Node");
	printf("\n7. Sort Linked List");
	printf("\n8. Reverse");
	printf("\n0. Exit");
}

void createNode(int data);
void createNode2(int data);
void traversal(int nodeNo);
void mergeNodes();
void mergeRecc(struct node *a, struct node *b);
void copyNode();
void sort();
void reverse();

void main() {
	int ch, val, pos, nodeNo;
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
				createNode(val);
				break;
			case 2:
				printf("\nEnter Value:");
				scanf("%d", &val);
				createNode2(val);
				break;
			case 3:
				printf("\nEnter Node No (1/2):");
				scanf("%d", &nodeNo);

				traversal(nodeNo);
				break;
			case 4:
				mergeNodes();
				break;
			case 5:
				mergeRecc(head, head2);
				printf("Node 1 : ");
				traversal(1);
				break;
			case 6:
				copyNode();
				break;
			case 7:
				sort();
				traversal(1);
				break;
			case 8:
				reverse();
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

void reverse(){
	pn=0;
	cn=nn=head;
	while(nn!=0){
		nn = nn->next;
		cn->next = pn;
		pn=cn;
		cn=nn;
	}
	head=pn;
	traversal(1);
}

void sort(){
	int swap;
	temp = head;
	while(temp!=0){
		n=temp;
		while(n!=0){
			if(n->data < temp->data){
				swap=n->data;
				n->data = temp->data;
				temp->data=swap;
			}
			n = n->next;
		}
		temp=temp->next;
	}

}

void mergeRecc(struct node *a, struct node *b){
	if(a!=0 && b!=0){
		if(a->next==0)
			a->next=b;
		else
			mergeRecc(a->next, b);
	}
	else {
		printf("Either a or b is null");
	}
}

void copyNode(){
	temp = head;
	while(temp!=0){
		createNode2(temp->data);
		temp=temp->next;
	}
	printf("\nNode 2 : ");
	traversal(2);
}

void mergeNodes(){
	temp=head;
	while(temp->next!=0){
		temp=temp->next;

	}
	temp->next=head2;
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}


void createNode(int data){
	struct node * newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode-> next = 0;
	newnode-> data = data;
	if(head==0){
	       head = newnode;
	       temp = newnode;
	}
	else {
		temp=head;
		while(temp->next!=0){
			temp=temp->next;
		}
		temp->next = newnode;
		temp = newnode;
	}
}

void createNode2(int data){
	struct node * newnode2;
	newnode2=(struct node*) malloc(sizeof(struct node));
	newnode2-> next = 0;
	newnode2-> data = data;
	if(head2==0){
	       head2 = newnode2;
	       temp2 = newnode2;
	}
	else {
		temp2=head2;
		while(temp2->next!=0){
			temp2=temp2->next;
		}
		temp2->next = newnode2;
		temp2 = newnode2;
	}
}
void traversal(int nodeNo){
	if(nodeNo==1){
		temp = head;
		while(temp!=0){
			printf("%d, ", temp->data);
			temp = temp->next;
		}
	}
	else if(nodeNo==2){
		temp2 = head2;
		while(temp2!=0){
			printf("%d, ", temp2->data);
			temp2 = temp2->next;
		}
	}
	else{
		printf("\nEnter valid node!");
	}

}