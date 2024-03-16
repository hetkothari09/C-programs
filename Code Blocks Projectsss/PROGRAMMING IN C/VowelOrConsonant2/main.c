#include <stdio.h>
#include <conio.h>

int main()

{   // IF ELSE LADDER

    char a;
    printf("Enter an alphabet : ");
    scanf("%c",&a);

    if(a=='a' || a=='A'){
        printf("It is a vowel!");
    }else if (a=='e' || a=='E'){
        printf("It is a vowel!");
    }else if (a=='i'|| a=='I'){
        printf("It is a vowel!");
    }else if (a=='o'|| a=='O'){
        printf("It is a vowel!");
    }else if (a=='u'|| a=='U'){
        printf("\nIt is a vowel!\n");
    }else {
        printf("\nIt is a consonant!\n");
    }
    return 0;
}
