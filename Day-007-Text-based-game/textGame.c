#include "textGame.h"



void startGame() {
    // Generate a random number between 1 and 100
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
        }
    } while (guess != randomNumber);
}
