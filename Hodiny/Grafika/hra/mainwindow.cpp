#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "kamen.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    view = new GameView;
    this->setCentralWidget(view);
    view->setScene(&scene);
    view->setSceneRect(0,0,400,500);
    view->h = new Hrac;
    view->h->setPos(200,470);
    scene.addItem(view->h);

    view->k = new Kamen;
    scene.addItem(view->k);
    view->startTimer(15);

    view->zdravi = new QGraphicsTextItem;
    scene.addItem(view->zdravi);
    view->zdravi->setX(350);
    view->zdravi->setHtml("Zdravi: 3");

    view->skoreUkazatel = new QGraphicsTextItem;
    scene.addItem(view->skoreUkazatel);
    view->skoreUkazatel->setX(0);
    view->skoreUkazatel->setHtml("Skore: 0");
}
MainWindow::~MainWindow()
{
    delete ui;
}
