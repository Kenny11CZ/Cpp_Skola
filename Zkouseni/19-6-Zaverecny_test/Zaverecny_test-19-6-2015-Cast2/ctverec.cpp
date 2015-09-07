#include "ctverec.h"

Ctverec::Ctverec()
{
}

QRectF Ctverec::boundingRect() const
{
    return QRectF(0,0,30,30);
}

void Ctverec::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(0,0,30,30);
}

QPainterPath Ctverec::shape() const
{
    QPainterPath hranice;
    hranice.addRect(0,0,30,30);
    return hranice;
}
