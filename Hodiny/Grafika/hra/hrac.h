#include <QGraphicsItem>
#include <QPainterPath>

#ifndef HRAC_H
#define HRAC_H

class Hrac : public QGraphicsItem
{
public:
    Hrac();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    void doleva();
    void doprava();
    QPainterPath shape() const;
    int zivoty;
    int skore;
};

#endif // HRAC_H
