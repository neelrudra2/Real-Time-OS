<h1>RTOS Scheduler Simulation</h1>

<h2>Overview</h2>
This project is a basic simulation of a Real-Time Operating System (RTOS) scheduler using Rate Monotonic Scheduling (RMS) in C++. The scheduler manages a set of periodic tasks, each with a defined execution time and period. The RMS algorithm is used to determine the order in which tasks are executed based on their periods.

<h2>Features</h2>
1. Task Structure: Define a structure to represent a task, including its execution time, period, and priority.<br>
2. Scheduler: Implement the scheduler that manages tasks based on their priority and period.</br>
3. Task Execution: Simulate the execution of tasks based on the scheduling algorithm.</br>
4. Main Program: Create tasks and run the scheduler.

<h2>Key Areas</h2>
* OS Concepts: Understanding of basic operating system principles, such as task scheduling and periodic task management.</br>
* Real-Time Processing: Implementation of scheduling for real-time tasks, ensuring tasks are executed within their defined periods.</br>
* Data Structures: Use of data structures to manage tasks and their properties effectively.

<h2>How it works</h2>
<h3>1. Task Definition:</h3>
* Each task in the scheduler is represented by a 'Task' object.</br>
* A task is characterized by:</br> &nbsp;&nbsp;&nbsp;&nbsp;
* Name: A string representing the task's name.</br>&nbsp;&nbsp;&nbsp;&nbsp;
* Execution Time: An integer representing how long the task takes to execute.</br>&nbsp;&nbsp;&nbsp;&nbsp;
* Period: An integer representing the interval at which the task should be executed.</br>&nbsp;&nbsp;&nbsp;&nbsp;
* Task Function: A function pointer representing the action to be performed by the task

```cpp
Task task1("Task1", 1, 3, task1Function);
Task task2("Task2", 1, 5, task2Function);


<h3>2. Scheduler Initialization:</h3>
* The 'Scheduler' class is responsible for managing the tasks and simulating their execution.</br>
* Tasks are added to the scheduler using the 'addTask' method.

```cpp
Scheduler scheduler;
scheduler.addTask(task1);
scheduler.addTask(task2);

<h3>3. Running the Scheduler:</h3>
* The runScheduler method in the Scheduler class simulates the execution of tasks over a specified number of time units.</br>
* The scheduler uses Rate Monotonic Scheduling (RMS) to determine the execution order of tasks.</br>
* RMS is a fixed-priority scheduling algorithm where tasks with shorter periods have higher priority.

```cpp
scheduler.runScheduler(15);


<h3>4. Task Execution Logic:</h3>
* For each time unit, the scheduler iterates over the list of tasks.<br>
* It checks if the current time is a multiple of the task's period. If it is, the task is executed.</br>
* The scheduler prints the task execution details for each time unit.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
