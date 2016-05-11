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

RESOURCES += \
    imgres.qrc

DISTFILES += \
    PNG-cards-1.3/2_of_clubs.png \
    PNG-cards-1.3/2_of_diamonds.png \
    PNG-cards-1.3/2_of_hearts.png \
    PNG-cards-1.3/2_of_spades.png \
    PNG-cards-1.3/3_of_clubs.png \
    PNG-cards-1.3/3_of_diamonds.png \
    PNG-cards-1.3/3_of_hearts.png \
    PNG-cards-1.3/3_of_spades.png \
    PNG-cards-1.3/4_of_clubs.png \
    PNG-cards-1.3/4_of_diamonds.png \
    PNG-cards-1.3/4_of_hearts.png \
    PNG-cards-1.3/4_of_spades.png \
    PNG-cards-1.3/5_of_clubs.png \
    PNG-cards-1.3/5_of_diamonds.png \
    PNG-cards-1.3/5_of_hearts.png \
    PNG-cards-1.3/5_of_spades.png \
    PNG-cards-1.3/6_of_clubs.png \
    PNG-cards-1.3/6_of_diamonds.png \
    PNG-cards-1.3/6_of_hearts.png \
    PNG-cards-1.3/6_of_spades.png \
    PNG-cards-1.3/7_of_clubs.png \
    PNG-cards-1.3/7_of_diamonds.png \
    PNG-cards-1.3/7_of_hearts.png \
    PNG-cards-1.3/7_of_spades.png \
    PNG-cards-1.3/8_of_clubs.png \
    PNG-cards-1.3/8_of_diamonds.png \
    PNG-cards-1.3/8_of_hearts.png \
    PNG-cards-1.3/8_of_spades.png \
    PNG-cards-1.3/9_of_clubs.png \
    PNG-cards-1.3/9_of_diamonds.png \
    PNG-cards-1.3/9_of_hearts.png \
    PNG-cards-1.3/9_of_spades.png \
    PNG-cards-1.3/10_of_clubs.png \
    PNG-cards-1.3/10_of_diamonds.png \
    PNG-cards-1.3/10_of_hearts.png \
    PNG-cards-1.3/10_of_spades.png \
    PNG-cards-1.3/ace_of_clubs.png \
    PNG-cards-1.3/ace_of_diamonds.png \
    PNG-cards-1.3/ace_of_hearts.png \
    PNG-cards-1.3/ace_of_spades.png \
    PNG-cards-1.3/ace_of_spades2.png \
    PNG-cards-1.3/jack_of_clubs.png \
    PNG-cards-1.3/jack_of_diamonds.png \
    PNG-cards-1.3/jack_of_hearts.png \
    PNG-cards-1.3/jack_of_spades.png \
    PNG-cards-1.3/king_of_clubs.png \
    PNG-cards-1.3/king_of_diamonds.png \
    PNG-cards-1.3/king_of_hearts.png \
    PNG-cards-1.3/king_of_spades.png \
    PNG-cards-1.3/queen_of_clubs.png \
    PNG-cards-1.3/queen_of_diamonds.png \
    PNG-cards-1.3/queen_of_hearts.png \
    PNG-cards-1.3/queen_of_spades.png