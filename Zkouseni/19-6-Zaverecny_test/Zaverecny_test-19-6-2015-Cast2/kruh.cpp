#include "kruh.h"

Kruh::Kruh()
{
}

QRectF Kruh::boundingRect() const
{
    return QRectF(0,0,30,30);
}

void Kruh::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawEllipse(0,0,30,30);
}

QPainterPath Kruh::shape() const
{
    QPainterPath hranice;
    hranice.addEllipse(0,0,30,30);
    return hranice;
}
