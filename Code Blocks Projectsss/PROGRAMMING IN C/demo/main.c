#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
char sign,answer;

do
  {
  printf("Enter your choice of operator\n");
  printf("+ for addition\n");
  printf("- for subtraction\n");
  printf("* for multiplication\n");
  printf("/ for division\n");
  scanf("%c",&sign);
  printf("Enter two numbers\n");
  scanf("%f %f",&a,&b);
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
printf("Do you want to continue?(y or no):");
 scanf(" %c",&answer);
  }while(answer!='n');
}
