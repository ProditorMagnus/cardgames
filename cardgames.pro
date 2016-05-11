#-------------------------------------------------
#
# Project created by QtCreator 2016-05-09T21:44:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cardgames
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bjdisplay.cpp \
    bjgame.cpp \
    blackjackhandevaluator.cpp \
    card.cpp \
    deck.cpp \
    hand.cpp

HEADERS  += mainwindow.h \
    bjdisplay.h \
    bjgame.h \
    blackjackhandevaluator.h \
    card.h \
    deck.h \
    hand.h

FORMS    += mainwindow.ui

INCLUDEPATH += C:/Users/Ravana/Desktop/UT_OwnCloud/ained2/cpp/pr7/boost_1_53_0
LIBS += C:/Users/Ravana/Desktop/UT_OwnCloud/ained2/cpp/pr7/boost-1.53-mingw-4.7/libboost_filesystem-mgw47-mt-1_53.a
LIBS += C:/Users/Ravana/Desktop/UT_OwnCloud/ained2/cpp/pr7/boost-1.53-mingw-4.7/libboost_program_options-mgw47-mt-1_53.a
LIBS += C:/Users/Ravana/Desktop/UT_OwnCloud/ained2/cpp/pr7/boost-1.53-mingw-4.7/libboost_regex-mgw47-mt-1_53.a
LIBS += C:/Users/Ravana/Desktop/UT_OwnCloud/ained2/cpp/pr7/boost-1.53-mingw-4.7/libboost_system-mgw47-mt-1_53.a
LIBS += C:/Users/Ravana/Desktop/UT_OwnCloud/ained2/cpp/pr7/boost-1.53-mingw-4.7/libboost_thread-mgw47-mt-1_53.a