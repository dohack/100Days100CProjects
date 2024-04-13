#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>  // For Sleep and Beep functions

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char currentTime[80];
    char alarmTimeInput[80];
    struct tm alarmTime = {0};  // Initialize alarmTime struct

    int alarmDuration = 10;  // Alarm duration in seconds
    char displayOption;

    // Get display option from user
    printf("Choose display option (N for newline, R for carriage return): ");
    if (scanf(" %c", &displayOption) != 1 || (displayOption != 'N' && displayOption != 'R')) {
        printf("Invalid display option. Please enter N or R.\n");
        return 1;  // Exit with error code
    }

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
    if (scanf("%s", alarmTimeInput) != 1 ||
        sscanf(alarmTimeInput, "%d:%d", &alarmTime.tm_hour, &alarmTime.tm_min) != 2) {
        printf("Invalid input format. Please enter the alarm time in HH:MM format.\n");
        return 1;  // Exit with error code
    }

    // Get the current time again for accurate comparison
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // Calculate the seconds until the alarm time
    long secondsUntilAlarm = (alarmTime.tm_hour - timeinfo->tm_hour) * 3600 +
                             (alarmTime.tm_min - timeinfo->tm_min) * 60 -
                             timeinfo->tm_sec;

    // Handle cases where the alarm time is already past for the current day
    if (secondsUntilAlarm <= 0) {
        printf("Alarm time should be set for a future time.\n");
        return 1;  // Exit with error code
    }

    // Loop until alarm time is reached
    while (1) {
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(currentTime, sizeof(currentTime), "%Y-%m-%d %H:%M:%S", timeinfo);
        if (displayOption == 'R') {
            printf("\rCurrent time: %s", currentTime);  // Update in same line
        } else {
            printf("Current time: %s\n", currentTime);  // Update in new line
        }

        // Check if it's time for the alarm
        if (timeinfo->tm_hour == alarmTime.tm_hour && timeinfo->tm_min == alarmTime.tm_min) {
            break;
        }

        Sleep(1000);  // Delay for 1 second
    }

    // Trigger alarm alert
    printf("\nALARM! Time to wake up!\n");

    // Play alarm tone for 10 seconds
    for (int i = 0; i < alarmDuration; i++) {
        Beep(1000, 500);  // Beep at 1000 Hz for 0.5 seconds
        Sleep(500);       // Delay for 0.5 seconds
    }

    return 0;
}
