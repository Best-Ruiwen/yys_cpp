#-------------------------------------------------
#
# Project created by QtCreator 2019-07-17T09:51:40
#
#-------------------------------------------------

QT       += core gui
CONFIG += C++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app



FORMS    += mainwindow.ui \
    baigui.ui \
    yuhun.ui

RESOURCES += \
    pic.qrc

RC_ICONS = app.ico

HEADERS += \
    inc/baigui.h \
    inc/function.h \
    inc/mainwindow.h \
    inc/random.h \
    inc/ui_baigui.h \
    inc/ui_mainwindow.h \
    inc/ui_yuhun.h \
    inc/yuhun.h

SOURCES += \
    src/baigui.cpp \
    src/function.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/random.cpp \
    src/yuhun.cpp

UI_DIR = ./inc/
