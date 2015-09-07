#include <QGraphicsItem>
#include <QPainter>
#include <QPainterPath>

#ifndef CTVEREC_H
#define CTVEREC_H

class Ctverec : public QGraphicsItem
{
public:
    Ctverec();
    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);
    QPainterPath shape() const;
};

#endif // CTVEREC_H
