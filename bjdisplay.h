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
#include <QPushButton>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "blackjackhandevaluator.h"
#include "bjgame.h"
#include "mainwindow.h"
#include <boost/optional.hpp>
#include <vector>

class MainWindow;

class BJdisplay : public QWidget
{
    Q_OBJECT
public:
    bool game_over = false;
    boost::optional<BJgame> bg;
    Deck* deck;
    MainWindow *m_mainWindow;
    BJdisplay(MainWindow *parent);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

    void lose1();
    void win1();
private slots:
    void handleButton();
    void handleButtonFinish();
protected:
    QPushButton *m_button;
    QPushButton *m_finish_button;
};

#endif // BJDISPLAY_H
