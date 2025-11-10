/*
		WAP to perform operation of 1 D Array
		Author: Rahul Gotrekiya
		Date: 08/07/2025
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 50
int BinarySearch(int arr[], int size, int ele) {
	int low=0, high = size -1, mid;
	while(low <= high) {
		mid = (low + high)/ 2;
		if(arr[mid] == ele)
			return mid;
		else if (arr[mid] < ele)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
int LinearSearch(int arr[], int size, int ele) {
	int i;
	for(i = 0; i < size; i++){
		if(arr[i] == ele)
			return i;
	}
	return -1;
}
void SelectionSort(int arr[], int size) {
	int i, j, tmp, MinIndex;
	for(i = 0; i < size-1; i++){
		MinIndex = i;
		for(j = i + 1; j < size; j++){
			if(arr[j] < arr[MinIndex])
				MinIndex = j;
		}
		tmp = arr[i];
		arr[i] = arr[MinIndex];
		arr[MinIndex] = tmp;
	}
}
void BubbleSort(int arr[], int size) {
	int i, j, tmp;
	for(i = 0; i < size-1; i++){
		for(j = 0; j < size-1; j++){
		if(arr[j] > arr[j+1])  {
			tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = tmp;
			}
		}
	}
}
int DeleteElement(int arr[], int size, int pos) {
	int i;
	if(pos < 0 || pos >= size){
		printf("\nInvalid Position !");
		return;
	}
	for(i = pos; i < size - 1; i++){
		arr[i] = arr[i+1];
	}
	return	--size;
}
void InsertElement(int arr[], int size, int ele, int pos) {
	// 1 2 3 4 5
	// 1 2 3 8 4 5
	int i;
	for(i = size; i > pos; i--){
		arr[i] = arr[i-1];
	}
	arr[pos] = ele;
	size++;
}
int Minimum(int arr[], int size) {
	int min=arr[0];
	int i;
	for(i = 0; i < size; i++){
		if(min >= arr[i])
		min = arr[i];
	}
	return min;
}
int Maximum(int arr[], int size) {
	int max=arr[0];
	int i;
	for(i = 0; i < size; i++){
		if(max <= arr[i])
		max = arr[i];
	}
	return max;
}
int Sum(int arr[], int size) {
	int sum=0,i ;
	for(i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	return sum;
}
float Avarage(int arr[], int size) {
	int sum=0,i ;
	for(i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	return (float)sum/size;
}
void Menu(){
	printf("\n1. Sum");
	printf("\n2. Average");
	printf("\n3. Minimum");
	printf("\n4. Maximum");
	printf("\n5. Insert Element");
	printf("\n6. Delete Element");
	printf("\n7. Bubble Sort");
	printf("\n8. Selection Sort");
	printf("\n9. Linear Search");

	printf("\n10. Binary Search");
	printf("\n11. Exit");
	printf("\n\nEnter your choice : ");


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
void main() {
	int arr[SIZE], size, ch, res, pos, ele;
	do {
		clrscr();
		Menu();
		scanf("%d", &ch);
		switch(ch){
			case 1: 	// Sum
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d element: ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				printf("\nSum of all elements of arry : %d ", Sum(arr,size));
				getch();
			break;
			case 2:         // Avarage
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d element : ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				printf("\nSum of all elements of arry : %g ", Avarage(arr,size));
				getch();
			break;
			case 3:		// Minimum
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d element : ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				printf("\nMinimum number in elements of arry : %d ", Minimum(arr,size));
				getch();
			break;
			case 4:         // Maximum
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d element : ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				printf("\nMaximum number in elements of arry : %d ", Maximum(arr,size));
				getch();

			break;
			case 5:         // Insert
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d elements : ", size);
				ReadArray(arr, size);
				printf("\nElement of Position : ");
				scanf("%d", &pos);
				printf("\nEner elements: ");
				scanf("%d", &ele);
				printf("\n\nElement of array are : ");
				PrintArray(arr, size);
				InsertElement(arr, size, ele, pos);
				size++;
				printf("\n\nElements of arry after Insertion are : ");
				PrintArray(arr,size);
				getch();
			break;
			case 6:		// Delete
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d elements : ", size);
				ReadArray(arr, size);
				printf("\nElement of Position : ");
				scanf("%d", &pos);
				printf("\n\nElement of array are : ");
				PrintArray(arr, size);
				printf("\n\nElements of arry after Deletion are : ");
				PrintArray(arr,	DeleteElement(arr, size, pos));
				getch();
			break;
			case 7:		// Bubble
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d elements : ", size);
				ReadArray(arr, size);

				printf("\n\nElement of array are : ");
				PrintArray(arr, size);

				printf("\n\nArray after Bubble Sort : \n");
				BubbleSort(arr, size);
				PrintArray(arr, size);
				getch();
			break;
			case 8: 	// Selection sort
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d elements : ", size);
				ReadArray(arr, size);

				printf("\n\nElement of array are : ");
				PrintArray(arr, size);

				printf("\n\nArray after Selection Sort : \n");
				SelectionSort(arr, size);
				PrintArray(arr, size);
				getch();

			break;
			case 9:         // Linear Search
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d element: ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				printf("\nEnter Element for Linear Search : ");
				scanf("%d", &ele);
				res = LinearSearch(arr, size, ele);
				if(res != -1) {
					printf("\nElements found at index : %d ", res);
				} else {
					printf("\nElements Not found in Array");
				}
				getch();

			break;
			case 10:	// Binary Search
				do {
					clrscr();
					printf("\nEnter size of an array(<=50) : ");
					scanf("%d", &size);
					if(size < 1 || size > 50) {
						printf("\nPlease Enter correct value of size");
						getch();
					}
				} while(size < 1 || size > 50);
				printf("\nEnter %d element: ", size);
				ReadArray(arr, size);
				printf("\nElement of array : ");
				PrintArray(arr, size);
				printf("\nEnter Element for Binary Search : ");
				scanf("%d", &ele);
				res = BinarySearch(arr, size, ele);
				if(res != -1) {
					printf("\nElements found at index : %d ", res);
				} else {
					printf("\nElements Not found in Array");
				}
				getch();

			break;
			case 11:	// Exit
				clrscr();
				gotoxy(35, 12);
				printf("Thank You!!!");
				getch();
			break;
			default:
				printf("\n\n Wrong Choice !");
		}
	} while(ch != 11);
	getch();
}