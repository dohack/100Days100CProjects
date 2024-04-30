#include "passGen.h"

char* generatePassword(int size, int includeCapital, int includeSpecial, int includeNumbers) {
    const char smallLetters[] = "abcdefghijklmnopqrstuvwxyz";
    const char capitalLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char specialChars[] = {'@', '$', '*', '_', '(', ')'};
    const char numbers[] = "0123456789";

    int numCharSets = 1 + includeCapital + includeSpecial + includeNumbers;
    const char* charSets[4]; // Maximum possible number of character sets

    charSets[0] = smallLetters; // Always include small letters

    int index = 1;
    if (includeCapital) {
        charSets[index] = capitalLetters;
        index++;
    }
    if (includeSpecial) {
        charSets[index] = specialChars;
        index++;
    }
    if (includeNumbers) {
        charSets[index] = numbers;
        index++;
    }

    numCharSets = index; // Update numCharSets with the actual number of character sets

    char* password = (char*)malloc((size + 1) * sizeof(char)); // Allocate memory for password

    if (password == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    srand(time(NULL));

    for (int i = 0; i < size; ++i) {
        int charSetIndex = rand() % numCharSets;
        const char* selectedCharSet = charSets[charSetIndex];
        int charSetSize = 0;

        switch (charSetIndex) {
            case 0: charSetSize = 26; break; // lowercase letters
            case 1: charSetSize = 26; break; // capital letters
            case 2: charSetSize = 6; break;  // special characters
            case 3: charSetSize = 10; break; // numbers
        }

        password[i] = selectedCharSet[rand() % charSetSize];
    }

    password[size] = '\0';  // Null-terminate the string
    return password;
}
