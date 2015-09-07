#include "naboj.h"

Naboj::Naboj()
{
}

QRectF Naboj::boundingRect() const
{
    return QRectF(0,0,10,1);
}

void Naboj::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawLine(QPointF(0,0), QPointF(10,0));
}

QPainterPath Naboj::shape() const
{
    QPainterPath hranice;
    hranice.addRect(0,0,10,1);
    return hranice;
}
