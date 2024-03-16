#include <stdio.h>
#include <conio.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf(" age :%p\n gpa : %p\n grade : %p", &age,&gpa,&grade);

    return 0;
}
