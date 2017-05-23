#-------------------------------------------------
#
# Project created by QtCreator 2016-11-20T13:27:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fitmap_dev
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mathfunctions.cpp

HEADERS  += mainwindow.h \
    mathfunctions.h

FORMS    += mainwindow.ui

DISTFILES += \
    undo.png

RESOURCES += \
    fit_map_rescource.qrc
