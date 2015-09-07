#-------------------------------------------------
#
# Project created by QtCreator 2015-06-15T09:58:56
#
#-------------------------------------------------

QT       += core gui
CONFIG   += console

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = World_of_Triangle
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gameview.cpp \
    hrac.cpp \
    asteroid.cpp \
    naboj.cpp

HEADERS  += mainwindow.h \
    gameview.h \
    hrac.h \
    asteroid.h \
    naboj.h

FORMS    += mainwindow.ui
