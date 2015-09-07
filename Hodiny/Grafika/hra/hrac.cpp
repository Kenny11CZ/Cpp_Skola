#include "hrac.h"
#include <QPainter>

Hrac::Hrac()
{
    this->zivoty = 3;
    this->skore = 0;
}
void Hrac::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(0,0,30,30);
}

QRectF Hrac::boundingRect() const
{
    return QRectF(0,0,30,30);
}

void Hrac::doleva()
{
    if(x()>0)
        setX(x()-5);
}

void Hrac::doprava()
{
    if(x()<370)
        setX(x()+5);
}

QPainterPath Hrac::shape() const
{
    QPainterPath hranice;
    hranice.addRect(0,0,30,30);
    return hranice;
}
