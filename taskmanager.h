#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "task.h"

class ATaskManager
{
public:
    ATaskManager();

    void addTask(const ATask& task);
    int taskCount() const;
    ATask getTask(int index) const;
    void removeTask(int index);

private:
    QVector<ATask> a_tasks;
};

#endif // TASKMANAGER_H
