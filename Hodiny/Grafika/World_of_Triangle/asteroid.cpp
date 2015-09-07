#include "asteroid.h"

Asteroid::Asteroid()
{
}

QRectF Asteroid::boundingRect() const
{
    return QRectF(0,0,30,20);
}

void Asteroid::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawEllipse(0,0,30,20);
}

QPainterPath Asteroid::shape() const
{
    QPainterPath hranice;
    hranice.addEllipse(0,0,30,20);
    return hranice;
}
