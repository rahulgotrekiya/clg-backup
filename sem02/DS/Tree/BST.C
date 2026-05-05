#include<stdio.h>
#include<conio.h>
struct node {
	int data;
	struct node * left;
	struct node * right;
};

struct node * CreateNode(int x){
	struct node * newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->left = 0;
	newnode->right = 0;

	return newnode;
}

struct node * CreateBST(struct node * nn, int data) {
	if(nn == 0) {
		nn = CreateNode(data);
		return nn;
	}
	else if(data < nn->data){
		nn->left = CreateBST(nn->left, data);
	}
	else if(data > nn->data){
		nn->right = CreateBST(nn->right, data);
	}
	return nn;
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
	root = CreateBST(root, 50);
	CreateBST(root, 30);
	CreateBST(root, 70);

	printf("Inorder: ");
	Inorder(root);

	getch();

}