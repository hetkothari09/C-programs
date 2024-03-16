#include <stdio.h>
#include <conio.h>

int main()
{
    float per;

    printf("Enter your Percentage: ");
    scanf("%f",&per);

    if(per>=75)
    {
        printf("\nDistinction\n");

    }else if (per>=60 && per<75)
    {
        printf("First class \n");
    }else if (per>=55 && per<60)
    {
        printf("Higher Second Class");
    }else if (per>=50 && per<55)
    {
        printf("Second class \n");
    }else if (per>=40 && per<50)
    {
        printf("Passed\n");
    }else {
    printf("You failed :( ");
    }


 return 0;
}
