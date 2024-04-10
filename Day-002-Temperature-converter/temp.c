#include "temp.h"

void userInput(double *userData) {
    printf("Enter data: ");
    scanf("%lf", userData);
    printf("You have Entered: %lf\n", *userData);
}

int choice() {
    int choice;
    printf("Choose the unit:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    scanf("%d", &choice);
    return choice;
}

double celsiusToFahrenheit(double temp) {
    return (temp * 9 / 5) + 32;
}

double fahrenheitToCelsius(double temp) {
    return (temp - 32) * 5 / 9;
}
