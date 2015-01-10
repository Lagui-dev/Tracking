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
    databasedatatypes.cpp \
    database.cpp \
    trackedit.cpp \
    databaseconnection.cpp \
    mymodel.cpp

HEADERS  += track.h \
    databasedatatypes.h \
    database.h \
    trackedit.h \
    databaseconnection.h \
    mymodel.h

FORMS    += track.ui \
    trackedit.ui

message($$OUT_PWD)
installaddons.path = $$OUT_PWD/
installaddons.files = data/*
message($$installaddons.files)
message($$installaddons.path)
INSTALLS += installaddons

OTHER_FILES +=

RESOURCES += \
    tracking.qrc

TRANSLATIONS += tracking_fr_FR.ts tracking_en_US.ts
