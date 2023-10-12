#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n=3;
    char *player[34];
    int chance,move;
    srand(time(NULL));
    int cp = 0;
    int pp = 0;

    printf("\nWelcome to Rock, Paper and Scissors\n\n");
    printf("RULES :\nEnter \"1\" for ROCK , \"2\" for PAPER , \"3\" for SCISSORS. \nEach player gets 3 rounds. \n\n");
    printf("Please enter your name\n");
    scanf("%s", player);
    printf("\nPLAYER 1 : %s\n", player);
    printf("PLAYER 2 : COMPUTER\n\n");
    getchar();

    for (int i = 0; i < 3; i++)
    {
        printf("PLAYER's turn :\n");
        scanf("%d", &chance);

        if (chance == 1)
        {
            printf("The PLAYER chose ROCK\n");
        }
        else if (chance == 2)
        {
            printf("The PLAYER chose PAPER\n");
        }
        else if (chance == 3)
        {
            printf("The PLAYER chose SCISSORS\n");
        }
        else
        {
            printf("Invalid command!!!\n");
        }
        getchar();

        move = rand() % n;

        printf("COMPUTER's turn : %d\n", move);

        if (move == 0)
        {
            printf("The COMPUTER chose ROCK\n\n");
        }
        else if (move == 1)
        {
            printf("The COMPUTER chose PAPER\n\n");
        }
        else if (move == 2)
        {
            printf("The COMPUTER chose SCISSORS\n\n");
        }

        if (chance == 1)
        {
            if (move == 0)
            {
                printf("~~ROUND DRAW~~\n\n");
            }
            else if (move == 1)
            {
                printf("~~THE COMPUTER WINS THE ROUND~~\n\n");
                cp++;
            }
            else if (move == 2)
            {
                printf("~~THE PLAYER WINS THE ROUND~~\n\n");
                pp++;
            }
        }

        if (chance == 2)
        {
            if (move == 0)
            {
                printf("~~THE PLAYER WINS THE ROUND~~\n\n");
                pp++;
            }
            else if (move == 1)
            {
                printf("~~ROUND DRAW~~\n\n");
            }
            else if (move == 2)
            {
                printf("~~THE COMPUTER WINS THE ROUND~~\n\n");
                cp++;
            }
        }

        if (chance == 3)
        {
            if (move == 0)
            {
                printf("~~THE COMPUTER WINS THE ROUND~~\n\n");
                cp++;
            }
            else if (move == 1)
            {
                printf("~~THE PLAYER WINS THE ROUND~~\n\n");
                pp++;
            }
            else if (move == 2)
            {
                printf("~~ROUND DRAW~~\n\n");
            }
        }
    }
    printf("The score of player is %d\n\n", pp);
    printf("The score of computer is %d\n", cp);

    if (cp == pp)
    {
        printf("`````THE MATCH DRAWS , NOONE WINS``````\n");
    }

    else if (cp > pp)
    {
        printf("``````THE COMPUTER WINS THE GAME``````\n");
    }

    else if (cp < pp)
    {
        printf("``````THE PLAYER WINS THE GAME``````\n");
    }
}