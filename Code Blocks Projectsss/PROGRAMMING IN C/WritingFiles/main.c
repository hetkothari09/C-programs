#include <stdio.h>
#include <conio.h>

int main()
{
   FILE * fpointer = fopen("employees.txt","a");

   fprintf(fpointer , "\nGary - Customer Service");



    fclose(fpointer);
    return 0;
}
