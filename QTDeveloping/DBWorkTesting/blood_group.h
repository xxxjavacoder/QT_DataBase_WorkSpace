#ifndef BLOOD_GROUP_H
#define BLOOD_GROUP_H

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSql>

class blood_group : public QSqlRelationalTableModel
{
public:
     blood_group();
     blood_group(QObject *parent,QSqlDatabase db);

};

#endif // BLOOD_GROUP_H
