#include <QGraphicsItem>
#include <QPainter>
#include <QPainterPath>

#ifndef NABOJ_H
#define NABOJ_H

class Naboj : public QGraphicsItem
{
public:
    Naboj();
    QRectF boundingRect() const;
    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);
    QPainterPath shape() const;
};

#endif // NABOJ_H
