#include<stdio.h>
#include<conio.h>
#define size 5
int arr[size];
void display(int arr[]);
void quickSort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
void main()
{
	int i;
	clrscr();
	for(i=0;i<size;i++)
	{
		printf("\n Enter Element : ");
		scanf("%d",&arr[i]);
	}
	printf("\n Before Quick Sorting");
	display(arr);
	quickSort(arr,0,size-1);
	printf("\n After Quick Sorting");
	display(arr);
	getch();
}
void quickSort(int arr[],int low,int high)
{
	int end;
	if(low < high){
		end = partition(arr,low,high);
		quickSort(arr,low,end-1);
		quickSort(arr,end+1,high);
	}
}
int partition(int arr[],int low,int high)
{
	int pivot,start,end,temp;
	pivot = arr[low];
	start = low;
	end = high;
	while(start<end){
		while(arr[start] <= pivot){
			start++;
		}
		while(arr[end] > pivot){
			end--;
		}
		if(start < end){
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
	}
	temp = arr[low];
	arr[low] = arr[end];
	arr[end] = temp;

	return end;
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