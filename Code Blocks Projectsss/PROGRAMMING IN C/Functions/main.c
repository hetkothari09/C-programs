#include <stdio.h>
#include <conio.h>

double cube (double num){
double result = num*num*num;
return result ;
}

void main()
{
    printf("Answer: %f",cube (3.0))   ;
    return 0;
}
