#include<stdio.h>     
#include<stdint.h>     
#include "myCalculator.h"  // Custom calculator header files

int main(void) {
    // Declare variables for user input and operation
    int32_t num1 = 0, num2 = 0;
    int operation = 0;

    // Prompt the user to enter two numbers
    printf("Enter two numbers:\n");
    // Read the two numbers from the user
    scanf("%d %d", &num1, &num2);
    
    // Print a separator and result section header
    printf("\n***---Result---***:\n\n");

    // Perform arithmetic operations and print results
    printf("Addition is: %d\n", funAdd(num1, num2));  // Addition
    printf("Subtraction is: %d\n", funSub(num1, num2));  // Subtraction
    printf("Multiplication is: %lld\n", funMult(num1, num2));  // Multiplication
    printf("Division is: %lf\n", funDiv(num1, num2));  // Division
    printf("Modulus is: %d\n", funMod(num1, num2));  // Modulus
    
    // Clear the input buffer and wait for user input
    while(getchar() != '\n'); // Clear input buffer
    getchar(); // Wait for user input
    
    return 0;
}
