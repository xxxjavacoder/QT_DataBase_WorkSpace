#ifndef FAMILY_STATUS_H
#define FAMILY_STATUS_H

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSql>

class family_status : public QSqlRelationalTableModel
{
public:
    family_status();
    family_status(QObject *parent,QSqlDatabase db);

};

#endif // FAMILY_STATUS_H
