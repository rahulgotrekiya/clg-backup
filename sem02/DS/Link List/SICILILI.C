#include<stdio.h>
#include<conio.h>
struct node {
	int data;
	struct node *next;
};

struct node *tail=0;

void create(int val){
	struct node * newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode-> data = val;
	newnode-> next = 0;
	if(tail==0){
	       tail = newnode;
	       tail->next = newnode;
	} else {
		newnode->next = tail->next;
		tail->next = newnode;
		tail = newnode;
	}
}

void InsertFirst(int val){
	struct node * newnode;
	newnode = (struct node *) malloc(sizeof (struct node));
	newnode->data = val;
	newnode->next = 0;
	newnode->next = tail->next;
	tail->next = newnode;
}

void InsertLast(int val){
	struct node * newnode;
	newnode = (struct node *) malloc(sizeof (struct node));
	newnode->data = val;
	newnode->next = 0;
	newnode->next = tail->next;
	tail->next = newnode;
	tail = newnode;
}

void traversal(){
	struct node *temp;
	temp = tail->next;

	while(temp!=tail){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);

}

void InsertPosition(int val, int pos){
	// TODO: add validation if the pos > size of node then give error
	int i;
	struct node * newnode, *temp;
	newnode = (struct node *) malloc(sizeof (struct node));
	newnode->data = val;
	if(pos == 1){
		InsertFirst(val);
	}
	else {
		temp = tail;
		while(i< pos-1){
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
}

void DeleteFirst(){
	struct node *temp;
	temp = tail->next;
	tail->next = temp->next;

	printf("%d Deleted !", temp->data);
	free(temp);
}

void DeleteLast(){
	struct node * curr, * temp;
	temp = tail->next;

	while(temp!=tail){
		curr = temp;
		temp =temp->next;
	}
	curr->next = temp->next;
	tail=curr;
	free(temp);
	printf("%d Deleted !", temp->data);
}

void DeletePosition(int pos){
	int count=0;
	struct node *temp, *prev;
	temp=tail;
	while(pos!=count){
		prev=temp;
		temp=temp->next;
		count++;
		// printf("\n %d prev and %d temp and %d temp->next",prev->data,temp->data,temp->next->data);
	}
	prev->next=temp->next;
	printf("\n %d Deleted..",temp->data);
	free(temp);

}

void SearchData(int data){
	int found=0;
	struct node *temp;
	temp = tail;
	while(temp!=tail){


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

void Menu(){
	printf("\n1. Create");
	printf("\n2. Traversal");
	printf("\n3. Insert First");
	printf("\n4. Insert Last");
	printf("\n5. Insert Position");
	printf("\n6. Delete First");
	printf("\n7. Delete Last");
	printf("\n8. Delete at Position");
	printf("\n9. Search");
	printf("\n0. Exit");
}

void main(){
	int ch, val, pos;
	clrscr();
	do{
		clrscr();
		Menu();
		printf("\nEnter Your choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("Enter Data: ");
				scanf("%d", &val);
				create(val);
				break;

			case 2:
				traversal();
				break;
			case 3:
				printf("Enter Data: ");
				scanf("%d", &val);
				InsertFirst(val);
				break;
			case 4:
				printf("Enter Data: ");
				scanf("%d", &val);
				InsertLast(val);
				break;
			case 5:
				printf("Enter Position: ");
				scanf("%d", &pos);
				printf("Enter Data: ");
				scanf("%d", &val);
				InsertPosition(val, pos);
				break;
			case 6:
				DeleteFirst();
				break;
			case 7:
				DeleteLast();
				break;
			case 8:
				printf("Enter Position: ");
				scanf("%d", &pos);

				DeletePosition(pos);
				break;
			case 9:
				printf("Enter data: ");
				scanf("%d", &val);

				SearchData(val);
				break;
			case 0:

				break;
			default:
				printf("Invalid Choice...");
		}
		getch();
	}while(ch!=0);
}