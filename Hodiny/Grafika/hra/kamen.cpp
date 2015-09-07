#include "kamen.h"

Kamen::Kamen()
{
}

QRectF Kamen::boundingRect() const
{
    return QRectF(0,0,30,30);
}

void Kamen::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawEllipse(0,0,30,30);
}

QPainterPath Kamen::shape() const
{
    QPainterPath hranice;
    hranice.addEllipse(0,0,30,30);
    return hranice;
}
