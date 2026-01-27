/*
	WAP of Array which takes the size of arry form user and then insert
	each value and also counts the how many times it repeats the value
	Date: 10/07/2025
	Author: Rahul Gotrekya
*/
#include<stdio.h>
#include<conio.h>
/*
void InsertArray(int arr[], int size){
	int size
	printf("\nEnter size of an array(<=50) : ");
	scanf("%d", &size);
	printf("\nEnter %d element: ", size);
	ReadArray(arr, size);
	printf("\nElement of array : ");
	PrintArray(arr, size);
}

int IsRepeat(int arr[], int rep[], int size, int ele) {
	int i, j;
	for(i = 0; i < size; i++){
		rep[i] = -1;
	}
	for(i = 0; i < size; i++){
		if(rep[i] != 0)
			int count = 1;
			for(j = i + 1; j < size; j++) {
				if(arr[i] == arr[j]) {
					count++;
					rep[j] = 0;
				}
			}
			rep[i] = count;
		}
	}
}
void freq(int arr[], rep[], int n){
	printf("\nEnter Repeated Element: ");
	for(int i = 0; i < n; i++) {
		if(rep[i] != 0){
			printf("\n%d is repeated %d times", arr[i], rep[i]);
		}
	}
} */
void coutele(int arr[], int size) {
	int i, j;
	for(i = 0; i < size; i++){
		int count =1;
		if (arr[i]!=) {
		 for(j = i+1; j < size; j++){
			if(arr[i] == arr[j])
			{
				count++;
				arr[j]=0;
			}
			}
		 printf("\n%d = %d times", arr[i], count);
		}
	}
}

void ReadArray(int arr[], int size) {
	int i ;
	for(i = 0; i < size; i++){
		printf("\nArray[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void PrintArray(int arr[], int size) {
	int i ;
	printf("\n");
	for(i = 0; i < size; i++){
		printf("%4d", arr[i]);
	}
}
	void menu() {
	printf("\n1. Insert in array");
	printf("\n2. How may time Value repeats in array");
	printf("\n0. Exit\n");
}
void main() {
	int arr[1], size, ch, ele, ans, arr2[100], fre[100];
	do {
		clrscr();
		menu();
		scanf("%d", &ch);
		switch(ch){
			case 1:
				do {
					clrscr();
					printf("\nEnter size of an array : ");
					scanf("%d", &size);
					if(size < 1) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1);
				printf("\nEnter %d element: ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				getch();
			break;
			case 2:

				do {
					clrscr();
					printf("\nEnter size of an array : ");
					scanf("%d", &size);
					if(size < 1) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1);
				printf("\nEnter %d element: ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				freq(arr2, fre, size);
			       */
				getch();
			case 0:	// Exit
				clrscr();
				gotoxy(35, 12);
				printf("Thank You!!!");
				getch();
			break;
			default:
				printf("\n\n Wrong Choice !");
		}
	} while(ch != 0);
	getch();
}