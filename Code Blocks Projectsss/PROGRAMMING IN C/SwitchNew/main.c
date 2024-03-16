#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int ch,a,b,c ;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    label:
    printf("\Menu");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");

    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);

    switch(ch){
case 1:
    c=a+b;
    printf("Result of addition is : %d",c);
    break;

case 2:
    c=a-b;
    printf("Result of subtraction is : %d",c);
    break;

case 3:
    c=a*b;
    printf("Result of Multiplication is : %d",c);
    break;

case 4:
    c=a/b;
    printf("Result of Division is : %d",c);
    break;

case 5:
        exit(0);

default:
    printf("Invalid Option");
    }
    return 0;
}

//Wrtie a c program to read a character form the user to display its ascii value
