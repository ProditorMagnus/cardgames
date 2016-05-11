#include "bjdisplay.h"

BJdisplay::BJdisplay(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent)
{
    m_button = new QPushButton("My Button", this);
    m_button->setGeometry(QRect(QPoint(100, 500),QSize(100, 40)));
    connect(m_button, SIGNAL (released()), this, SLOT (handleButton()));

    setMouseTracking(true);
    this->deck = new Deck(52);
    deck->shuffle();

    bg = BJgame(this,deck);
}

void BJdisplay::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.fillRect(event->rect(), Qt::white);
    painter.setBrush(Qt::black);
    vector<Card> cards = bg.get().p1.getCards();
    for(int i=0;i<cards.size();i++){
        painter.drawEllipse(100+100*i,200,20,20);
    }

}

void BJdisplay::lose1(){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("player 1 lost, game over"));
    update();
}
void BJdisplay::win1(){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("player 1 won, game over"));
    update();
}

void BJdisplay::mousePressEvent(QMouseEvent *event){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("message"));
    update();
}
void BJdisplay::mouseReleaseEvent(QMouseEvent *event){

}
void BJdisplay::mouseMoveEvent(QMouseEvent *event){

}

void BJdisplay::handleButton(){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("button handled"));
    bg.get().drawp1();
    update();
}
