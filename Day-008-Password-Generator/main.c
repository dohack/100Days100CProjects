
#include "passGen.h"

int main() {
    int size, includeCapital, includeSpecial, includeNumbers;

    // Input parameters
    printf("Enter password size (4-16): ");
    scanf("%d", &size);

    printf("Include capital letters? (1 for yes, 0 for no): ");
    scanf("%d", &includeCapital);

    printf("Include special characters? (1 for yes, 0 for no): ");
    scanf("%d", &includeSpecial);

    printf("Include numbers? (1 for yes, 0 for no): ");
    scanf("%d", &includeNumbers);

    if (size < 4 || size > 16) {
        printf("Password size should be between 4 and 16\n");
        return 1;
    }

    // Generate password
    char* password = generatePassword(size, includeCapital, includeSpecial, includeNumbers);
    printf("Generated Password: %s\n", password);

    // Free memory
    free(password);

printf("Press any key to exit");
getchar();
getchar();
    return 0;
}


// #include "passGen.h"

// int main() {
//     int size, includeCapital, includeSpecial, includeNumbers;
//     char choice;

//     do {
//         // Input parameters
//         printf("Enter password size (4-16): ");
//         scanf("%d", &size);

//         printf("Include capital letters? (1 for yes, 0 for no): ");
//         scanf("%d", &includeCapital);

//         printf("Include special characters? (1 for yes, 0 for no): ");
//         scanf("%d", &includeSpecial);

//         printf("Include numbers? (1 for yes, 0 for no): ");
//         scanf("%d", &includeNumbers);

//         if (size < 4 || size > 16) {
//             printf("Password size should be between 4 and 16\n");
//             continue; // Go to the next iteration of the loop
//         }

//         // Generate password
//         char* password = generatePassword(size, includeCapital, includeSpecial, includeNumbers);
//         printf("Generated Password: %s\n", password);

//         // Free memory
//         free(password);

//         // Options
//         printf("\nOptions:\n");
//         printf("1) Press A or a to generate new password based on previous settings\n");
//         printf("2) Press S or s to start new\n");
//         printf("3) Press Q or q to exit\n");
//         printf("Your choice: ");
//         scanf(" %c", &choice);

//         switch (choice) {
//             case 'A':
//             case 'a':
//                 // Generate new password based on previous settings
//                 break; // No need to break; it will continue the loop

//             case 'S':
//             case 's':
//                 // Start new, so continue to the next iteration of the loop
//                 continue;

//             case 'Q':
//             case 'q':
//                 // Quit the program
//                 printf("Exiting program.\n");
//                 return 0;

//             default:
//                 printf("Invalid choice. Please try again.\n");
//                 break;
//         }

//     } while (1); // Infinite loop until user chooses to exit

//     return 0;
// }
