#ifndef MYMODEL_H
#define MYMODEL_H

#include <QSqlQueryModel>
#include <QPainter>

class MyModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    MyModel(QObject *parent);
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

#endif // MYMODEL_H
