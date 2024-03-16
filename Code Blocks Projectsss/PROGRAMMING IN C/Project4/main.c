#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int a ;
    int b ;
    int c;
    char d[20];

    printf("Enter your name : ");
    scanf("%s", &d);
    printf("\nI Heard that your name is :%s",d);

    printf("\nEnter a number : ");
    scanf("%d",&a);

    printf("\nEnter a second Number : ");
    scanf("%d",&b);

    c = a+b;
    printf("\nThe total of both the numbers is : %d",c);


    if (c== 10){
        printf ("\nHi this is a test ");
    }
    else {
        printf("\nPls bring the output to 10 , if u wanna get a different message ");
    }

    getch();
}
