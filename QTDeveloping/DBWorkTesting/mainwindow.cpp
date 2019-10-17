#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"
#include "family_status.h"
#include "employee.h"
#include "blood_group.h"
#include "windows.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    userLogin="root";
    userPassword="55981vova";
    userHost="localhost";
    localPortDB=3306;
    remotePort=22;
    sshTunelConfigForDB ="ssh\\plink -P %1 -L %2:localhost:3306 %3@%4 -N -pw %5 < ssh\\config.ini";

    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("CSD_db1");
    db.setHostName("localhost");
    db.setUserName(userLogin);
    db.setPassword(userPassword);
    db.setPort(localPortDB);

}

MainWindow::~MainWindow()
{
    delete peopleModel;
    delete universityModel;
    delete personModel;
    delete blood_groupModel;
    delete family_statusModel;
    delete employeeModel;
    delete ui;
}

void MainWindow::on_connectButton_released()
{
    QString msgDB;
   // msgDB=sshTunelConfigForDB.arg(remotePort).arg(localPortDB).arg(userLogin).arg(userHost).arg(userPassword);
    qDebug()<<msgDB;
    dbTunel.start(msgDB);
    int i;

    for(i=0;i<30;i++)
      {
        Sleep(250);
        DBConnectionState = db.open();
        if(true==DBConnectionState)
            break;
      }

    if(true==DBConnectionState)
       {
         ui->statusString->setText("Подключение выполнено !!!");

         personModel=new person(this,db);
         ui->firstTableView->setModel(personModel);
         ui->firstTableView->resizeColumnsToContents();


         blood_groupModel=new blood_group(this,db);
         ui->secondTableView->setModel(blood_groupModel);
         ui->secondTableView->resizeColumnsToContents();

         family_statusModel=new family_status(this,db);
         ui->tableView->setModel(family_statusModel);
         ui->tableView->resizeColumnsToContents();

         employeeModel=new employee(this,db);
         ui->tableView_2->setModel(employeeModel);
         ui->tableView_2->resizeColumnsToContents();

         personModel->select();
         blood_groupModel->select();
         family_statusModel->select();
         employeeModel->select();


       }
    else
    {
      ui->statusString->setText("Подключение не выполнено."+db.lastError().text());
//      errorLog->AddErrorMessage("Подключение не выполнено."+db.lastError().text());
     qDebug()<<"\nDB Error: "<<db.lastError().text();
    }



}



void MainWindow::on_disconectButton_released()
{
    db.close();
    dbTunel.close();
}
