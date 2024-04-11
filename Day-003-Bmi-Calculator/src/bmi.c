#include "bmi.h"
#include <stdio.h>

void calculateBMI(userData *user) {
    // Calculate BMI using the formula: weight (kg) / (height (m))^2
    user->BMI = user->Weight / ((float)user->Height * (float)user->Height);
}

void determineClassification(userData *user, obesityType *obesity) {
    // Determine the BMI classification based on the calculated BMI value
    if (user->BMI < obesity->SevereThinness) {
        user->Classification = obesity->underWeight;
    } else if (user->BMI >= obesity->SevereThinness && user->BMI < obesity->ModerateThinness) {
        user->Classification = obesity->ModerateThinness;
    } else if (user->BMI >= obesity->ModerateThinness && user->BMI < obesity->MildThinness) {
        user->Classification = obesity->MildThinness;
    } else if (user->BMI >= obesity->MildThinness && user->BMI < obesity->Normal) {
        user->Classification = obesity->Normal;
    } else if (user->BMI >= obesity->Normal && user->BMI < obesity->Overweight) {
        user->Classification = obesity->Overweight;
    } else if (user->BMI >= obesity->Overweight && user->BMI < obesity->ObeseClassI) {
        user->Classification = obesity->ObeseClassI;
    } else if (user->BMI >= obesity->ObeseClassI && user->BMI < obesity->ObeseClassII) {
        user->Classification = obesity->ObeseClassII;
    } else if (user->BMI >= obesity->ObeseClassII && user->BMI < obesity->ObeseClassIII) {
        user->Classification = obesity->ObeseClassIII;
    } else {
        user->Classification = obesity->obesity;
    }
}

void displayResults(userData *user) {
    // Display BMI and classification results
    printf("BMI: %.2f\n", user->BMI);
    printf("Classification: %c\n", user->Classification);
}
