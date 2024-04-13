
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>  // For Sleep and Beep functions
#include "alarm_clock.h"

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char currentTime[80];
    char alarmTime[80];
    int alarmDuration = 10;  // Alarm duration in seconds
    char displayOption;

    // Get display option from user
    printf("Choose display option (N for newline, R for carriage return): ");
    scanf(" %c", &displayOption);

    // Get current time
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(currentTime, sizeof(currentTime), "%Y-%m-%d %H:%M:%S", timeinfo);

    if (displayOption == 'N') {
        printf("Current time: %s\n", currentTime);  // Display with newline
    } else if (displayOption == 'R') {
        printf("Current time: %s\r", currentTime);  // Display with carriage return
    }

    // Set alarm time
    printf("\nSet alarm time (format: HH:MM): ");
    scanf("%s", alarmTime);

    // Initialize alarm
    Alarm *alarm = createAlarm(alarmTime);

    // Loop until alarm time is reached
    while (!isAlarmTime(alarm)) {
        Sleep(1000);  // Delay for 1 second
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(currentTime, sizeof(currentTime), "%Y-%m-%d %H:%M:%S", timeinfo);
        if (displayOption == 'R') {
            printf("\rCurrent time: %s", currentTime);  // Update in same line
        } else {
            printf("Current time: %s\n", currentTime);  // Update in new line
        }
    }

    // Trigger alarm alert
    printf("\nALARM! Time to wake up!\n");

    // Play alarm tone for 10 seconds
    for (int i = 0; i < alarmDuration; i++) {
        Beep(1000, 500);  // Beep at 1000 Hz for 0.5 seconds
        Sleep(500);       // Delay for 0.5 seconds
    }

    // Clean up
    free(alarm);

    return 0;
}