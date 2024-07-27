#include "Scheduler.h"
#include <algorithm>
#include <iostream>
#include <iomanip>

void Scheduler::addTask(const Task &task)
{
    tasks.push_back(task);
}

void Scheduler::runScheduler(int simulationTime)
{
    std::cout << "Running Scheduler for " << simulationTime << " time units:\n";

    // Sort tasks by period (Rate Monotonic Scheduling)
    std::sort(tasks.begin(), tasks.end(), [](const Task &a, const Task &b)
              { return a.getPeriod() < b.getPeriod(); });

    int currentTime = 0;
    while (currentTime < simulationTime)
    {
        std::cout << "Time: " << std::setw(3) << currentTime << " | ";

        bool taskExecuted = false;
        for (const auto &task : tasks)
        {
            if (currentTime % task.getPeriod() == 0)
            {
                std::cout << task.getName() << " ";
                task.getTaskFunction()(); // Execute task function
                taskExecuted = true;
            }
        }

        if (!taskExecuted)
        {
            std::cout << "No task ";
        }

        std::cout << "\n";
        ++currentTime;
    }
}
