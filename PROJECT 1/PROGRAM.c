#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;

    int guesses = 0;

    srand(time(0));
    int target = rand() % 101;

    do
    {

        printf("\nGuess a number from 0 to 100 = ");
        scanf("%d", &number);
        guesses++;

        if (number > target)
        {
            printf("\nTry Smaller Number .\n");
        }
        else if (number < target)
        {
            printf("\nTry entering Bigger number \n");
        }
        else if(number == target)
        {
            break;
        }
    }
        
        while (1);
    printf("\nCONOGRATS you have guessed the number in %d tries\n  :<)", guesses);

    return 0;
}
