#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, target;
    int guesses;
    char choice; // For play again (y/n)

    srand(time(0)); // Seed random generator once

    do {
        guesses = 0;
        target = rand() % 101; // New target for every round

        printf("\n=== New Game Started! ===\n");

        do {
            printf("\nGuess a number from 0 to 100 = ");
            scanf("%d", &number);
            guesses++;

            if (number > target) {
                printf("\nTry Smaller Number.\n");
            }
            else if (number < target) {
                printf("\nTry entering Bigger number.\n");
            }
            else {
                printf("\nCONGRATS! You guessed the number in %d tries :<)\n", guesses);
            }
        } while (number != target);

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c (to eat newline)

    } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing! Goodbye!\n");

    return 0;
}
