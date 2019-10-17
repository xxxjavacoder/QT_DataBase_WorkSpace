#include "blood_group.h"

blood_group::blood_group()
{

}

blood_group::blood_group(QObject *parent, QSqlDatabase db)
{
    setTable("blod_group");

        setEditStrategy(QSqlTableModel::OnFieldChange);

        setHeaderData( 0, Qt::Horizontal,"blood_group_id");

        setHeaderData( 1, Qt::Horizontal,"     blood_group     ");
}
