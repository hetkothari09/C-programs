#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1 ,num2, num3,num4;
    printf("Enter first number : ");
    scanf("%d",&num1);
     printf("Enter second number : ");
         scanf("%d",&num2);
      printf("Enter third number : ");
          scanf("%d",&num3);
       printf("Enter fourth number : ");
           scanf("%d",&num4);



           if (num1>num2 && num1>num3 && num1>num4){
            printf("The Greatest Number is : %d",num1);
           }else if (num2>num1 && num2>num3 && num2>num4){
               printf("The Greatest Number is : %d",num2);
           }else if (num3>num1 && num3>num2 && num3>num4){
              printf("The Greatest Number is : %d",num3);
           }else{
           printf("The Greatest Number is : %d",num4);
           }
               return 0;

           }

