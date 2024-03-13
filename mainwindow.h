#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "user.h"

#include <QMainWindow>
#include <QDebug>

#include <QtSql/QSql>
#include <QtCore>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void update_all();
    //Функцию аутентификации

private:
    Ui::MainWindow *ui;
    Auser a_User;
};
#endif // MAINWINDOW_H
