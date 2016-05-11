#ifndef BJDISPLAY_H
#define BJDISPLAY_H
#include <QPainter>
#include <QPaintEvent>
#include <QWidget>
#include <QAction>
#include <QApplication>
#include <QEvent>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QWhatsThis>
#include <QLabel>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "blackjackhandevaluator.h"
#include "bjgame.h"
#include "mainwindow.h"

class MainWindow;

class BJdisplay : public QWidget
{
    Q_OBJECT
public:
    Deck* deck;
    MainWindow *m_mainWindow;
    BJdisplay(MainWindow *parent);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
protected:

};

#endif // BJDISPLAY_H
