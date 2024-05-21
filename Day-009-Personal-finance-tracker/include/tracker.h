#ifndef TRACKER_H
#define TRACKER_H

#define MAX_TRANSACTIONS 100  // Define the maximum number of transactions

// Define structure for a financial transaction
typedef struct {
    char date[20];
    float amount;
    char category[50];
   
} Transaction;

// Function prototypes
void addTransaction(Transaction transactions[], int *numTransactions);
void displayTransactions(Transaction transactions[], int numTransactions);

#endif /* TRACKER_H */
