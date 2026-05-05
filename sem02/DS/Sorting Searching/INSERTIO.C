#include<stdio.h>
#include<conio.h>
#define size 5
int arr[size];
void insertionSort(int arr[]);
void display(int arr[]);
void main()
{
	int i;
	clrscr();
	for(i=0;i<size;i++){
		printf("\n Enter Element : ");
		scanf("%d",&arr[i]);
	}
	printf("\n Before Sorting : ");
	display(arr);
	insertionSort(arr);
	printf("\n After Sorting : ");
	display(arr);
	getch();
}
void insertionSort(int arr[])
{
	int temp,i,j;
	for(i=1;i<size;i++)
	{
		temp = arr[i];
		j = i-1;
		while(j>=0 && arr[j] > temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
void display(int arr[])
{
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
}