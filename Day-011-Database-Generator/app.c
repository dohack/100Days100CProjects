/*


*/

#include <stdio.h>
#include <stdlib.h> // For malloc(), free(), atoi()
#include <string.h> // For strcpy()

#define MAX_RECORDS 1000000  // Maximum number of records we can handle (1 million)

// Structure to store user information
struct UserInfo {
    char firstName[20];
    char lastName[20];
    int age;
    char sex[10];
    char mobileNumber[15];
    char countryCode[5];
    char address1[50];
    char address2[50];
    char email[50];
    char password[20];
    char pinCode[10];
    char country[20];
};

// Function to generate demo user data
void generateDemoUsers(struct UserInfo users[], int numRecords) {
    // Demo data template
    struct UserInfo templateUser = {
        "Name",     // First Name
        "Last",     // Last Name
        33,         // Age
        "Male",     // Sex
        "1234567890",   // Mobile Number
        "+91",      // Country Code
        "demo Address", // Address 1
        "demo Address", // Address 2
        "demo@demo.com",    // Email ID
        "123456",   // Password
        "123456",   // Pin Code
        "India"     // Country
    };

    // Generate demo users based on the template
    for (int i = 0; i < numRecords; ++i) {
        sprintf(users[i].firstName, "%s%d", templateUser.firstName, i + 1);
        sprintf(users[i].lastName, "%s%d", templateUser.lastName, i + 1);
        users[i].age = templateUser.age;
        strcpy(users[i].sex, templateUser.sex);
        strcpy(users[i].mobileNumber, templateUser.mobileNumber);
        strcpy(users[i].countryCode, templateUser.countryCode);
        strcpy(users[i].address1, templateUser.address1);
        strcpy(users[i].address2, templateUser.address2);
        strcpy(users[i].email, templateUser.email);
        strcpy(users[i].password, templateUser.password);
        strcpy(users[i].pinCode, templateUser.pinCode);
        strcpy(users[i].country, templateUser.country);
    }
}

// Function to write user data to a file
void writeUserDataToFile(struct UserInfo users[], int numRecords, const char *filename, int format) {
    FILE *fp;
    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error opening file %s for writing!\n", filename);
        return;
    }

    if (format == 1) {
        // Write CSV header
        fprintf(fp, "First Name,Last Name,Age,Sex,Mobile Number,Country Code,Address 1,Address 2,Email ID,Password,Pin Code,Country\n");

        // Write each user's data to CSV
        for (int i = 0; i < numRecords; ++i) {
            fprintf(fp, "%s,%s,%d,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",
                    users[i].firstName, users[i].lastName, users[i].age,
                    users[i].sex, users[i].mobileNumber, users[i].countryCode,
                    users[i].address1, users[i].address2, users[i].email,
                    users[i].password, users[i].pinCode, users[i].country);
        }
    } else if (format == 2) {
        // Write SQL insert statements
        fprintf(fp, "INSERT INTO users (first_name, last_name, age, sex, mobile_number, country_code, address1, address2, email, password, pin_code, country) VALUES\n");

        for (int i = 0; i < numRecords; ++i) {
            fprintf(fp, "('%s', '%s', %d, '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s')",
                    users[i].firstName, users[i].lastName, users[i].age,
                    users[i].sex, users[i].mobileNumber, users[i].countryCode,
                    users[i].address1, users[i].address2, users[i].email,
                    users[i].password, users[i].pinCode, users[i].country);

            if (i != numRecords - 1) {
                fprintf(fp, ",\n");
            } else {
                fprintf(fp, ";\n");
            }
        }
    } else {
        printf("Invalid format choice!\n");
        fclose(fp);
        return;
    }

    fclose(fp);
    printf("Data has been written to %s successfully!\n", filename);
}

int main() {
    int numRecords, choice;
    struct UserInfo *users;

    printf("Enter the number of demo records you want to generate: ");
    scanf("%d", &numRecords);

    if (numRecords <= 0 || numRecords > MAX_RECORDS) {
        printf("Invalid number of records. Please enter a number between 1 and %d.\n", MAX_RECORDS);
        return 1;
    }

    // Allocate memory for users
    users = (struct UserInfo *)malloc(numRecords * sizeof(struct UserInfo));
    if (users == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Generate demo user data
    generateDemoUsers(users, numRecords);

    // Menu to choose output format
    printf("Choose output format:\n");
    printf("1. CSV\n");
    printf("2. SQL\n");
    printf("3. Both CSV and SQL\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            writeUserDataToFile(users, numRecords, "demo-users.csv", 1);
            break;
        case 2:
            writeUserDataToFile(users, numRecords, "demo-users.sql", 2);
            break;
        case 3:
            writeUserDataToFile(users, numRecords, "demo-users.csv", 1);
            writeUserDataToFile(users, numRecords, "demo-users.sql", 2);
            break;
        default:
            printf("Invalid choice. Exiting...\n");
            break;
    }

    // Free allocated memory
    free(users);

    return 0;
}
