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
    trackdelegate.cpp

HEADERS  += track.h \
    trackdb.h \
    trackdelegate.h

FORMS    += track.ui
