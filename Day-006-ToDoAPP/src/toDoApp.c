#include <stdio.h>
#include <string.h>
#include "toDoApp.h"

void addTask(Task *taskList, int *taskCount) {
    if (*taskCount >= MAX_TASKS) {
        printf("Task list is full. Cannot add more tasks.\n");
        return;
    }

    Task newTask;
    newTask.id = *taskCount + 1; // Assign a unique ID
    printf("Enter task description: ");
    getchar(); // Clear input buffer
    fgets(newTask.description, sizeof(newTask.description), stdin);
    newTask.description[strcspn(newTask.description, "\n")] = '\0'; // Remove newline character
    newTask.status = 0; // Set status as pending

    taskList[*taskCount] = newTask;
    (*taskCount)++;
    printf("Task added successfully.\n");
}

void viewTasks(Task *taskList, int taskCount) {
    if (taskCount == 0) {
        printf("No tasks found.\n");
        return;
    }

    printf("===== Task List =====\n");
    for (int i = 0; i < taskCount; i++) {
        printf("ID: %d, Description: %s, Status: %s\n", taskList[i].id, taskList[i].description,
               taskList[i].status == 0 ? "Pending" : "Completed");
    }
}

void markComplete(Task *taskList, int taskCount) {
    int taskId;
    printf("Enter task ID to mark as complete: ");
    scanf("%d", &taskId);

    int found = 0;
    for (int i = 0; i < taskCount; i++) {
        if (taskList[i].id == taskId) {
            taskList[i].status = 1; // Mark task as completed
            found = 1;
            printf("Task marked as complete.\n");
            break;
        }
    }

    if (!found) {
        printf("Task not found.\n");
    }
}

void saveTasksToFile(Task *taskList, int taskCount) {
    FILE *file = fopen("../app_data.csv", "w");
    if (!file) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < taskCount; i++) {
        fprintf(file, "%d,%s,%d\n", taskList[i].id, taskList[i].description, taskList[i].status);
    }

    fclose(file);
    printf("Tasks saved to file successfully.\n");
}

void loadTasksFromFile(Task *taskList, int *taskCount) {
    FILE *file = fopen("../app_data.csv", "r");
    if (!file) {
        printf("Error opening file for reading.\n");
        return;
    }

    *taskCount = 0; // Reset task count
    while (fscanf(file, "%d,%99[^,],%d\n", &taskList[*taskCount].id, taskList[*taskCount].description,
                  &taskList[*taskCount].status) == 3) {
        (*taskCount)++;
    }

    fclose(file);
    printf("Tasks loaded from file successfully.\n");
}
