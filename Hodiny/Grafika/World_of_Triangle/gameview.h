#include <QGraphicsView>
#include <hrac.h>
#include <asteroid.h>
#include <naboj.h>
#include <QGraphicsTextItem>


#ifndef GAMEVIEW_H
#define GAMEVIEW_H

class GameView : public QGraphicsView
{
public:
    GameView();
    Hrac *h;
    Asteroid *a;
    Naboj *n;
    QGraphicsTextItem *zdraviUkazatel;
    QGraphicsTextItem *skoreUkazatel;
    int dy;
private slots:
    void timerEvent(QTimerEvent *);
    void keyReleaseEvent(QKeyEvent *event);
    void keyPressEvent(QKeyEvent *event);
};

#endif // GAMEVIEW_H
