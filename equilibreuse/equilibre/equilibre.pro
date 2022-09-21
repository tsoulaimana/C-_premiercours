TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        equilibreuse.cpp \
        main.cpp \
        mcculdaq.cpp \
        moteur.cpp

HEADERS += \
    equilibreuse.h \
    mcculdaq.h \
    moteur.h
