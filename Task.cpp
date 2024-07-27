#include "Task.h"

Task::Task(const std::string &name, int executionTime, int period, std::function<void()> taskFunction)
    : name(name), executionTime(executionTime), period(period), taskFunction(taskFunction) {}

std::string Task::getName() const
{
    return name;
}

int Task::getExecutionTime() const
{
    return executionTime;
}

int Task::getPeriod() const
{
    return period;
}

std::function<void()> Task::getTaskFunction() const
{
    return taskFunction;
}
