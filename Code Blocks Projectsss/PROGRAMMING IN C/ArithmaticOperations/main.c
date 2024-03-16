#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
char sign,answer;

do
  {
  printf("\t------MENU------\t\n\n");
  printf("\t+ for addition\n");
  printf("\t- for subtraction\n");
  printf("\t* for multiplication\n");
  printf("\t/ for division\n");

  printf("\n\nEnter your choice of operator : ");
  scanf(" %c",&sign);

  printf("Enter two numbers : ");
  scanf(" %f %f",&a,&b);


  switch(sign)
 {
    case '+': c=a+b;
    printf("The addition is %f\n",c);
    break;

    case '-': c=a-b;
    printf("The subtraction is %f\n",c);
    break;

    case '*': c=a*b;
    printf("The product is %f\n",c);
    break;

    case '/': c=a/b;
    printf("The division is %f\n",c);
    break;
 }
        printf("\nDo you want to continue?(y or n): ");
        scanf(" %c",&answer);
  }while(answer!='n');
}

