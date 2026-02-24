#include<stdio.h>
#include<conio.h>

struct node {
	int data;
	struct node * next;
};

struct node *head=0, *temp;

void Menu(){
	printf("\n-- MENU --");
	printf("\n1. Create");
	printf("\n2. Traversal");
	printf("\n3. Insert at First (HEAD)");
	printf("\n4. Insert at Last (TAIL)");
	printf("\n5. Insert at Position");
	printf("\n6. Delete at First");
	printf("\n7. Delete at Last");
	printf("\n8. Delete at Pos");
	printf("\n9. Print Even Data");
	printf("\n10. Print Even Index");
	printf("\n11. Count Nodes");
	printf("\n12. Find data");
	printf("\n0. Exit");
}

void createLinkedList(int data);
void traversal();
void insertAtFirst(int val);
void insertAtLast(int val);
void insertAtPos(int val, int pos);
void deleteAtFirst();
void deleteAtLast();
void deleteAtPos(int pos);
void countNodes();
void printEvenData();
void printEvenIndex();
void deleteFirst();
void deleteLast();
void deleteAtPosition(int pos);
void searchData(int val);

void main() {
	int ch, val, pos;
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
				createLinkedList(val);
				break;
			case 2:
				traversal();
				break;
			case 3:
				printf("\nEnter Value:");
				scanf("%d", &val);
				insertAtFirst(val);
				break;
			case 4:
				printf("\nEnter Value:");
				scanf("%d", &val);
				insertAtLast(val);
				break;
			case 5:
				printf("\nEnter Value:");
				scanf("%d", &val);
				printf("\nEnter Pos:");
				scanf("%d", &pos);
				insertAtPos(val, pos);
				break;
			case 6:
				deleteAtFirst();
				break;
			case 7:
				deleteAtLast();
				break;
			case 8:
				printf("\nEnter Pos:");
				scanf("%d", &pos);
				deleteAtLast(pos);
				break;
			case 9:
				printEvenData();
				break;

			case 10:
				printEvenIndex();
				break;

			case 11:
				countNodes();
				break;
			case 12:
				printf("\nEnter Value for find:");
				scanf("%d", &val);
				searchData(val);
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

void createLinkedList(int data){
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

void insertAtFirst(int val){
	struct node * newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode->data = val;

	newnode->next = head;
	head = newnode;
}

void insertAtLast(int val){
	struct node * newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode->data = val;

	temp = head;
	while(temp->next !=0){
		temp =temp->next;
	}

	temp -> next = newnode;
}

void insertAtPos(int val, int pos){

	int i = 1;
	struct node * newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode->data = val;
	if(pos == 1){
		insertAtFirst(val);
	}
	else {
		temp = head;
		while(i< pos-1){
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}

}

void deleteAtFirst(){
	temp = head;
	printf("%d Deleted !", temp->data);
	head = temp -> next;
	free(temp);
	temp=head;
}
void deleteAtLast(){
	struct node * prev;
	temp = head;
	while(temp->next !=0){
		prev = temp;
		temp =temp->next;
	}
	free(temp);
	printf("%d Deleted !", temp->data);
	temp = prev;
	temp -> next = 0;

}

void traversal(){
	temp = head;
	while(temp!=0){
		printf("%d, ", temp->data);
		temp = temp->next;
	}
}
void countNodes()
{
	int count=0;
	temp=head;
	while(temp!=0)
	{
		count++;
		temp=temp->next;
	}
	printf("\n Total Nodes = %d",count);
}
void printEvenData()
{
	temp=head;
	while(temp!=0)
	{
		if(temp->data%2==0)
			printf("\n%d",temp->data);
		temp=temp->next;
	}
}
void printEvenIndex()
{
	int index=0;
	temp=head;
	while(temp!=0)
	{
		index++;
		if(index%2==0)
			printf("\n%d",temp->data);
		temp=temp->next;
	}
}
void deleteFirst()
{
	temp=head;
	head=temp->next;
	printf("\n %d Deleted..",temp->data);
	free(temp);
	temp=head;
}
void deleteLast()
{
	struct node *previous;
	temp=head;
	while(temp->next!=0)
	{
		previous=temp;
		temp=temp->next;
	}
	free(temp);
	printf("\n %d Deleted..",temp->data);
	temp=previous;
	temp->next=0;
}
void deleteAtPosition(int pos)
{
	int count=0;
	struct node *previous;
	temp=head;
	while(pos!=count+1){
		previous=temp;
		temp=temp->next;
		count++;
		//printf("\n %d prev and %d temp and %d temp->next",previous->data,temp->data,temp->next->data);
	}
	previous->next=temp->next;
	printf("\n %d Deleted..",temp->data);
	free(temp);
}

void searchData(int data){
	int found=0;
	temp = head;
	while(temp!=0){
		if(temp->data==data){
			found=1;
			break;
		}
		temp=temp->next;
	}
	if(found==1)
		printf("\n%d Found in list",data);
	else
		printf("\n%d Not Found in list",data);
}