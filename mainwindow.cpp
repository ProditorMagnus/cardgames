#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setFixedSize(800,600);
    m_statusBar = this->statusBar();
    statusBar()->setSizeGripEnabled(false);
    m_statusLabel = new QLabel("init");
    statusBar()->addWidget(m_statusLabel);
    m_BJdisplay = new BJdisplay(this);
    setCentralWidget(m_BJdisplay);

}

MainWindow::~MainWindow()
{
}
