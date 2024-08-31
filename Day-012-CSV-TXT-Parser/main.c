#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20   // Maximum number of columns (adjust as needed)
#define MAX_ROWS 1000 // Maximum number of rows (adjust as needed)

// Function to parse CSV file and save to text file
void parseAndSaveToText(const char *filename, const char *outputFilename) {
    FILE *fp, *outfp;
    char line[1024]; // Buffer to read each line of the CSV file
    char *token;
    int row = 0, col = 0;
    char *headers[MAX_COLS]; // Array to store column headers (names)

    // Open CSV file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file %s\n", filename);
        return;
    }

    // Open output text file
    outfp = fopen(outputFilename, "w");
    if (outfp == NULL) {
        printf("Error opening file %s for writing\n", outputFilename);
        fclose(fp);
        return;
    }

    // Read headers (first line)
    if (fgets(line, sizeof(line), fp)) {
        // Tokenize header line
        token = strtok(line, ",");
        while (token != NULL && col < MAX_COLS) {
            headers[col] = strdup(token);
            token = strtok(NULL, ",");
            col++;
        }
    }

    // Write headers to output text file
    for (int i = 0; i < col; i++) {
        fprintf(outfp, "%s\t", headers[i]);
    }
    fprintf(outfp, "\n");

    // Read data rows
    while (fgets(line, sizeof(line), fp)) {
        col = 0;
        token = strtok(line, ",");
        while (token != NULL && col < MAX_COLS) {
            // Write the data based on headers[col]
            fprintf(outfp, "%s\t", token); // Save to text file
            token = strtok(NULL, ",");
            col++;
        }
        fprintf(outfp, "\n"); // New line for each row
        row++;
    }

    // Clean up
    for (int i = 0; i < col; i++) {
        free(headers[i]);
    }
    fclose(fp);
    fclose(outfp);

    printf("Parsed data has been saved to %s successfully!\n", outputFilename);
}

int main() {
    // Assuming the CSV file is named "data.csv" and output text file is "parsed_data.txt"
    parseAndSaveToText("data.csv", "parsed_data.txt");

    return 0;
}
