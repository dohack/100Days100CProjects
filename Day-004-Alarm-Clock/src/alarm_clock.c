#include "alarm_clock.h"

void currentTime(void){
    time_t currentTime;
    time(&currentTime);
    printf("Current time: %s", ctime(&currentTime));
  
}

void customTime(void){
    struct tm customTime = {0}; // Initialize struct with zeros
    customTime.tm_year = 121; // 2021 (years since 1900)
    customTime.tm_mon = 6; // July (0-11)
    customTime.tm_mday = 4; // 4th
    customTime.tm_hour = 15; // 3 PM
    customTime.tm_min = 30; // 30 minutes
    customTime.tm_sec = 0; // 0 seconds

    time_t customTime_t = mktime(&customTime);
    printf("Custom time: %s", ctime(&customTime_t));
}