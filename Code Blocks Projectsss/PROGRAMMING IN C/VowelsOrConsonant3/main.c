#include <stdio.h>
#include <conio.h>

int main()
{
    //SWITCH STATEMENT

    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);

   switch(ch)
    {
        case 'a':
            printf("\nIt is a Vowel!\n");
            break;
        case 'e':
            printf("\nIt is a Vowel!\n");
            break;
        case 'i':
            printf("\nIt is a Vowel!\n");
            break;
        case 'o':
            printf("\nIt is a Vowel!\n");
            break;
        case 'u':
            printf("\nIt is a Vowel!\n");
            break;

        case 'A':
            printf("\nIt is a Vowel!\n");
            break;
        case 'E':
            printf("\nIt is a Vowel!\n");
            break;
        case 'I':
            printf("\nIt is a Vowel!\n");
            break;
        case 'O':
            printf("\nIt is a Vowel!\n");
            break;
        case 'U':
            printf("\nIt is a Vowel!\n");
            break;
        default:
            printf( "\nIt is a Consonant!\n");
    }

    return 0;
}
