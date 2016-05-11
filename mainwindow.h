#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "bjdisplay.h"

class BJdisplay;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QLabel *m_statusLabel;
    QStatusBar *m_statusBar;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    BJdisplay *m_BJdisplay;
private:
};

#endif // MAINWINDOW_H
