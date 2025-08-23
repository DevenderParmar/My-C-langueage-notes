#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    srand(time(0));

    char you[100];
    int computer = rand() % 3;

    printf("\n\nChoose STONE or Choose PAPER or Choose SCISSORS :\n");
    fgets(you,sizeof(you),stdin);
    you[strcspn(you,"\n")]= '\0';

    printf("you choose = %s",you);
    printf("computer choose = %d");

    printf(" \nYou chooose = %s\n",you);
    printf(" \ncomputer chooose = %d\n",computer);

    if (you == "stone" && computer == 0)
    {
        printf("\nDRAW\n");
    }
    else if (you == "paper" && computer == 1)
    {
        printf("\nDRAW\n");
    }
    else if (you == "scissors" && computer == 2)
    {
        printf("\nDRAW\n");
    }
    else if (you == "stone" && computer == 1)
    {
        printf("\nComputer WON !!\n");
    }
    else if (you == "stone" && computer == 2)
    {
        printf("\nYou WON !!\n");
    }
    else if (you == "paper" && computer == 0)
    {
        printf("\nYou WON !!\n");
    }
    else if (you == "paper" && computer == 2)
    {
        printf("\nComputer WON !!\n");
    }
    else if (you == "scissors" && computer == 0)
    {
        printf("\nComputer WON !!\n");
    }
    else if (you == "scissors" && computer == 1)
    {
        printf("\nYou WON !!\n");
    }
    else
    {
        printf("Please Choose a valid number :|");
    }

    return 0;
}
