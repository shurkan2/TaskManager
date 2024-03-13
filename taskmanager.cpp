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

ATask::ATask(const QString &title, const QString &description, const QDateTime &deadline)
    : a_title(title), a_description(description), a_deadline(deadline), a_completed(false)
{}

QString ATask::getTitle() const {
    return a_title;
}

QString ATask::getDescription() const {
    return a_description;
}

QDateTime ATask::getDeadline() const {
    return a_deadline;
}


bool ATask::isCompleted() const {
    return a_completed;
}

void ATask::markAsCompleted() {
    a_completed = true;
}
