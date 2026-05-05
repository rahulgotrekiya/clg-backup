#include <stdio.h>  
  
/* Function to merge the subarrays of a[] */  
void merge(int a[], int lb, int mid, int ub)    
{    
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[10];
    while(i<=mid && j<=ub)
    {
    	if(a[i]<=a[j])
    	{
    		b[k]=a[i];
    		i++;
    		k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid) // remaining elements of j sublist are put into result
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k]; // copy all the elements of b to final array a
	}
}    
  
void mergeSort(int a[], int lb, int ub)  
{  
    if (lb < ub)   
    {  
        int mid = (lb + ub) / 2;  
        mergeSort(a, lb, mid);  
        mergeSort(a, mid + 1, ub);  
        merge(a, lb, mid, ub);  
    }  
}  
  
/* Function to print the array */  
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}  
  
int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17, 40, 42 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements  - \n");  
    printArray(a, n);  
    mergeSort(a, 0, n - 1);  
    printf("After sorting array elements  - \n");  
    printArray(a, n);  
    return 0;  
}  
