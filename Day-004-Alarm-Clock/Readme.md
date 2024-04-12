Got it! Here's the updated README.md with the build command in the build folder:

---

# Day-004: Alarm Clock using time.h

## Overview

Welcome to Day 4 of the 100 Days, 100 C Applications challenge! In this project, we'll create a simple alarm clock application using the `time.h` library in C.

## Objective

The objective of this project is to build an alarm clock that allows users to set an alarm time and triggers an alert when the alarm time is reached.

## Features

- Set alarm time
- Trigger alarm alert
- Display current time
- Simple command-line interface

## Folder Structure

```plaintext
Day-004-Alarm-Clock/
├── src/
│   ├── main.c
│   └── alarm.c
├── build/
└── README.md
```

## Usage

1. Clone this repository to your local machine.
2. Navigate to the project directory:
   ```bash
   cd Day-004-Alarm-Clock/
   ```
3. Create the build directory if it doesn't exist:
   ```bash
   mkdir build
   ```
4. Compile the source code using GCC with include directory into the build folder:
   ```bash
   gcc src/*.c -Iinclude -o build/alarmClock
   ```
5. Run the executable:
   ```bash
   ./build/alarmClock
   ```

## Challenges

- Implement sound or visual alerts for the alarm.
- Allow users to set recurring alarms.
- Add snooze functionality to the alarm clock.

## Resources

- [C Time Library - time.h](https://www.tutorialspoint.com/c_standard_library/time_h.htm)
- [GCC Command Line Options](https://gcc.gnu.org/onlinedocs/gcc/Option-Summary.html)
