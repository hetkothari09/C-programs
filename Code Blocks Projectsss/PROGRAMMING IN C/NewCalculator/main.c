#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c,ch,ans,answer,start,het,het1,again,newagain;  //,NumberOfGuess,number,guess;
    int num,count=1;
   // char start[20];
   // char answer[20];
     char name[50];
  printf("---------------------------");
  printf("\n\tWELCOME\n");
    printf("---------------------------");
  printf("\n\nEnter Your Name : ");
  scanf(" %s",&name);
  printf("HI ! Welcome %s to our Service!! ", name);
 printf("\n\nAre You Fine ?(Y/N): ");
 scanf(" %c",&answer);
 if (answer=='Y' || answer=='y'){
    printf("Good to hear ! :D");
 }else {
 printf("Sorry to Hear!");
 }

 /** printf("\nDo u want to Start : ");
 scanf (" %c",&start);
 if(start=='Y'|| start=='y'){
    goto label;
 }else {
 goto end;
 }
 **/

  label:
  printf("\n\nWelcome to Calculator Service !");
  printf("\n\nEnter 2 Numbers : ");
  scanf("%d%d",&a,&b);
  printf("\n\nMenu:");
  printf("\n1. Addition");
  printf("\n2. Subtraction");
  printf("\n3. Division");
  printf("\n4. Multiplication");
  printf("\n5. Exit");

  printf("\n\nEnter your choice : ");
  scanf(" %d",&ch);

  switch (ch){
   case 1:
    c=a+b;
    printf("Result of Addition is : %d",c);
        break;

   case 2:
    c=a-b;
    printf("Result of Subtraction is : %d",c);
        break;

   case 3:
    c=a/b;
    printf("Result of Division is : %d",c);
    break;

   case 4:
    c=a*b;
    printf("Result of Multiplication is : %d",c);
    break;

   case 5:
    exit(0);

   default:
    printf("Sorry Invalid Input !");
    break;

  }


 printf("\n\nDo you want to go to Tables app: ");
 scanf (" %c",&het);
 if(het=='Y' || het=='y'){
    goto table;
 }else{
 printf("Then do you want to goto Random Number Guessing Game : ");
 scanf(" %c",&newagain);
 if(newagain=='Y' || newagain=='y'){
    goto newlabel;
 }else {
 goto end;
 }
 }

end:

    printf("\nDo you want to run the Calculator again ? : ");
    scanf (" %c",&ans);

    if (ans=='Y' || ans=='y'){
        goto label;
    }
    else {
        printf("\n---GoodBye---\n");
        exit(0);
    }


table:
 printf("\n\nEnter a Number for its Multiplication Table : ");
 scanf (" %d",&num);

 while (count<=10){
    printf("\n%d x %d = %d",num,count,(num*count));
    count++;

 }

 printf("\n\nDo you want to run it Again? : ");
 scanf(" %c",&again);
 if(again=='Y'||again=='y'){
     goto table;
 }else {
 goto end;
 }

 /**
 newone:
printf("\n\nNow do u want to Go to Calculator : ");
scanf(" %c",&het1);
if (het1=='Y'|| het1=='y'){
    goto label;
}else {
goto end;
}

**/



 int number2;
  int guess;
  int NumberOfGuess;


  srand(time(0));
  number2 = rand()%100+1; // Generate random number between 1 and 100

  //printf("The number is : %d",number);

  //Keep running the loop until the number is guessed
newlabel:
  do{

    printf("Guess the Number between 1 and 100 : ");


    scanf(" %d",&guess);

    if (guess>number2){

        printf("\nLower Number Pleasee !\n");

    }else if (guess<number2){

        printf("\nHigher Number Pleasee !\n");

    }else {

     printf("\nYou guessed it in %d attempts \n",NumberOfGuess);

    }
  NumberOfGuess++;



}while (guess!=number2);



return 0;
}
