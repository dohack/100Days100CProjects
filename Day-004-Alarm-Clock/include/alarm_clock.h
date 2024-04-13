#ifndef ALARM_CLOCK_H
#define ALARM_CLOCK_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int hours;
    int minutes;
} Alarm;


Alarm *createAlarm(const char *alarmTime);
int isAlarmTime(const Alarm *alarm);

void currentTime(void);

void customTime(void);









#endif