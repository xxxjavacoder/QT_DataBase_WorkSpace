#-------------------------------------------------
#
# Project created by QtCreator 2017-11-14T08:38:14
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DBWorkTesting
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    universitymodel.cpp \
    peoplemodel.cpp \
    blood_group.cpp \
    employee.cpp \
    family_status.cpp \
    person.cpp

HEADERS  += mainwindow.h \
    universitymodel.h \
    peoplemodel.h \
    blood_group.h \
    employee.h \
    family_status.h \
    person.h

FORMS    += mainwindow.ui
