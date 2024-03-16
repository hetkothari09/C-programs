#include <stdio.h>
#include <stdlib.h>

void display(int arr[],int n){

/** Code for Traversal **/
for(int i = 0; i < n; i++ )
{
    printf("%d ",arr[i]);
}
printf("\n");
}

 int indexInsertion(int arr[],int size,int element,int capacity,int index){

    /** Code for Insertion **/
    if(size>=capacity)
    {
        return -1;   // indicates the insertion was not successful
    }
    for(int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index]=element;
    return 1;
 }


int main()
{
   int arr[100]={7,8,12,27,88};
   int size = 5;    // Size of the array
   int index = 3;   // Where you want to insert the array
   int element =45; // The element that you want to insert
   display(arr,size);
   indexInsertion(arr,size,element,100,index); // 100 = capacity of the array
   size += 1;
   display(arr,size);

   return 0;
}
