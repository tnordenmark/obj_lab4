TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    intarray.cpp \
    arraysort.cpp

HEADERS += \
    intarray.h \
    timer.h

QMAKE_CXXFLAGS = -std=c++11
QMAKE_LFLAGS = -std=c++11
