#include "mymodel.h"
#include <QColor>
#include <QDebug>

MyModel::MyModel(QObject *parent)
    :QSqlQueryModel(parent)
{
}

QVariant MyModel::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    int col = index.column();
    switch(role) {
        case Qt::DisplayRole:
            break;
        case Qt::FontRole:
            break;
        case Qt::BackgroundRole:
            break;
        case Qt::ForegroundRole:
            /*qDebug() << QString("row %1, col%2, role %3")
                    .arg(row).arg(col).arg(role);
            qDebug() << index.data();*/
            if (index.sibling(row,7).data()=="") {
                return QColor(Qt::red);
            }
            break;
        case Qt::TextAlignmentRole:
            break;
        case Qt::CheckStateRole:
            break;
    }
    return QSqlQueryModel::data(index, role);
}


