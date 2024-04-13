#include "stopWatch.h"


int main() {

    SetConsoleTitle("StopWatch");// Custom Title for windows exe file

    Stopwatch *stopwatch = createStopwatch();
    if (stopwatch == NULL) {
        return 1;  // Exit with error code if stopwatch creation fails
    }

    char input;

    printf("Press 'S' to start, 'T' to stop, 'R' to reset, and 'Q' to quit.\n");

    while (1) {
        if (_kbhit()) {  // Check if a key has been pressed
            input = _getch();  // Get the pressed key

            if (input == 'Q' || input == 'q') {
                break;  // Exit the loop and quit the program
            } else if (input == 'S' || input == 's') {
                if (!stopwatch->isRunning) {
                    startStopwatch(stopwatch);
                }
            } else if (input == 'T' || input == 't') {
                stopStopwatch(stopwatch);
                printElapsedTime(stopwatch);
            } else if (input == 'R' || input == 'r') {
                if (stopwatch->isRunning) {
                    stopStopwatch(stopwatch);
                }
                resetStopwatch(stopwatch);
                printf("\rStopwatch reset. Press 'S' to start.\n");  // Inform user to start again
            }
        }

        if (stopwatch->isRunning) {
            printElapsedTime(stopwatch);
        }
    }

    free(stopwatch);  // Free allocated memory before exiting
    return 0;
}
