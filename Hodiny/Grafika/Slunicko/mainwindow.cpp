#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qgraphicsview.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    int vyska = 50;
    int sirka = 50;
    scene.addEllipse(-(sirka/2),-(vyska/2),sirka,vyska, QPen(QColor(0,255,255)));

    scene.addLine(-sirka-sirka/2,0,-sirka+sirka/2,0);
    scene.addLine(sirka/2,0,sirka+sirka/2,0);

    scene.addLine(0, -vyska-vyska/2,0,-vyska+vyska/2);
    scene.addLine(0, vyska/2,0,vyska+vyska/2);

    scene.addLine(-sirka-sirka/2,-vyska-vyska/2,-(sirka/3)/sqrt(2),-(vyska/3)/sqrt(2));

}

MainWindow::~MainWindow()
{
    delete ui;
}
