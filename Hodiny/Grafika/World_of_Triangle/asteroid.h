#include <QGraphicsItem>
#include <QPainter>
#include <QPainterPath>

#ifndef ASTEROID_H
#define ASTEROID_H

class Asteroid : public QGraphicsItem
{
public:
    Asteroid();
    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);
    QPainterPath shape() const;
};

#endif // ASTEROID_H
