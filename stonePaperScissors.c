// Editor:- Aditya Tiwari
// Date:- 01/09/2022
// linkedIn:-linkedin.com/in/aditya-tiwari-512145184

/*
                                                Description of the game:-


This is a game of stone , papers , scissors which we used to play in our childhood
Rules where you have to choose out of these three( rock, paper , scissors ) and other
person has to counterfeit you by again choosing any one of these at the same time

rock cuts scissors
scisssors cuts paper
paper wraps rock
and so on.
*/

// essential libraries

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{

    printf("\n--------------------STARTING--------------------\n");

    printf("\nEnter limit of the game:- ");
    int limit;
    scanf("%d", &limit);

    // tracking scores and limit of the game
    int gameCount = 0;
    int playerScore = 0;
    int computerScore = 0;

    // execution of the game
    while (1)
    {

        //  validity of the number of times game has to played
        if (gameCount == limit)
        {
            break;
        }

        int myInput;

        printf("\n\nChoose from the folowing:-\n\n");
        printf("0. ROCK\n");
        printf("1. PAPER\n");
        printf("2. SCISSORS\n");

        printf("\n\nEnter a number :- ");
        scanf("%d", &myInput);

        // computer input
        srand(time(NULL));
        int computerInput = rand() % 3;

        // checking for validity of the input taken
        if (myInput < 0 || myInput > limit)
        {
            printf("Invalid choice!!\n");
            printf("Try Again!!\n");
            continue;
        }

        // logic done

        if (myInput == 0)
        {
            if (computerInput == 0)
            {
                playerScore += 1;
                computerScore += 1;
            }
            else if (computerInput == 1)
            {
                computerScore += 1;
            }
            else
            {
                playerScore += 1;
            }
        }
        else if (myInput == 1)
        {
            if (computerInput == 0)
            {
                playerScore += 1;
            }
            else if (computerInput == 1)
            {
                playerScore += 1;
                computerScore += 1;
            }
            else
            {
                computerScore += 1;
            }
        }
        else
        {
            if (computerInput == 0)
            {
                computerScore += 1;
            }
            else if (computerInput == 1)
            {
                playerScore += 1;
            }
            else
            {
                playerScore += 1;
                computerScore += 1;
            }

            // incrementing gamecount if all goes well
            gameCount += 1;
        }

        printf("\n\t\t\tYour Choice:- %d", myInput);
        printf("\n\t\t\tComputer Choice:- %d\n", computerInput);

        printf("\n\t\t\tPlayer Score:- %d", playerScore);
        printf("\n\t\t\tComputer Score:- %d", computerScore);
    }

    // results of the game like who WON
    if (playerScore > computerScore)
    {
        printf("\n\n\n\t\t\tYou Won\n");
    }

    else if (playerScore < computerScore)
    {
        printf("\n\n\n\t\t\tComputer Won\n");
    }

    else
    {
        printf("\n\n\n\t\t\ttied\n");
    }
    printf("\n--------------------ENDING----------------------\n\n");

    // to hold screen in exe file
    system("pause");
    return 0;
}