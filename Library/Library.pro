#-------------------------------------------------
#
# Project created by QtCreator 2017-06-04T12:45:58
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Library
TEMPLATE = app


SOURCES += main.cpp\
        library.cpp \
    addbook.cpp

HEADERS  += library.h \
    addbook.h

FORMS    += library.ui \
    addbook.ui
