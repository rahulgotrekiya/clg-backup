#include<stdio.h>
#include<conio.h>
#define size 100
int * arr;	// global dynamic arr
int n;	// global size
// udf
void insertele(int pos, int ele) {
	int i;

	arr = (int *)ralloc(arr, (n+1) * sizeof(int));

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

void travarsal(){
	int i;
	for(i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
}
void updateele(int pos, int ele){
	arr[pos] = ele;
	travarsal();
}
int search(int ele){
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] == ele)
			return i;
	}
	return -1;
}
void Menu() {
	printf("\n1. Insert at pos");
	printf("\n2. Delete at pos");
	printf("\n3. Update at pos");
	printf("\n4. Search at pos");
	printf("\n5. Traversal at pos");
	printf("\n6. Exit");

}
void main() {
	int ch, i, pos, ele;
	clrscr();

	printf("Enter no of elements: \n");
	scanf("%d", &n);

	arr = (int *) malloc(n * sizeof(int));

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
				travarsal();
				break;
			case 3:
				printf("\nEnter position: ");
				scanf("%d", &pos);
				printf("\nEnter new element: ");
				scanf("%d", &ele);
				updateele(pos, ele);
				break;        Svvvv
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
				travarsal();
				break;
			case 6:
				clrscr();
				gotoxy(35, 12);
				printf("Thank You !!");
				getch();
				break;
			default:
				printf("\n\n Wrong Choice !");
		}

	} while(ch!=6);
	getch();
}