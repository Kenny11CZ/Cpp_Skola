#include "gameview.h"
#include "QMessageBox"

GameView::GameView()
{
}
void GameView::timerEvent(QTimerEvent *)
{
    if(c->x()<311)
        c->setX(c->x()+5);
    else
    {
        c->setX(0);
        c->setY(qrand()%181);
    }
    if(k->x()>0)
        k->setX(k->x()-5);
    else
    {
        k->setX(311);
        k->setY(qrand()%181);
    }
    if(c->collidesWithItem(k))
    {
        QMessageBox::warning(this, "Kolize", "Pi se srazilo s kvadratem");
        k->setX(311);
        k->setY(qrand()%181);
        c->setX(0);
        c->setY(qrand()%181);
    }
}
