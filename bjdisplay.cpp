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
    if(game_over) return;
    m_mainWindow->m_statusLabel->setText(QString::fromStdString(to_string(bg.get().evalp1())));
    update();
}

void BJdisplay::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    QFont font = painter.font();
    font.setPointSize(18);
    painter.setFont(font);
    painter.fillRect(event->rect(), Qt::gray);
    painter.setBrush(Qt::black);
    vector<Card> cards = bg.get().p1.getCards();
    int value;
    for(int i=0;i<cards.size();i++){
        QImage img(QString::fromStdString(":images/"+cards[i].imageName()),"PNG");
        if(cards.size()>6){
            painter.drawImage(QRect(100+70*i, 50, 100, 145), img);
        } else {
            painter.drawImage(QRect(100+110*i, 50, 100, 145), img);
        }
    }
    value = bg.get().evalp1();
    if(game_over){
        if(value>21){
            painter.setPen(Qt::red);
        } else if(bg.get().evalp2()>21 || bg.get().evalp1()>=bg.get().evalp2()){
            painter.setPen(Qt::green);
        }
    }
    painter.drawText(50,120,QString::fromStdString(to_string(value)));
    painter.setPen(Qt::black);
    if(game_over){
        vector<Card> cards2 = bg.get().p2.getCards();
        for(int i=0;i<cards2.size();i++){
            QImage img(QString::fromStdString(":images/"+cards2[i].imageName()),"PNG");
            if(cards2.size()>6){
                painter.drawImage(QRect(100+70*i, 250, 100, 145), img);
            } else {
                painter.drawImage(QRect(100+110*i, 250, 100, 145), img);
            }
        }
        value = bg.get().evalp2();
        if(game_over){
            if(value>21){
                painter.setPen(Qt::red);
            } else if(bg.get().evalp1()>21 || bg.get().evalp1()<bg.get().evalp2()){
                painter.setPen(Qt::green);
            }
        }
        painter.drawText(50,340,QString::fromStdString(to_string(value)));
        painter.setPen(Qt::black);
    }

}

void BJdisplay::lose1(){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("YOU LOST, game over | click anywhere to exit"));
    game_over=true;
    m_button->setDisabled(true);
    m_finish_button->setDisabled(true);
    update();
}
void BJdisplay::win1(){
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("YOU WON, game over | click anywhere to exit"));
    game_over=true;
    m_button->setDisabled(true);
    m_finish_button->setDisabled(true);
    update();
}

void BJdisplay::mousePressEvent(QMouseEvent *event){
    //m_mainWindow->m_statusLabel->setText(QString::fromStdString("message"));
    //update();
    if(game_over){
        m_mainWindow->close();
    }
}
void BJdisplay::mouseReleaseEvent(QMouseEvent *event){

}
void BJdisplay::mouseMoveEvent(QMouseEvent *event){

}

void BJdisplay::handleButton(){
    if(game_over) return;
    bg.get().drawp1();
    if(game_over) return;
    m_mainWindow->m_statusLabel->setText(QString::fromStdString(to_string(bg.get().evalp1())));
    update();
}
void BJdisplay::handleButtonFinish(){
    if(game_over) return;
    m_mainWindow->m_statusLabel->setText(QString::fromStdString("dealer playing"));
    bg.get().dealerplay();
    update();
}
