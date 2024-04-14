#ifndef TODOAPP_H
#define TODOAPP_H

#define MAX_TASKS 100 // Define maximum number of tasks

// Define task structure
typedef struct {
    int id;
    char description[100];
    int status; // 0 for pending, 1 for completed
} Task;

// Function prototypes
void addTask(Task *taskList, int *taskCount);
void viewTasks(Task *taskList, int taskCount);
void markComplete(Task *taskList, int taskCount);
void saveTasksToFile(Task *taskList, int taskCount);
void loadTasksFromFile(Task *taskList, int *taskCount);

#endif
