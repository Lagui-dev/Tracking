#-------------------------------------------------
#
# Project created by QtCreator 2014-04-11T15:37:27
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tracking
TEMPLATE = app


SOURCES += main.cpp\
        track.cpp \
    trackdb.cpp \
    trackdelegate.cpp \
    databasedatatypes.cpp \
    database.cpp

HEADERS  += track.h \
    trackdb.h \
    trackdelegate.h \
    databasedatatypes.h \
    database.h

FORMS    += track.ui

#EXTRA_BINFILES += $$PWD/darkorange.css
#EXTRA_BINFILES += $$PWD/tracking.db
#for(FILE,EXTRA_BINFILES){
#    QMAKE_POST_LINK += $$quote(cp $${FILE} $$OUT_PWD$$escape_expand(\n\t))
#}
message($$OUT_PWD)
installaddons.path = $$OUT_PWD/
installaddons.files = data/*
message($$installaddons.files)
message($$installaddons.path)
INSTALLS += installaddons

OTHER_FILES +=

RESOURCES += \
    tracking.qrc
