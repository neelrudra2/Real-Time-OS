#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "Task.h"

class Scheduler
{
public:
    void addTask(const Task &task);
    void runScheduler(int simulationTime);

private:
    std::vector<Task> tasks;
};

#endif // SCHEDULER_H
