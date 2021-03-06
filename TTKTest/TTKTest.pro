#-------------------------------------------------
#
# Project created by QtCreator 2014-08-08T23:19:41
#
# =================================================
# * This file is part of the TTK Music Player project
# * Copyright (c) 2014 - 2016 Greedysky Studio
# * All rights reserved!
# * Redistribution and use of the source code or any derivative
# * works are strictly forbiden.
# =================================================

QT       += core gui testlib
equals(QT_MAJOR_VERSION, 5){
QT       += widgets
}

QMAKE_CXXFLAGS += -std=c++11
INCLUDEPATH += $$PWD/../

TARGET = TTKTest

TEMPLATE = app

HEADERS  += \
    musicautotest.h \
    tst_codelines.h

SOURCES  += \
    musicapplicationmain.cpp \
    tst_codelines.cpp

