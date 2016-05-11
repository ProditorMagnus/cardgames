#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    m_statusBar = this->statusBar();
    m_statusLabel = new QLabel("init");
    statusBar()->addWidget(m_statusLabel);
    m_BJdisplay = new BJdisplay(this);
    setCentralWidget(m_BJdisplay);
}

MainWindow::~MainWindow()
{
}
