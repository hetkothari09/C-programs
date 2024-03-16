#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int a=7,b=4,d=40,res;

    res=a&b;
    printf("The result of ANDing is %d ",res);

    res=a|b;
    printf("\nThe result of ORing is %d ",res);

    res=a^b;
    printf("\nThe result of XORing is %d ",res);

    res=d<<1;
    printf("\nThe left shift by 1 bit is %d ", res);

    res=d<<3;
    printf("\nThe left shift by 1 bit is %d ", res);

    res=(b>a)?b:a;
    printf("\nThe bigger number is %d ",res);

    getch();
}
