/*
	Incomplete!!
*/
#include<stdio.h>
#include<conio.h>
#define size 100
int arr[size], n;	// global array
int arr2[size];
int arr3[size];

// udf

void insertele(int pos, int ele) {
	int i;

	n++;	// 6
	for(i= n-1; i >= pos; i--) {
		arr[i] = arr[i-1];	// a[5] = a[4];
	}
	arr[pos] = ele;
}
void deleteele(int pos){
	int i;
	if(pos < 0 || pos >= size){
		printf("\nInvalid position !");
		return;
	}
	for(i = pos; i < n-1; i++){
		arr[i] = arr[i+1];
	}
	n--;
}

void travarsal(int arr[], int n){
	int i;
	for(i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
}

void updateele(int pos, int ele){
	arr[pos] = ele;
	travarsal(arr, n);
}

int search(int ele){
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] == ele)
			return i;
	}
	return -1;
}

void reverseArray(){
	int i;
	for(i=n;i>=0;i--){
		arr2[n-i]=arr[i-1];
	}
	travarsal(arr2, n);

}               /*

void mergeArrays() {
	int arr3[n*2], i;
	for(i=0;i<n;i++){
		arr3[i]=arr[i];
	}
	for(i = 0; i < n2; i++) {
	if(n < size) {
	    arr[n] = arr2[i];
	    n++;
	}
    }

	for(i=1;i<=sizeof(arr3

}
		  */
void mergeArrays() {
	int n2, i, m=0;
	printf("\nEnter size of second array: ");
	scanf("%d", &n2);
	printf("Enter elements of second array: \n");
	for(i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
	}

	for(i = 0; i < n; i++) {
		arr3[i] = arr[i];
		m++;
	}
	for(i = 0; i < n2; i++) {
		arr3[m] = arr2[i];
		m++;
	}
	printf("\nArrays Merged:\n");
	travarsal(arr3, m);
}

void splitArr(int pos){
	int m = 0,i;



	for(i = pos; i < n; i++) {
		arr2[m] = arr[i];
		m++;
	}
	printf("\nFirst Part: ");
	travarsal(arr, pos);
	printf("\nSecond Part: ");
	travarsal(arr2, m);

}

void splitArr2(int pos){
	int i;

	if(pos < 0 || pos >= n) {
		printf("Invalid position!");
		return;
	}

	printf("\nFirst Part: ");
	for(i = 0; i <= pos; i++) {
		printf("%d ", arr[i]);
	}

	printf("\nSecond Part: ");
	for(i = pos + 1; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

void Menu() {
	printf("\n1. Insert at pos");
	printf("\n2. Delete at pos");
	printf("\n3. Update at pos");
	printf("\n4. Search");
	printf("\n5. Traversal");
	printf("\n6. Reverse an array");
	printf("\n7. Merge two arrays");
	printf("\n8. Split array");
	printf("\n0. Exit");

}


/*
void displayArr(int arr[]){
	int i;
	for(i = 0; i < n; i++) {
		printf("\n%d", arr[i]);
	}
}
*/

void main() {
	int ch, i, pos, ele;
	clrscr();

	printf("Enter no of elements: \n");
	scanf("%d", &n);
	printf("Enter array: \n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	Menu();
	do {
		printf("\n \nEnter Your choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1:
				// Scan pos, new elescanf("%d", &ch);
				printf("\nEnter position: ");
				scanf("%d", &pos);
				printf("\nEnter new element: ");
				scanf("%d", &ele);
				insertele(pos, ele);
				break;
			case 2:
				printf("\nEnter position: ");
				scanf("%d", &pos);
				deleteele(pos);
				travarsal(arr, n);
				break;
			case 3:
				printf("\nEnter position: ");
				scanf("%d", &pos);
				printf("\nEnter new element: ");
				scanf("%d", &ele);
				updateele(pos, ele);
				break;
			case 4:
				printf("\nFind Element: ");
				scanf("%d", &ele);
				if(search(ele) != -1){
					printf("\nElement found at index: %d", search(ele));
				} else {
					printf("\nElement not found in array!");
				}
				break;
			case 5:
				travarsal(arr, n);
				break;
			case 6:
				reverseArray();
				break;
			case 7:
				mergeArrays();
				break;
			case 8:
				printf("\nEnter position: ");
				scanf("%d", &pos);
				splitArr(pos);
				break;
			case 0:
			       //	clrscr();
			       //	gotoxy(35, 12);
			       //	printf("Thank You !!");
				exit(1);
				getch();
				break;
			default:
				printf("\n\n Wrong Choice !");
		}

	} while(ch!=6);
	getch();
}