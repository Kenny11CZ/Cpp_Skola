#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);

    double odmocnina = sqrt(50);
    QPen red = QPen(QColor(139,0,0,255));

    scene.addRect(QRect(0,0,50,50),QPen(QBrush(QColor(0,139,69,255)),5));
    scene.addEllipse(2,2,46,46);
    scene.addLine(52,25,100,25,red);
    scene.addEllipse(100,0,50,50,QPen(),QBrush(QColor(205,205,0,255)));
    \
    scene.addLine(100+odmocnina,odmocnina,150-odmocnina,50-odmocnina);
    scene.addLine(100+odmocnina,50-odmocnina,150-odmocnina,odmocnina);

    scene.addLine(150,25,200,25,red);
    scene.addRect(200,15,50,20);
    scene.addLine(250,25,300,25,red);
    QPolygon p;
    p.append(QPoint(300,25));
    p.append(QPoint(325,0));
    p.append(QPoint(350,25));
    p.append(QPoint(325,50));
    scene.addPolygon(p,QPen(),QBrush(QColor(255,62,150,255)));
    scene.addLine(300,25,350,25);
}

MainWindow::~MainWindow()
{
    delete ui;
}
