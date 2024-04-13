```markdown
# Day-005: Stop-Timer with Custom Icon for exe file
![Stop-Timer Icon](stoptimer.ico)

#### Introduction
The Stop-Timer project is an enhancement of the previous Alarm Clock project from Day 004. In this project, we have developed a simple command-line Stopwatch application using C. The Stopwatch allows users to start, stop, reset, and display the elapsed time.

This project builds upon the concepts learned in the Alarm Clock project, including time handling, user input validation, and basic application development in C.

## Features

- Start the Stopwatch to measure elapsed time.
- Stop the Stopwatch to freeze the elapsed time display.
- Reset the Stopwatch to zero.
- Display the elapsed time continuously in the console.

#### Project Structure
- **main.c**: Main program file that orchestrates the Stopwatch.
- **stopTimer.c**: Source file implementing Stopwatch functionalities.
- **stopTimer.h**: Header file containing function prototypes and structure definitions.
- **resource.rc**: Resource file for including the custom icon.

## Folder Structure

```plaintext
Day-005-Stop-Timer/
├── main.c
├── resource.o
├── resource.rc
├── stopTimer.c
├── stopTimer.exe
├── stopTimer.h
└── stoptimer.ico
```

#### How to Build
To build the Stop-Timer application on Windows, follow these steps:
1. Compile the source files and resource file using the following command:
   ```bash
   windres resource.rc -o resource.o
   gcc main.c stopTimer.c resource.o -o stopWatch
   ```

#### How to Run
After building the application, run it using the following command:
```bash
./stopTimer
```

#### Challenges Faced
Some potential challenges you might encounter while working on this project include:
- Implementing accurate time measurement.
- Managing user input for starting, stopping, and resetting the Stopwatch.
- Displaying the elapsed time in a user-friendly format.

## Challenges for You

- Implement a graphical user interface (GUI) for the Stopwatch.
- Add lap timing functionality to the Stopwatch.
- Include options for saving and loading Stopwatch sessions.

#### GitHub Repository
Explore the main GitHub repository for more projects and updates:
[https://github.com/your-username/Day-005-Stop-Timer](https://github.com/your-username/Day-005-Stop-Timer)

#### LinkedIn Profile
Connect with me on LinkedIn:
[Your Name - LinkedIn](https://www.linkedin.com/in/your-linkedin-profile/)

This project contributes to the ongoing 100 Days, 100 C Projects challenge. Stay tuned for more exciting projects and challenges!
```

Replace `your-username` with your actual GitHub username and ensure that the compilation and execution instructions are tailored to your specific setup.