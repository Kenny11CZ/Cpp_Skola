#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    krok = 0;

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(vykresli()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::vykresli()
{
    scene.addEllipse(krok*40,40,30,30,QPen(), QBrush(QColor(qrand()%255,qrand()%255,qrand()%255,255)));
    krok++;
}

