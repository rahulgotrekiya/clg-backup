#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*temp;
struct node *newtemp;
void createNode(int data)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=0;

	if(head==0){
		head=newnode;
		temp=newnode;
	}
	else{
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		temp=newnode;
	}
	printf("\n %d Inserted..",newnode->data);
}
void insertFirst(int data)
{

	if(head==0)
		createNode(data);
	else{
		struct node *newnode;
		newnode = (struct node *)malloc(sizeof(struct node));

		printf("\n Enter Data : ");
		scanf("%d",&newnode->data);

		newnode->next=head;
		head=newnode;

		printf("\n %d Inserted First..",newnode->data);
	}
}
void insertLast(int data)
{
	struct node *newnode;
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=0;
	temp->next=newnode;
	printf("\n %d Inserted Last..",newnode->data);
}
void insertAtPosition(int pos,int data)
{
	struct node *newnode,*old;
	int count=0;
	temp=head;
	if(pos==1){
		insertFirst(data);
	}
	else if(pos<=0)
	{
		printf("\n Not Valid Position!");
	}
	else{
		newnode = (struct node *)malloc(sizeof(struct node));
		while(count!=pos-2)
		{
			temp=temp->next;
			count++;
		}
		newnode->data=data;
		old=temp->next;
		temp->next=newnode;
		newnode->next=old;
	}
}
void traversal()
{
	temp=head;
	while(temp!=0)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
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
void main()
{
	int ch,data,pos;
	do{
		clrscr();
		printf("\n -- Singly Linked List --");
		printf("\n 1. Add Node");
		printf("\n 2. Insert at First");
		printf("\n 3. Traversal");
		printf("\n 4. Insert at Last");
		printf("\n 5. Insert at Position");
		printf("\n 6. Delete First");
		printf("\n 7. Delete Last");
		printf("\n 8. Delete at Position");
		printf("\n 9. Print Even Data");
		printf("\n 10. Print Even Index");
		printf("\n 11. Count Nodes");
		printf("\n 12. Exit");

		printf("\n Enter Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			printf("\n Enter Data : ");
			scanf("%d",&data);
			createNode(data);
			break;

			case 2:
			printf("\n Enter Data : ");
			scanf("%d",&data);
			insertFirst(data);
			break;

			case 3:
			traversal();
			break;

			case 4:
			printf("\n Enter Data : ");
			scanf("%d",&data);
			insertLast(data);
			break;

			case 5:
			printf("\n Enter Position : ");
			scanf("%d",&pos);
			printf("\n Enter Data : ");
			scanf("%d",&data);
			insertAtPosition(pos,data);
			break;

			case 6:
			deleteFirst();
			break;

			case 7:
			deleteLast();
			break;

			case 8:
			printf("\n Enter Position : ");
			scanf("%d",&pos);
			deleteAtPosition(pos);
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
			exit(1);
			break;

			default:
			printf("\n InValid Choice!");
		}
		getch();
	}while(1);
}