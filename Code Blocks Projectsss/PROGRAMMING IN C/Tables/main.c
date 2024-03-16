#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,count = 1;
    int num2=15;
    int count2=1;


    while (count2<=10){
    printf("\t%d x %d = %d\n",num2,count2,(num2*count2));
    count2 ++;
            }
    do{
    printf("\n\nEnter a number:\n");
    scanf("%d", &num);

    printf("\nMultiplication table for %d is:\n\n", num);

    while (count <= 10){
    printf("%d x %d = %d\n",num ,count,(num*count));
    count++;

   }

}
    return 0;
}
