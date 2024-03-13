#ifndef TASKMANAGER_H
#define TASKMANAGER_H


#include <QObject>
#include <QDateTime>

class ATask
{
public:
    ATask(const QString &title, const QString &description, const QDateTime &deadline);

    QString getTitle() const;
    QString getDescription() const;
    QDateTime getDeadline() const;
    bool isCompleted() const;
    void markAsCompleted();

    void setCompleted(bool newCompleted);

private:
    QString a_title;
    QString a_description;
    QDateTime a_deadline;
    bool a_completed;
};


class ATaskManager { // Works with the tasks of a specific user
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
