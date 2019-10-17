#ifndef PERSON_H
#define PERSON_H

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSql>

class person : public QSqlRelationalTableModel
{
public:
    person();
    person(QObject *parent,QSqlDatabase db);

};

#endif // PERSON_H
