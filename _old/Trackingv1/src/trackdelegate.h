#ifndef TRACKDELEGATE_H
#define TRACKDELEGATE_H
#include <QObject>
#include <QSqlRelationalDelegate>
#include <QtWidgets>

class trackDelegate : public QSqlRelationalDelegate
{
public:
    trackDelegate(QObject *parent);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                        const QModelIndex &index) const;
};

#endif // TRACKDELEGATE_H
