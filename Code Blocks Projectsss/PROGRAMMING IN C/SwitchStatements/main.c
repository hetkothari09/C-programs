#include <stdio.h>
#include <conio.h>

int main()
{
    char grade;

    printf("ENTER YOUR GRADE OF EXAM : ");
    scanf("%c",&grade);

    switch(grade){
    case 'A':
        printf("\nYou did Excellent !\n");
    break;
    case 'B':
        printf("\nYou did Good !\n");
    break;
    case 'C':
         printf("\nYou did Ok!\n");
    break;
    case 'D':
         printf("\nYou did Poor !\n");
    break;
    case 'F':
         printf("\nYou FAILED !\n");
    break;
    default:
        printf("\nInvalid Grade !\n");

    }
    return 0;
}
