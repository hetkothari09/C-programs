#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n){

    int i;
    int j;
    int minIndex;

    for(i=0; i<n-1; i++){
        minIndex = i;
            for(j=i+1; j<n; j++){
                if(arr[j] < arr[minIndex])
                    minIndex = j;
            }

            swap(&arr[minIndex], &arr[i]);
    }
}

void printArray(int arr[], int size){
    int i;

    for(i=0; i<size; i++){
        printf("%d\t",arr[i]);
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
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printf("\n\nSorted Array:\n");
    printArray(arr,n);
    return 0;
}
