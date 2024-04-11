#include <stdio.h>
#include "bmi.h"

int main(void) {
    userData user;
    obesityType obesity;

    // Example data initialization (you can replace with user input or other data)
    user.Age = 25;
    user.Height = 180;
    user.Weight = 70;

    obesity.SevereThinness = 'A'; // Example characters representing classifications
    obesity.ModerateThinness = 'B';
    obesity.MildThinness = 'C';
    obesity.Normal = 'D';
    obesity.Overweight = 'E';
    obesity.ObeseClassI = 'F';
    obesity.ObeseClassII = 'G';
    obesity.ObeseClassIII = 'H';

    // Calculate BMI
    calculateBMI(&user);

    // Determine classification
    determineClassification(&user, &obesity);

    // Display results
    displayResults(&user);

    return 0;
}
