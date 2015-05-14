#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qgraphicsview.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    /*
    QPolygon rakev;
    rakev.append(QPoint(0,20));
    rakev.append(QPoint(10,0));
    rakev.append(QPoint(30,0));
    rakev.append(QPoint(40,20));
    rakev.append(QPoint(33,80));
    rakev.append(QPoint(7,80));
    scene.addPolygon(rakev);
    scene.addLine(QLine(QPoint(10,30),QPoint(30,30)));
    scene.addLine(QLine(QPoint(20,20),QPoint(20,60)));
    */
    /*
    QPolygon ctverec;
    ctverec.append(QPoint(0,0));
    ctverec.append(QPoint(10,0));
    ctverec.append(QPoint(10,10));
    ctverec.append(QPoint(0,10));
    scene.addPolygon(ctverec);
    */
    /*
    QPolygon trojuhelnik;
    trojuhelnik.append(QPoint(0,20));
    trojuhelnik.append(QPoint(10,0));
    trojuhelnik.append(QPoint(20,20));
    scene.addPolygon(trojuhelnik);
    */
    QRect obrys(QPoint(0,0), QPoint(100,100));
    QRect oko1(QPoint(20,20), QPoint(40,40));
    QRect oko2(QPoint(60,20), QPoint(80,40));
    QRect nosObrys(QPoint(30,50), QPoint(70,70));
    QRect nosDirka1(QPoint(35,55), QPoint(45,65));
    QRect nosDirka2(QPoint(55,55), QPoint(65,65));
    QRect huba(QPoint(20,80), QPoint(80,90));



    scene.addRect(obrys);
    scene.addRect(oko1);
    scene.addRect(oko2);
    scene.addRect(nosObrys);
    scene.addRect(nosDirka1);
    scene.addRect(nosDirka2);
    scene.addRect(huba);
}

MainWindow::~MainWindow()
{
    delete ui;
}
