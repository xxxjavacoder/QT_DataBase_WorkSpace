#include "person.h"


person::person()
{

}
person::person(QObject *parent, QSqlDatabase db)
{
    setTable("person");

        setEditStrategy(QSqlTableModel::OnFieldChange);

        setHeaderData( 0, Qt::Horizontal,"person_id");

        setHeaderData( 1, Qt::Horizontal,"     fname    ");

        setHeaderData( 2, Qt::Horizontal,"name");

        setHeaderData( 3, Qt::Horizontal,"sname");

        setHeaderData( 4, Qt::Horizontal,"when_born");

        setHeaderData( 5, Qt::Horizontal,"blood_group_id");
}



