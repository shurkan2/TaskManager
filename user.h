#ifndef USER_H
#define USER_H

#include "taskmanager.h"

class Auser
{
public:
    Auser(const QString login, const QString password);
    QString a_login;
private:

    QString a_password;
    ATaskManager a_user_tasks;
};

#endif // USER_H
