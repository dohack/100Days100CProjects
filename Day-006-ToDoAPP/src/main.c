#include "toDoApp.h"

int main() {

    SetConsoleTitle("ToDoApp");
    Task taskList[100]; // Assuming a maximum of 100 tasks
    int taskCount = 0;
    int choice;

    do {
        // Display menu options
        printf("\n===== To-Do App Menu =====\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Complete\n");
        printf("4. Save Tasks to File\n");
        printf("5. Load Tasks from File\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(taskList, &taskCount);
                break;
            case 2:
                viewTasks(taskList, taskCount);
                break;
            case 3:
                markComplete(taskList, taskCount);
                break;
            case 4:
                saveTasksToFile(taskList, taskCount);
                break;
            case 5:
                loadTasksFromFile(taskList, &taskCount);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

