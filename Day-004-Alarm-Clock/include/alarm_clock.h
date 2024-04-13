#ifndef ALARM_CLOCK_H
#define ALARM_CLOCK_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>  // For Sleep and Beep functions

typedef struct {
    int hours;
    int minutes;
} Alarm;


Alarm *createAlarm(const char *alarmTime);
int isAlarmTime(const Alarm *alarm);

void currentTime(void);

void customTime(void);









#endif