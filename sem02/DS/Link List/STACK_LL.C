#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=0,*temp;
struct node *top2=0,*temp2;
struct node *top3=0,*temp3;
struct node * push(int d,struct node *t)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=d;
	newnode->next=t;
	t=newnode;
	printf("\n %d Pushed..",d);
	return t;
}
void pop()
{
	if(top==0)
		printf("\n Stack Empty!");
	else{
		temp=top;
		top=top->next;
		printf("\n %d Poped..",temp->data);
		free(temp);
	}
}
void traversal(struct node *t)
{
	struct node *trav;
	trav=t;
	while(trav!=0)
	{
		printf("\n %d",trav->data);
		trav=trav->next;
	}
}
void peek()
{
	if(top==0)
		printf("\n Stack Empty!");
	else{
		printf("\n %d",top->data);
	}
}
void unionList()
{
	temp=top;
	while(temp!=0)
	{
		top3=push(temp->data,top3);
		temp=temp->next;
	}
	traversal(top3);
}
void main()
{
	int ch,data;
	do{
		clrscr();
		printf("\n --Stack Using Linked List--");
		printf("\n 1.Push in List 1");
		printf("\n 2.Push in List 2");
		printf("\n 3.Pop");
		printf("\n 4.Peek");
		printf("\n 5.Traversal List 1");
		printf("\n 6.Traveral List 2");
		printf("\n 7.Traversal List Result");
		printf("\n 8.Union");
		printf("\n 9.Exit");

		printf("\n Enter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			printf("\n Enter Data : ");
			scanf("%d",&data);
			top=push(data,top);
			break;

			case 2:
			printf("\n Enter Data : ");
			scanf("%d",&data);
			top2=push(data,top2);
			break;

			case 3:
			pop();
			break;

			case 4:
			peek();
			break;

			case 5:
			traversal(top);
			break;

			case 6:
			traversal(top2);
			break;

			case 7:
			traversal(top3);
			break;

			case 8:
			unionList();
			break;

			case 9:
			exit(1);
			break;

			default:
			printf("\n Invalid!");
		}
		getch();
	}while(1);
}