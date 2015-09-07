#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Uloha 4
    view = new GameView;
    this->setCentralWidget(view);
    view->setScene(&scene);
    view->setSceneRect(0,0,311,181);
    view->c = new Ctverec;
    view->c->setPos(150,150);
    scene.addItem(view->c);

    view->k = new Kruh;
    view->k->setPos(0,0);
    scene.addItem(view->k);
    view->startTimer(15);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionKonec_triggered()
{
    exit(0);
}
