#include "hrac.h"
#include <QPainter>
#include "naboj.h"

Hrac::Hrac()
{
    this->skore = 0;
    this->zivoty = 3;
}

void Hrac::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon temp = QPolygon();
    temp.append(QPoint(0,0));
    temp.append(QPoint(30,15));
    temp.append(QPoint(0,30));
    painter->drawPolygon(temp);
}

QRectF Hrac::boundingRect() const
{
    return QRectF(0,0,30,30);
}

QPainterPath Hrac::shape() const
{
    QPainterPath hranice;
    QPolygonF temp = QPolygonF();
    temp.append(QPoint(0,0));
    temp.append(QPoint(30,15));
    temp.append(QPoint(0,30));
    hranice.addPolygon(temp);
    return hranice;
}



void Hrac::nahoru()
{
    if(y()>0)
        setY(y()-5);
}

void Hrac::dolu()
{
    if(y()<350-30)
        setY(y()+5);
}

void Hrac::strelba()
{
    //if(this->pocetNaboju<this->maxNaboju)
    qDebug("strelba");
    this->n = new Naboj();
    this->n->setPos(this->x()+10, this->y());
}
