#-------------------------------------------------
#
# Project created by QtCreator 2022-04-29T14:50:57
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuiDemo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        frmMain.cpp \
        frmdevice.cpp \
        main.cpp \
        panelwidget.cpp \
        quiwidget.cpp

HEADERS += \
        frmMain.h \
        frmdevice.h \
        head.h \
        panelwidget.h \
        quiwidget.h

FORMS += \
        frmMain.ui \
        frmdevice.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

PRECOMPILED_HEADER  = head.h

RESOURCES += \
    define.qrc \
    image.qrc \
    other/main.qrc \
    other/qss.qrc

DISTFILES += \
    demo/main_about.png \
    demo/main_company.png \
    demo/main_config.png \
    demo/main_data.png \
    demo/main_exit.png \
    demo/main_help.png \
    demo/main_main.png \
    demo/main_person.png \
    other/main.ico \
    other/main.rc
