#include <stdio.h>
#include <conio.h>

int main()
{
   int principal;
   float rate;
   int years;

   printf("Enter the Principal Value : ");
   scanf("%d",&principal);
   printf("Enter the Rate of Interest : ");
   scanf("%f",&rate);
   printf("Enter the Number of Years : ");
   scanf("%d",&years);

   int simpleInterest = (principal*rate*years/100);
   printf("\nThe value of the simple interest is : %d \n",simpleInterest);

    return 0;
}
