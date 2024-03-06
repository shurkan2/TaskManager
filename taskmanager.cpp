#include "taskmanager.h"

ATaskManager::ATaskManager(){

}

void ATaskManager::addTask(const ATask &task){
    a_tasks.append(task);
}

int ATaskManager::taskCount() const {
    return a_tasks.size();
}

ATask ATaskManager::getTask(int index) const {
    return a_tasks[index];
}

void ATaskManager::removeTask(int index) {
    if (index >= 0 && index < a_tasks.size()) {
        a_tasks.remove(index);
    }
}
