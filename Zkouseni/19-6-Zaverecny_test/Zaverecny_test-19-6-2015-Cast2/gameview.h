#include <QGraphicsView>
#include <kruh.h>
#include <ctverec.h>

#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include <QGraphicsView>

class GameView : public QGraphicsView
{
public:
    GameView();
    Kruh *k;
    Ctverec *c;
private slots:
    void timerEvent(QTimerEvent *);
};

#endif // GAMEVIEW_H
