#include<stdio.h>
#include<conio.h>
struct node {
	int data;
	struct node * left;
	struct node * right;
};

struct node * Create() {
	struct node * newnode;
	int x;
	printf("Enter data (-1 for no data): ");
	scanf("%d", &x);
	if (x == -1) return 0;

	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = x;
	printf("Enter left child of %d ", x);
	newnode->left = Create();
	printf("Enter right child of %d ", x);
	newnode->right = Create();

	return newnode;
}

void Inorder(struct node * root){
	if(root == 0) return;
	else {
		Inorder(root->left);
		printf("%d, ", root->data);
		Inorder(root->right);
	}
}

void main(){
	struct node * root = 0;
	clrscr();
	root = Create();
	printf("Inorder: ");
	Inorder(root);

	getch();

}