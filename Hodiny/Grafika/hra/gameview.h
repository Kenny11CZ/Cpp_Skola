#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <kamen.h>
#include <hrac.h>
#ifndef GAMEVIEW_H
#define GAMEVIEW_H

class GameView : public QGraphicsView
{
public:
    GameView();
    Kamen *k;
    Hrac *h;
    QGraphicsTextItem *zdravi;
    QGraphicsTextItem *skoreUkazatel;
private slots:
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *event);
};

#endif // GAMEVIEW_H
