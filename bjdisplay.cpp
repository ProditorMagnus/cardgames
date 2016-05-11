#include "bjdisplay.h"

BJdisplay::BJdisplay(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent)
{
    m_button = new QPushButton("Draw card", this);
    m_button->setGeometry(QRect(QPoint(100, 500),QSize(100, 40)));
    connect(m_button, SIGNAL (released()), this, SLOT (handleButton()));

    m_finish_button = new QPushButton("Finish", this);
    m_finish_button->setGeometry(QRect(QPoint(200, 500),QSize(100, 40)));
    connect(m_finish_button, SIGNAL (released()), this, SLOT (handleButtonFinish()));

    setMouseTracking(true);
    this->deck = new Deck(52);
    deck->shuffle();

    bg = BJgame(this,deck);
    m_mainWindow->m_statusLabel->setText(QString::fromStdString(to_string(bg.get().evalp1())));
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
    game_over=true;
    update();
}
void BJdisplay::win1(){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("player 1 won, game over"));
    game_over=true;
    update();
}

void BJdisplay::mousePressEvent(QMouseEvent *event){
    //m_mainWindow->m_statusLabel->setText(QString::fromStdString("message"));
    //update();
}
void BJdisplay::mouseReleaseEvent(QMouseEvent *event){

}
void BJdisplay::mouseMoveEvent(QMouseEvent *event){

}

void BJdisplay::handleButton(){
    if(game_over) return;
    bg.get().drawp1();
    m_mainWindow->m_statusLabel->setText(QString::fromStdString(to_string(bg.get().evalp1())));
    update();
}
void BJdisplay::handleButtonFinish(){
    if(game_over) return;
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("dealer playing"));
    bg.get().dealerplay();
    update();
}
