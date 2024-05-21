#include <stdio.h>
#include "tracker.h"

// Function to add a transaction
void addTransaction(Transaction transactions[], int *numTransactions) {
    if (*numTransactions < MAX_TRANSACTIONS) {
        printf("Enter date (DD/MM/YYYY): ");
        scanf("%s", transactions[*numTransactions].date);
        printf("Enter amount: ");
        scanf("%f", &transactions[*numTransactions].amount);
        printf("Enter category: ");
        scanf("%s", transactions[*numTransactions].category);
        (*numTransactions)++;
        printf("Transaction added successfully.\n");
    } else {
        printf("Cannot add more transactions. Maximum limit reached.\n");
    }
}

// Function to display all transactions
void displayTransactions(Transaction transactions[], int numTransactions) {
    printf("\nTransaction History:\n");
    printf("%-15s %-10s %-20s\n", "Date", "Amount", "Category");
    for (int i = 0; i < numTransactions; i++) {
        printf("%-15s %-10.2f %-20s\n", transactions[i].date, transactions[i].amount, transactions[i].category);
    }
}