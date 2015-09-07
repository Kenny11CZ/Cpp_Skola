#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    QPen zelena = QPen(QColor(0,255,0,255));
    float odm = sqrt(30);

    scene.addLine(0,100,0,60);
    scene.addLine(-10,60,10,60,zelena);
    scene.addLine(-15,50,15,50,zelena);
    scene.addLine(0,50,0,0);
    scene.addLine(0,0,50,0);
    scene.addRect(50,-15,50,30, QPen(QBrush(QColor(255,62,105,255)),3),QBrush(QColor(139,69,19,255)));
    scene.addLine(100,0,150,0);
    scene.addEllipse(145,-5,10,10,QPen(),QBrush(QColor(0,0,0,255)));
    scene.addLine(150,-10,180,0);
    scene.addEllipse(175,-5,10,10,QPen(),QBrush(QColor(0,0,0,255)));
    scene.addLine(180,0,200,0);
    scene.addLine(200,0,200,50);
    scene.addEllipse(185,50,30,30, QPen(), QBrush(QColor(205,205,0,255)));
    scene.addLine(185+odm,50+odm,215-odm,80-odm);
    scene.addLine(215-odm,50+odm,185+odm,80-odm);
    scene.addLine(200,80,200,100);
    scene.addLine(200,100,0,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
