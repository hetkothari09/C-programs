#include <stdio.h>
#include <conio.h>

int main()

{
    char line [255];
    FILE * fpointer = fopen("empolyees.txt","r");

    fgets(line, 255, fpointer );
    printf("%s",line);


    return 0;
}

