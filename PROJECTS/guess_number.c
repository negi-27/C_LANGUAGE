#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    
    srand(time(0));

    int random_number = (rand() % 100) +1;
    int no_of_guess = 0;
    int guessed_number;

    do
    {
       printf("Guess the number = ");
       scanf("%d",&guessed_number);

       if(guessed_number > random_number)
       {
        printf("Guess lower number\n");
       }
       else if("guess_number < random_number")
       {
        printf("Guess higher number\n");
       }
       else
       {
        printf("HURRAY YOU MADE IT");
       }

       no_of_guess++;
    }
    while(guessed_number != random_number);

    printf("You guessed number in %d attempts",no_of_guess);

    return 0;
}