#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    srand(time(0));

    int you;
    int computer = rand() % 3;

    printf("\n\nEnter '0' for STONE or Enter '1' for PAPER or Enter '2' for SCISSORS = ");
    scanf("%d", &you);

    printf(" \nYou chooose = %d\n",you);
    
    if (you == computer)
    {
        printf(" \nComputer chooose = %d\n",computer);
        printf("DRAW !!");
    }
    else if (you == 0 && computer == 1)
    {
        printf(" \nComputer chooose = %d\n",computer);
        printf("\nComputer WON !!\n");
    }
    else if (you == 0 && computer == 2)
    {
        printf(" \nComputer chooose = %d\n",computer);
        printf("\nYou WON !!\n");
    }
    else if (you == 1 && computer == 0)
    {
        printf(" \nComputer chooose = %d\n",computer);
        printf("\nYou WON !!\n");
    }
    else if (you == 1 && computer == 2)
    {
        printf(" \nComputer chooose = %d\n",computer);
        printf("\nComputer WON !!\n");
    }
    else if (you == 2 && computer == 0)
    {
        printf(" \nComputer chooose = %d\n",computer);
        printf("\nComputer WON !!\n");
    }
    else if (you == 2 && computer == 1)
    {
        printf(" \nComputer chooose = %d\n",computer);
        printf("\nYou WON !!\n");
    }
    else
    {
        printf("Please enter a valid number :|");
    }
    
    return 0;
}
