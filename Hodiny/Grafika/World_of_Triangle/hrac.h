#include <QGraphicsItem>
#include <QPainterPath>
#include "naboj.h"

#ifndef HRAC_H
#define HRAC_H

class Hrac : public QGraphicsItem
{
public:
    Hrac();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    QPainterPath shape() const;
    int zivoty;
    int skore;
    Naboj *n;
    void nahoru();
    void dolu();
    void strelba();
};


#endif // HRAC_H
