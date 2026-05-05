#include<stdio.h>
#include<conio.h>
#define size 5
int arr[size];
void bubbleSort(int arr[]);
void display(int arr[]);
void main()
{
	int i;
	clrscr();
	for(i=0;i<size;i++){
		printf("\n Enter Element : ");
		scanf("%d",&arr[i]);
	}
	printf("\n Before Sorting : \n");
	display(arr);
	bubbleSort(arr);
	printf("\n After Sorting : \n");
	display(arr);
	getch();
}
void bubbleSort(int arr[])
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
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