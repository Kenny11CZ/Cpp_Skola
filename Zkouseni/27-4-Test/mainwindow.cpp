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
    ui->textBrowser->clear();
    QString pomocne;
    pomocne = "Jmeno: " + ui->lineEdit->text();
    ui->textBrowser->append(pomocne);
    pomocne = "Pocet deti: " + QString::number(ui->spinBox->value());
    ui->textBrowser->append(pomocne);
    pomocne = "Prijem: " + QString::number(ui->horizontalSlider->value()*1000)+ "Kc";
    if(ui->spinBox->value()!=0)
        pomocne = QString::number(ui->horizontalSlider->value()*1000/ui->spinBox->value());
    else
        pomocne = "/";
    QMessageBox::information(this, "Prumer", "Na kazde dite pripada: " + pomocne + "Kc");
}
