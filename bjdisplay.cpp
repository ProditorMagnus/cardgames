#include "bjdisplay.h"

BJdisplay::BJdisplay(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent)
{

    setMouseTracking(true);
    this->deck = new Deck(52);
    deck->shuffle();
}

void BJdisplay::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
}

void BJdisplay::mousePressEvent(QMouseEvent *event){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("message"));
}
void BJdisplay::mouseReleaseEvent(QMouseEvent *event){

}
void BJdisplay::mouseMoveEvent(QMouseEvent *event){

}
