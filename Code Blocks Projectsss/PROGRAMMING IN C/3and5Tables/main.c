#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   int num1=3,count=1;
   int num2=5,count2=1;


   printf("\nFirst 10 multiples of 3 are : \n\n");
   while (count<=10){
    printf("%d x %d = %d\n",num1,count,(num1*count));
    count++;
   }
   printf("\nFirst 10 multiples of 5 are : \n\n");
   while (count2<=10){
    printf("%d x %d = %d\n", num2,count2,(num2*count2));
    count2++;
   }
    return 0;
}
