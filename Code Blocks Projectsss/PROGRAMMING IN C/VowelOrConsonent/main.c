#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //IF ELSE STATEMENT

    char a;

    printf("Enter an character : ");
    scanf("%c",&a);

    if (a=='a'|| a=='e'|| a=='i'|| a=='e'|| a=='u'|| a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("\nIt is a vowel!\n");
    }else {
    printf("\nIt is a consonant!\n");
    }
    return 0;
}
