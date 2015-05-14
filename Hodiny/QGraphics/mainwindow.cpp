#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qgraphicsview.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    QPoint x1(0,100);
    QPoint x2(0,-100);
    QLine x(x1,x2);
    scene.addLine(x);
    QPoint y1(100,0);
    QPoint y2(-100,0);
    QLine y(y1,y2);
    scene.addLine(y);
}

MainWindow::~MainWindow()
{
    delete ui;
}
