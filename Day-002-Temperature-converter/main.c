#include "temp.h"

double userData = 0;
int main(void) {
    printf("\t\t***Temperature converter (Celsius to Fahrenheit and vice versa)***\t\t\n");

    userInput(&userData);
    int userChoice = choice(); // Store user's choice

    if(userChoice == 1) {
        printf("You chose Celsius.\n");
        double convertedTemp = celsiusToFahrenheit(userData);
        printf("Temperature in Fahrenheit: %lf\n", convertedTemp);
    } else if(userChoice == 2) {
        printf("You chose Fahrenheit.\n");
        double convertedTemp = fahrenheitToCelsius(userData);
        printf("Temperature in Celsius: %lf\n", convertedTemp);
    } else {
        printf("Invalid choice.\n"); // Handle invalid input
       
    }

    // Clear the input buffer and wait for user input
    while(getchar() != '\n'); // Clear input buffer
    getchar(); // Wait for user input

    return 0;
}
