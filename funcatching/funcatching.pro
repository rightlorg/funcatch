#-------------------------------------------------
#
# Project created by QtCreator 2015-06-22T18:13:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = funcatching
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    setting.cpp \
    map.cpp \
    readypage.cpp

HEADERS  += mainwindow.h \
    settings.h \
    map.h \
    readypage.h

FORMS    += mainwindow.ui \
    map.ui \
    settings.ui \
    readypage.ui
