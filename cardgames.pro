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
