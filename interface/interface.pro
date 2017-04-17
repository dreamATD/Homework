#-------------------------------------------------
#
# Project created by QtCreator 2017-04-17T10:43:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = interface
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        widget.cpp \
    personalinformation.cpp \
    search.cpp \
    userwindow.cpp \
    booking.cpp \
    refund.cpp \
    administratorwindow.cpp \
    add.cpp \
    finduser.cpp

HEADERS  += widget.h \
    personalinformation.h \
    search.h \
    userwindow.h \
    booking.h \
    refund.h \
    administratorwindow.h \
    add.h \
    finduser.h

FORMS    += widget.ui \
    personalinformation.ui \
    search.ui \
    userwindow.ui \
    booking.ui \
    refund.ui \
    administratorwindow.ui \
    add.ui \
    finduser.ui
