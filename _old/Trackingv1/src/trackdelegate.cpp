#include "trackdelegate.h"

/*trackDelegate::trackDelegate(QObject *parent)

{
}

QWidget *trackDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                    const QModelIndex &index) const
{
    // si index différent des colonnes 4 et 6 qui sont les colonnes dates, on retourne à l'éditeur stantard
    switch (index.column())
    {
    case 0 :
    {
        qDebug() << "index column :" << index.column();
        return 0;
        break;
    }
    case 4 :
    case 6 :
    {
        QDateEdit *sb = new QDateEdit(parent);
        sb->setFrame(false);
        return sb;
        break;
    }
    default :
    {
        return QSqlRelationalDelegate::createEditor(parent, option, index);
        break;
    }

    }

//    if ((index.column() != 4)  & (index.column() != 6))

    // for editing the year, return a spinbox with a range from -1000 to 2100.

}
*/
