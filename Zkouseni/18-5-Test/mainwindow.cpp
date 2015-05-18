#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "qstring.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_minus_clicked()
{
    ui->textBrowser->clear();
    ui->textBrowser_2->clear();
}

void MainWindow::on_plus_clicked()
{
    Dialog d;
    if(d.exec() == d.Accepted)
    {
        if(d.znamka()!=5)
            ui->textBrowser->append(QString::number(d.znamka())+"-"+d.predmet());
        else
            ui->textBrowser_2->append(QString::number(d.znamka())+"-"+d.predmet());
    }
}
