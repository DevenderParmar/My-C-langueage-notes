#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_color(char *text, char *color) {
    // For colored output (Linux terminal)
    printf("%s%s\x1b[0m", color, text);
}

int main() {
    int number, target, guesses;
    int best_score = 1000;  // Arbitrarily high number to track the best score
    char choice; // For play again (y/n)
    int max_guesses;  // Maximum guesses based on difficulty
    char *difficulty;

    srand(time(0)); // Seed random number generator once

    do {
        guesses = 0;
        int hint_given = 0; // To check if hint is given
        int difficulty_level;

        // Ask for difficulty level
        printf("\nChoose Difficulty Level:\n1. Easy (0-10)\n2. Medium (0-100)\n3. Hard (0-1000)\nEnter choice (1/2/3): ");
        scanf("%d", &difficulty_level);

        if (difficulty_level == 1) {
            max_guesses = 10;
            difficulty = "Easy";
            target = rand() % 11; // 0 to 10
        } else if (difficulty_level == 2) {
            max_guesses = 7;
            difficulty = "Medium";
            target = rand() % 101; // 0 to 100
        } else {
            max_guesses = 5;
            difficulty = "Hard";
            target = rand() % 1001; // 0 to 1000
        }

        printf("\n=== New Game Started! Difficulty: %s ===\n", difficulty);

        do {
            printf("\nGuess a number: ");
            scanf("%d", &number);
            guesses++;

            if (guesses == 4 && !hint_given) {
                // Give a hint after 3 wrong guesses
                hint_given = 1;
                if (target % 2 == 0) {
                    printf("Hint: The number is even.\n");
                } else {
                    printf("Hint: The number is odd.\n");
                }
            }

            if (number > target) {
                printf("\nTry Smaller Number.\n");
            }
            else if (number < target) {
                printf("\nTry entering Bigger number.\n");
            }
            else if (number == target) {
                if (guesses < best_score) {
                    best_score = guesses;
                }
                print_color("\nCONGRATS! You guessed the number :<)\n", "\x1b[32m"); // Green color
                printf("You guessed it in %d tries\n", guesses);
                break;
            }

            // If guesses exceed the maximum allowed
            if (guesses >= max_guesses) {
                print_color("\nSorry! You've reached the maximum tries.\n", "\x1b[31m"); // Red color
                printf("The correct number was: %d\n", target);
                break;
            }

        } while (number != target);

        // Ask if the player wants to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &choice); // Notice the space before %c (to ignore newline character)

    } while (choice == 'y' || choice == 'Y');

    // Show best score when the game ends
    print_color("\nThanks for playing! Here's your best score:\n", "\x1b[34m"); // Blue color
    printf("Your best score: %d tries\n", best_score);

    printf("\nGoodbye!\n");

    return 0;
}
