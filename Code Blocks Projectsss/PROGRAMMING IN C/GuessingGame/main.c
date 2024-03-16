#include <stdio.h>
#include <conio.h>

int main()
{
       int secretNumber=5;
       int guess;
       int guessCount =0;
       int guessLimit=3;
       int outOfGuesses=0;
       char o;
       char ans;

      label:
       while (guess != secretNumber && outOfGuesses == 0){
        if (guessCount < guessLimit){
       printf("Enter a number u guess is a secret number: ");
       scanf("%d", &guess);
       guessCount++;
        }else {
        outOfGuesses =1;
        }
       }
       if (outOfGuesses==1){
        printf("\nOut of Guesses !\n");
       }else{
       printf("\nYou win !\n");
       }



       printf("do u want to continue? (y/n): ");
       scanf(" %c",&ans);
       if (ans=='Y' || ans=='y'){
            goto label;
        }else {
        printf("---GoodBye---");
        exit(0);
        }



        return 0;
}


/*      while(answer=='Y'|| answer == 'y'){
        goto label;
       }

 */

  //     }while (answer!='n'|| answer!='N');




  /*     if (answer=='y'|| answer=='Y'){
        goto label;

       }else {
       printf("OK Have a GooD DaY !");
       }
*/

