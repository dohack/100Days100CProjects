# Day-004: Alarm Clock using time.h and windows.h
### Day-004: Alarm Clock Challenge

#### Introduction
The Alarm Clock project aims to create a simple alarm clock application in C that allows users to set an alarm time and receive a notification when the alarm time is reached. This project enhances your understanding of C programming fundamentals, time handling, user input, and basic application development.

## Features

- Set alarm time
- Trigger alarm alert
- Display current time
- Simple command-line interface

#### Project Structure
- **alarm_clock.h**: Header file containing function prototypes and structure definitions.
- **alarm_clock.c**: Source file implementing alarm clock functionalities.
- **main.c**: Main program file that interacts with users and orchestrates the alarm clock.

## Folder Structure

```plaintext
Day-004-Alarm-Clock/
├── src/
│   ├── main.c
│   └── alarm.c
├── build/
└── README.md
```

#### How to Build
To build the Alarm Clock application, follow these steps:
1. Clone the GitHub repository: [https://github.com/dohack/100Days100CProjects](https://github.com/dohack/100Days100CProjects)
2. Navigate to the Day-004-Alarm-Clock directory.
3. Compile the source files using the following command:

   ```bash
   gcc src/* -Iinclude -o build/alarmClock
   ```

#### How to Run
After building the application, run it using the following command:
```bash
./build/alarmClock
```

#### Challenges Faced
Some potential challenges you might encounter while working on this project include:
- Handling user input validation for alarm time format and display options.
- Implementing a sound notification for the alarm.
- Ensuring accurate time comparisons to trigger the alarm.


## Challenges for You

- Implement sound or visual alerts for the alarm.
- Allow users to set recurring alarms.
- Add snooze functionality to the alarm clock.


#### GitHub Repository
Explore the main GitHub repository for more projects and updates:
[https://github.com/dohack/100Days100CProjects](https://github.com/dohack/100Days100CProjects)

#### LinkedIn Profile
Connect with me on LinkedIn:
[Ankit Kumar - LinkedIn](https://www.linkedin.com/in/ankit-kumar-4585b5284/)

This project contributes to the ongoing 100 Days, 100 C Projects challenge. Stay tuned for more exciting projects and challenges!

## Resources

- [C Time Library - time.h](https://www.tutorialspoint.com/c_standard_library/time_h.htm)