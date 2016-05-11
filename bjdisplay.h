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

class BJdisplay : public QWidget
{
    Q_OBJECT
public:
    BJdisplay(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
};

#endif // BJDISPLAY_H
