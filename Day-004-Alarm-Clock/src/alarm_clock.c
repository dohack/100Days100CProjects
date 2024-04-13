#include "alarm_clock.h"



Alarm *createAlarm(const char *alarmTime) {
    Alarm *alarm = (Alarm *)malloc(sizeof(Alarm));
    if (alarm == NULL) {
        return NULL;
    }

    char *token = strtok((char *)alarmTime, ":");
    alarm->hours = atoi(token);
    token = strtok(NULL, ":");
    alarm->minutes = atoi(token);

    return alarm;
}

int isAlarmTime(const Alarm *alarm) {
    time_t rawtime;
    struct tm *timeinfo;
    int currentHours, currentMinutes;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    currentHours = timeinfo->tm_hour;
    currentMinutes = timeinfo->tm_min;

    return (currentHours == alarm->hours && currentMinutes == alarm->minutes);
}
