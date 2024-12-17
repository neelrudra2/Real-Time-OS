# RTOS Scheduler Simulation
## Overview
This project is a basic simulation of a Real-Time Operating System (RTOS) scheduler using Rate Monotonic Scheduling (RMS) in C++. The scheduler manages a set of periodic tasks, each with a defined execution time and period. The RMS algorithm is used to determine the order in which tasks are executed based on their periods.

## Features
- Task Structure: Define a structure to represent a task, including its execution time, period, and priority.
- Scheduler: Implement the scheduler that manages tasks based on their priority and period.
- Task Execution: Simulate the execution of tasks based on the scheduling algorithm.
- Main Program: Create tasks and run the scheduler.

## Key Areas
- OS Concepts: Understanding of basic operating system principles, such as task scheduling and periodic task management.
- Real-Time Processing: Implementation of scheduling for real-time tasks, ensuring tasks are executed within their defined periods.
- Data Structures: Use of data structures to manage tasks and their properties effectively.

## How it works
##### 1. Task Definition
- Each task in the scheduler is represented by a 'Task' object.
- A task is characterized by:</br>
-- Name: A string representing the task's name.</br>
-- Execution Time: An integer representing how long the task takes to execute.</br>
-- Period: An integer representing the interval at which the task should be executed.</br>
-- Task Function: A function pointer representing the action to be performed by the task.</br>

```cpp
Task task1("Task1", 1, 3, task1Function);
Task task2("Task2", 1, 5, task2Function);
```

##### 2. Scheduler Initialization
- The 'Scheduler' class is responsible for managing the tasks and simulating their execution.
- Tasks are added to the scheduler using the 'addTask' method.

```cpp
Scheduler scheduler;
scheduler.addTask(task1);
scheduler.addTask(task2);
```

##### 3. Running the Scheduler
- The runScheduler method in the Scheduler class simulates the execution of tasks over a specified number of time units.
- The scheduler uses Rate Monotonic Scheduling (RMS) to determine the execution order of tasks.
- RMS is a fixed-priority scheduling algorithm where tasks with shorter periods have higher priority.

```cpp
scheduler.runScheduler(15);
```

##### 4. Task Execution Logic
- For each time unit, the scheduler iterates over the list of tasks.
- It checks if the current time is a multiple of the task's period. If it is, the task is executed.
- The scheduler prints the task execution details for each time unit.

## Contributions
Feel free to fork this repository and contribute. Whether it's fixing bugs, optimizing code, or adding new features, contributions are always welcome! Submit a pull request, and let’s improve this tool together.
