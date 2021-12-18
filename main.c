// guess number using c
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int input_number, i = 0, random_number;
    random_number=rand()%100+1;
    printf("Guess the number. Please Enter a number(1-100). You Will get 10 Chance Only:\t");
    scanf("%d", &input_number);
    i++;
    while (input_number != random_number)
    {
        if (input_number == random_number)
        {
            printf("\nCongratulation!You Guess The Right Number. You Guesses The Right Number in %d Time.\n", i);
        }

        printf("Opps!You Guess The Worng Number.\n");

        if (input_number > random_number)
        {
            printf("You Entered A Greater Number.\n");
        }
        else if (input_number < random_number)
        {
            printf("You Entered A Smaller Number.\n");
            // printf("Random Number:\t%d.\n",random_number);
        }
        for (i; i > 9;)
        {
            printf("\nYou Entered Wrong Number 10 Times. Game Over! Better Luck Next Time.\n");
            goto end;
        }
        printf("Guess the number. Please Enter a number(1-100):\t");
        scanf("%d", &input_number);
        i++;
    }
    if (input_number == random_number)
    {
        printf("\nCongratulation!You Guess The Right Number. You Guesses The Right Number in %d Time.\n", i);
    end:
        printf("Thanks For Playing, Please Come Again.");
    }
}