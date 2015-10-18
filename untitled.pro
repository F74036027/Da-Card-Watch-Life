#-------------------------------------------------
#
# Project created by QtCreator 2015-10-17T14:30:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    input_money.cpp \
    Human.cpp \
    Money.cpp \
    health.cpp \
    know.cpp

HEADERS  += mainwindow.h \
    input_money.h \
    Human.h \
    Money.h \
    know.h \
    health.h

FORMS    += mainwindow.ui \
    input_money.ui

DISTFILES +=

RESOURCES += \
    pic.qrc
