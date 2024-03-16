#include <stdio.h>
#include <conio.h>

int main()
{
    int a;

    printf("Enter a Number : ");
    scanf("%d",&a);

 //If the number is perfectly divisible by 2 the number is even.

 if (a % 2 == 0){
    printf("\nThe number is Even!\n");
 }else {
    printf("\nThe number is Odd!\n");
 }
    return 0;
}
