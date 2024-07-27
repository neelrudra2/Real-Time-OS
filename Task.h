#ifndef TASK_H
#define TASK_H

#include <functional>
#include <string>

class Task
{
public:
    Task(const std::string &name, int executionTime, int period, std::function<void()> taskFunction);

    std::string getName() const;
    int getExecutionTime() const;
    int getPeriod() const;
    std::function<void()> getTaskFunction() const;

private:
    std::string name;
    int executionTime;
    int period;
    std::function<void()> taskFunction;
};

#endif // TASK_H
