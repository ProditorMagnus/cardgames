#include "bjdisplay.h"

BJdisplay::BJdisplay(QWidget *parent)
    : QWidget(parent)
{
    // Nothing here yet
    setMouseTracking(true);
}

void BJdisplay::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
}

void BJdisplay::mousePressEvent(QMouseEvent *event){

}
void BJdisplay::mouseReleaseEvent(QMouseEvent *event){

}
void BJdisplay::mouseMoveEvent(QMouseEvent *event){

}
