#ifndef TASK_H
#define TASK_H

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

#endif // TASK_H
