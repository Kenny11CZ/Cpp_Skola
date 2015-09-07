#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <gameview.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    view = new GameView;
    this->setCentralWidget(view);
    view->setScene(&scene);
    view->setSceneRect(0,0,500,350);

    view->h = new Hrac;
    view->h->setPos(20,175);
    scene.addItem(view->h);

    view->n = new Naboj;
    scene.addItem(view->n);
    view->n->hide();

    view->a = new Asteroid;
    scene.addItem(view->a);

    view->zdraviUkazatel = new QGraphicsTextItem;
    scene.addItem(view->zdraviUkazatel);
    view->zdraviUkazatel->setX(480);
    view->zdraviUkazatel->setHtml("Zdravi: <b>3</b>");

    view->skoreUkazatel = new QGraphicsTextItem;
    scene.addItem(view->skoreUkazatel);
    view->skoreUkazatel->setX(0);
    view->skoreUkazatel->setHtml("Skore: 0");

    view->startTimer(15);
}

MainWindow::~MainWindow()
{
    delete ui;
}
