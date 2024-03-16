#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int arr[20];

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\n Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements in the Array are: \n");
        for (i=0;i<n;i++){
            printf("Arr[%d] = %d\n",i,arr[i]);
        }
    return 0;
}
