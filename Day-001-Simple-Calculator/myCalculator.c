#include "myCalculator.h"  // Include the header file

/* Function definitions */

// Function to add two integers
int32_t funAdd(int32_t num1, int32_t num2) {
    return num1 + num2;
}

// Function to subtract two integers
int32_t funSub(int32_t num1, int32_t num2) {
    return num1 - num2;
}

// Function to multiply two integers
long long int funMult(int32_t num1, int32_t num2) {
    return num1 * num2;
}

// Function to divide two integers and return result as a double
double funDiv(int32_t num1, int32_t num2) {
    if (num2 == 0) {
        printf("Error: Division by zero!\n");
        return 0.0; // Return a default value (0.0) when division by zero occurs
    } else {
        return (double)num1 / num2; // Return the division result when division is valid
    }
}


// Function to perform modulus operation on two integers
int32_t funMod(int32_t num1, int32_t num2) {
    if (num2 == 0) {
        printf("Error: Division by zero!\n");
        return 0; // Return a default value (0) when division by zero occurs
    } else {
        return num1 % num2; // Return the modulus result when division is valid
    }
}

