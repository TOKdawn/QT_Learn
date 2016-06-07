HEADERS += \
    mainwindow.h

SOURCES += \
    mianwindow.cpp \
    main.cpp
QT       += core

QT       -= gui

TARGET = helloword
CONFIG   += console
CONFIG   -= app_bundle
QT += widgets

FORMS += \
    mainwindow.ui
