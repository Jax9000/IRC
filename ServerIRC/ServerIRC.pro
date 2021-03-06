QT += core
QT -= gui

TARGET = ServerIRC
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    server.cpp \
    connection.cpp \
    channel.cpp \
    listener.cpp \
    message.cpp \
    socketmanager.cpp

HEADERS += \
    server.h \
    connection.h \
    channel.h \
    listener.h \
    message.h \
    socketmanager.h

QMAKE_CXXFLAGS += -std=c++0x -pthread
LIBS += -pthread
