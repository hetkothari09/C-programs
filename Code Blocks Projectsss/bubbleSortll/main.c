#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n){
    int i,j;

        for(i=0; i<n-1; i++)
            for(j=0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j], &arr[j+1]);
                }
            }
}

void printArray(int arr[], int size){
    int i;
        for(i=0; i<size; i++){
            printf(" %d",arr[i]);
        }
        printf("\n");
}


int main()
{
    int arr[20];
    int n;
    int i;

    printf("Enter the number of elements:");
    scanf("%d",&n);
        for(i=0; i<n; i++){
            printf("Enter the elements:");
            scanf("%d",&arr[i]);
        }

    bubbleSort(arr,n);
    printf("\nSorted Array:\n");
    printArray(arr,n);
    return 0;
}


