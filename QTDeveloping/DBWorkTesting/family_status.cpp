#include "family_status.h"

family_status::family_status()
{

}

family_status::family_status(QObject *parent, QSqlDatabase db)
{
    setTable("family_status");

        setEditStrategy(QSqlTableModel::OnFieldChange);

        setHeaderData( 0, Qt::Horizontal,"family_status_id");

        setHeaderData( 1, Qt::Horizontal,"     status     ");

        setHeaderData( 2, Qt::Horizontal,"sex");
}

