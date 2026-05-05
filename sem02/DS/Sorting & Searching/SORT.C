#include<stdio.h>
#include<conio.h>
#define size 5
int arr[size];

void BubbleSort(int arr []);
void InsertionSort(int arr []);
void display(int arr []);

void QuickSort(int arr[], int lb, int ub);
int Partition(int arr[], int lb, int up);

void SelectionSort(int arr[]);

void main() {
	int i;
	clrscr();
	for(i=0 ;i<size; i++) {
		printf("\nEnter Element:");
		scanf("%d", &arr[i]);
	}
	printf("\nUnsorted: ");
	display(arr);

	BubbleSort(arr);
	printf("\nBubble sort: ");
	display(arr);

	InsertionSort(arr);
	printf("\nInsertion sort: ");
	display(arr);

	QuickSort(arr, 0, size-1);
	printf("\nQuick sort: ");
	display(arr);


	SelectionSort(arr);
	printf("\nSelection sort: ");
	display(arr);


	getch();
}

void display(int arr[]) {
	int i;
	for(i=0 ;i<size; i++) {
		printf("%d ", arr[i]);
	}
}

void BubbleSort(int arr[]) {
	int i, j, temp;
	for(i=0; i<size-1; i++) {
		for(j=0; j<size-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void InsertionSort(int arr[]){
	int i, j, temp;
	for(i=1; i<size; i++) {
		temp = arr[i];
		j = i-1;
		while(j >= 0 && arr[j] > temp) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

void QuickSort(int arr[], int lb, int ub){
	int end;
	if(lb < ub) {
		end = Partition(arr, lb, ub);
		QuickSort(arr, lb, end-1);
		QuickSort(arr, end+1, ub);
	}
}

int Partition(int arr[], int lb, int up){
	int pivot, start, end, temp;
	pivot = arr[lb];
	start = lb;
	end = up;
	while(start < end) {
		while(arr[start] <= pivot) start++;
		while(arr[end] > pivot) end--;
		if(start < end){
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
	}
	temp = arr[lb];
	arr[lb] = arr[end];
	arr[end] = temp;

	return end;
}


void SelectionSort(int arr[]){
	int i, j, min, temp;
	for(i=0; i<size-1; i++){
		min = i;
		for(j=i+1; j<size; j++){
			if(arr[j]<arr[min]) min = j;
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;

	}
}