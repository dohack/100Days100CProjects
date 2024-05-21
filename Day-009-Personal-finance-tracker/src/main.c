#include <stdio.h>
#include "tracker.h"

#define MAX_TRANSACTIONS 100

int main() {
    Transaction transactions[MAX_TRANSACTIONS];
    int numTransactions = 0;
    char choice;

    do {
        printf("\nPersonal Finance Tracker\n");
        printf("1. Add Transaction\n");
        printf("2. Display Transactions\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                addTransaction(transactions, &numTransactions);
                break;
            case '2':
                displayTransactions(transactions, numTransactions);
                break;
            case '3':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '3');

    return 0;
}
