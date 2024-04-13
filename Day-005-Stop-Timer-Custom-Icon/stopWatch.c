#include "stopWatch.h"

Stopwatch* createStopwatch() {
    Stopwatch* stopwatch = (Stopwatch*)malloc(sizeof(Stopwatch));
    if (stopwatch == NULL) {
        printf("Memory allocation error.\n");
        return NULL;
    }
    stopwatch->isRunning = 0;
    stopwatch->elapsedTime = 0.0;  // Initialize elapsed time to 0
    stopwatch->lastElapsed = 0.0;  // Initialize last elapsed time to 0
    return stopwatch;
}

void startStopwatch(Stopwatch* stopwatch) {
    if (!stopwatch->isRunning) {
        if (stopwatch->lastElapsed > 0.0) {
            stopwatch->startTime = time(NULL) - stopwatch->lastElapsed;  // Adjust start time based on last elapsed time
        } else {
            stopwatch->startTime = time(NULL);  // Start from current time if last elapsed time is 0
        }
        stopwatch->isRunning = 1;
    }
}

void stopStopwatch(Stopwatch* stopwatch) {
    if (stopwatch->isRunning) {
        stopwatch->stopTime = time(NULL);
        stopwatch->lastElapsed = getElapsedTime(stopwatch);  // Update last elapsed time when stopped
        stopwatch->isRunning = 0;
    }
}

void resetStopwatch(Stopwatch* stopwatch) {
    stopwatch->startTime = 0;
    stopwatch->stopTime = 0;
    stopwatch->isRunning = 0;
    stopwatch->elapsedTime = 0.0;  // Reset elapsed time to 0
    stopwatch->lastElapsed = 0.0;  // Reset last elapsed time to 0
}

double getElapsedTime(Stopwatch* stopwatch) {
    if (stopwatch->isRunning) {
        return difftime(time(NULL), stopwatch->startTime);
    } else {
        return stopwatch->lastElapsed;
    }
}

void printElapsedTime(Stopwatch *stopwatch) {
    double elapsedTime = getElapsedTime(stopwatch);
    printf("\rElapsed time: %.2f seconds", elapsedTime);
    fflush(stdout);  // Flush the output buffer to ensure immediate printing
}
