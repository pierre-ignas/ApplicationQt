#-------------------------------------------------
#
# Project created by QtCreator 2015-03-04T10:24:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JeuQuizo
TEMPLATE = app


SOURCES += main.cpp\
        jeuquizo.cpp \
    piece.cpp \
    plateau.cpp

HEADERS  += jeuquizo.h \
    piece.h \
    plateau.h

FORMS    += jeuquizo.ui

OTHER_FILES += \
    index.jpeg

RESOURCES += \
    images.qrc
