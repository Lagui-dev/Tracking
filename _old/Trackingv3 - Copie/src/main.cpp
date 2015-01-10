#include "track.h"
#include <QApplication>
#include <QElapsedTimer>

int main(int argc, char *argv[])
{
    #ifdef QT_DEBUG
        QElapsedTimer __aet_timer;
        __aet_timer.start();
        qDebug() << "Start-time benchmark started.";
    #endif

    QApplication a(argc, argv);
    QString locale = QLocale::system().name();
    QTranslator translator;
    qDebug() << locale;
    translator.load(QCoreApplication::applicationDirPath() + "/tracking_"+locale+".qm");
    a.installTranslator(&translator);
    
    a.setOrganizationName("LG Company");
    a.setOrganizationDomain("lgcompany.com");
    a.setApplicationName("Tracking v2");

    /*QSettings settings ;
    bool unBool = true ;
    settings.setValue("mon booléen", unBool) ;*/

    /*a.setApplicationDisplayName("Tracking v2 - Copyright 2014");*/
    track w;
    #ifdef QT_DEBUG
        qint64 __aet_elapsed = __aet_timer.nsecsElapsed();
        qDebug() << QString("Started in " + QString::number(__aet_elapsed / 1000 / 1000) + "msec").toStdString().c_str();
    #endif
    w.show();
    return a.exec();
}
