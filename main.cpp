#include <iostream>
#include "Scheduler.h"

void task1Function()
{
    std::cout << "Task1 executed. ";
}

void task2Function()
{
    std::cout << "Task2 executed. ";
}

int main()
{
    // Create tasks
    Task task1("Task1", 1, 3, task1Function); // 1 unit execution time, 3 units period
    Task task2("Task2", 1, 5, task2Function); // 1 unit execution time, 5 units period

    // Create scheduler
    Scheduler scheduler;
    scheduler.addTask(task1);
    scheduler.addTask(task2);

    // Run scheduler
    scheduler.runScheduler(15); // Simulate for 15 time units

    return 0;
}