#include <QGraphicsItem>
#include <QPainter>
#include <QPainterPath>
#ifndef KRUH_H
#define KRUH_H

class Kruh : public QGraphicsItem
{
public:
    Kruh();
    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);
    QPainterPath shape() const;
};

#endif // KRUH_H
