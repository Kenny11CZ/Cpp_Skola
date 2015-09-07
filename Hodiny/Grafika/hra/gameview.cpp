#include "gameview.h"
#include "QKeyEvent"
#include <QMessageBox>

GameView::GameView()
{
}

void GameView::timerEvent(QTimerEvent *)
{
    if(k->y()<=500)
        k->setY(k->y()+5);
    else
    {
        k->setY(0);
        k->setX(qrand()%376);
        h->skore++;
        skoreUkazatel->setHtml("Skore: "+ QString::number(h->skore));
    }
    if(h->collidesWithItem(k))
    {
        h->zivoty--;
        zdravi->setHtml("Zdravi: "+ QString::number(h->zivoty));
        k->setY(0);
        k->setX(qrand()%376);
        if(h->zivoty==0)
        {
            QMessageBox::warning(this, "OOL", "Dosli ti zivoty!\nTvoje skore bylo: " + QString::number(h->skore));
            exit(0);
        }
    }
}

void GameView::keyPressEvent(QKeyEvent *event)
{
    if (event->key()==Qt::Key_A)
        h->doleva();
    else if (event->key()==Qt::Key_D)
        h->doprava();
}
