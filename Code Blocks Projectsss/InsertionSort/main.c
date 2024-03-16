#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insertionSort(int arr[],int n){

    int i;
    int j;
    int key;

    for(i=1; i<n; i++){
        key = arr[i];
        j = i-1;

    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j = j-1;
    }
    arr[j+1] = key;
}
}

void printArray(int arr[], int size)
    {
        int i;
        for(i=0; i<size; i++){
            printf("%d  ",arr[i]);
        }
        printf("\n");
    }

int main()
{
    int arr[30];
    int n;
    int i;

    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }

    insertionSort(arr,n);
    printf("\n\nSorted Array:\n");
    printArray(arr,n);
    return 0;
}
