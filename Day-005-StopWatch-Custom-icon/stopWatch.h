#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>  // Include stdlib.h for malloc function
#include <conio.h>  // For _kbhit and _getch functions
#include <windows.h>  // For SetConsoleTitle function

// Stopwatch structure
typedef struct {
    time_t startTime;
    time_t stopTime;
    int isRunning;
    double elapsedTime;  // New member to track elapsed time
    double lastElapsed;  // New member to store last elapsed time
} Stopwatch;

// Function prototypes
Stopwatch* createStopwatch();
void startStopwatch(Stopwatch* stopwatch);
void stopStopwatch(Stopwatch* stopwatch);
void resetStopwatch(Stopwatch* stopwatch);
double getElapsedTime(Stopwatch* stopwatch);
void printElapsedTime(Stopwatch *stopwatch);
#endif
