#include "employee.h"

employee::employee()
{

}

employee::employee(QObject *parent, QSqlDatabase db)
{
    setTable("employee");

        setEditStrategy(QSqlTableModel::OnFieldChange);

        setHeaderData( 0, Qt::Horizontal,"employee_id");

        setHeaderData( 1, Qt::Horizontal,"     jobs_id     ");

        setHeaderData( 2, Qt::Horizontal,"jobs_type_id");

        setHeaderData( 3, Qt::Horizontal,"department_id");

        setHeaderData( 4, Qt::Horizontal,"person_id");
}

