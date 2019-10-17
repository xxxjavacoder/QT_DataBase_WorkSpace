#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QtSql>

#include "peoplemodel.h"
#include "universitymodel.h"
#include "person.h"
#include "employee.h"
#include "family_status.h"
#include "blood_group.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_connectButton_released();

    void on_disconectButton_released();

private:
    Ui::MainWindow *ui;

protected:
    QSqlDatabase db;
    QString userLogin;
    QString userPassword;
    QString userHost;
    int     localPortDB;
    int     remotePort;
    bool    DBConnectionState;
    QString sshTunelConfigForDB;
    QProcess dbTunel;
    PeopleModel *peopleModel;
    person *personModel;
    blood_group *blood_groupModel;
    employee *employeeModel;
    family_status *family_statusModel;
    UniversityModel *universityModel;
};

#endif // MAINWINDOW_H
