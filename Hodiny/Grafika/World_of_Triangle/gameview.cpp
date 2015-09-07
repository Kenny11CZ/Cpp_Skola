#include "gameview.h"
#include "QKeyEvent"
#include "QMessageBox"

GameView::GameView()
{
    dy = 0;
}

void GameView::timerEvent(QTimerEvent *)
{
    if(h->y()+5*dy>0 && h->y()+5*dy<350)
        h->setY(h->y()+(5*dy));



    if(a->x()>0 && a->isVisible())
        a->setX(a->x()-3);
    else
    {
        a->setX(500);
        a->setY(qrand()%350);
    }
    if(n->x()<500 && n->isVisible())
        n->setX(n->x()+7);
    else
        n->hide();
    if(h->collidesWithItem(a))
    {
        h->zivoty--;
        zdraviUkazatel->setHtml("Zdravi: <b>"+ QString::number(h->zivoty)+"</b>");
        if(!h->zivoty)
        {
            QMessageBox::warning(this,"Konec","Dosli ti zivoty, frajere.");
            exit(0);
        }
        a->setX(500);
        a->setY(qrand()%350);
    }
    if(n->collidesWithItem(a))
    {
        h->skore++;
        skoreUkazatel->setHtml("Skore: <b>"+ QString::number(h->skore)+"</b>");
        a->setX(500);
        a->setY(qrand()%350);
        n->hide();
    }
}

void GameView::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key()==Qt::Key_W && dy == -1)
    {
        dy = 0;
    }
    if (event->key()==Qt::Key_S && dy == 1)
    {
        dy = 0;
    }
}

void GameView::keyPressEvent(QKeyEvent *event)
{
    if (event->key()==Qt::Key_W)
    {
        dy = -1;
        //h->nahoru();
    }
    if (event->key()==Qt::Key_S)
    {
        dy = 1;
        //h->dolu();
    }
    if (event->key()==Qt::Key_Space && !n->isVisible())
    {
        n->show();
        n->setPos(h->x()+30, h->y()+15);
    }
}
