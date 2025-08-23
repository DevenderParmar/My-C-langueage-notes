#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(0));

    char you[100];
    char *computer_choice;
    int computer = rand() % 3;

    // Assign computer's choice based on number
    if (computer == 0)
        computer_choice = "stone";
    else if (computer == 1)
        computer_choice = "paper";
    else
        computer_choice = "scissors";

    // Get user input
    printf("Choose STONE or PAPER or SCISSORS:\n");
    fgets(you, sizeof(you), stdin);
    you[strcspn(you, "\n")] = '\0';  // Remove newline

    printf("You chose: %s\n", you);
    printf("Computer chose: %s\n", computer_choice);

    // Convert to lowercase for case-insensitive comparison (optional)
    for (int i = 0; you[i]; i++)
        you[i] = tolower(you[i]);

    // Determine result
    if (strcmp(you, computer_choice) == 0) {
        printf("Result: DRAW\n");
    } else if ((strcmp(you, "stone") == 0 && strcmp(computer_choice, "scissors") == 0) ||
               (strcmp(you, "paper") == 0 && strcmp(computer_choice, "stone") == 0) ||
               (strcmp(you, "scissors") == 0 && strcmp(computer_choice, "paper") == 0)) {
        printf("\nResult: You WON!\n");
    } else if ((strcmp(you, "stone") == 0 || strcmp(you, "paper") == 0 || strcmp(you, "scissors") == 0)) {
        printf("\nResult: Computer WON!\n");
    } else {
        printf("Invalid input. Please choose stone, paper, or scissors.\n");
    }

    return 0;
}
