#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qstring.h"
#include "qmessagebox.h"

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

void MainWindow::on_pushButton_clicked()
{
    double a = ui->a->value();
    double b = ui->b->value();
    int ret = 0;
    if(b==0){
        QMessageBox msgBox;
        msgBox.setText("Nelze delit nulou!!!");
        msgBox.setInformativeText("Vypocist bez deleni?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Save);
        ret = msgBox.exec();
        if(ret>20000)
            return;
    }
    ui->result->setText("");
    QString pomocny = "Soucet:\n" + QString::number(a) + "+" + QString::number(b) + "=" + QString::number(a+b) ;
    ui->result->append(pomocny);
    ui->result->append("");
    pomocny = "Rozdil:\n" + QString::number(a) + "-" + QString::number(b) + "=" + QString::number(a-b) ;
    ui->result->append(pomocny);
    ui->result->append("");
    pomocny = "Soucin:\n" + QString::number(a) + "*" + QString::number(b) + "=" + QString::number(a*b) ;
    ui->result->append(pomocny);
    ui->result->append("");
    if(ret==0)
        pomocny = "Podil:\n" + QString::number(a) + "/" + QString::number(b) + "=" + QString::number(a/b) ;
    else
        pomocny = "Podil:\nNepocitano";
    ui->result->append(pomocny);
}
