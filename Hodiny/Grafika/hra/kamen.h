#include <QGraphicsItem>
#include <QPainter>
#include <QPainterPath>

#ifndef KAMEN_H
#define KAMEN_H


class Kamen : public QGraphicsItem
{
public:
    Kamen();
    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);
    QPainterPath shape() const;

};

#endif // KAMEN_H
