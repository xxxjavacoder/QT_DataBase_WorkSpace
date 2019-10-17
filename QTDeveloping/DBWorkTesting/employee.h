#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSql>

class employee  : public QSqlRelationalTableModel
{
public:
    employee();
    employee(QObject *parent,QSqlDatabase db);

};

#endif // EMPLOYEE_H
