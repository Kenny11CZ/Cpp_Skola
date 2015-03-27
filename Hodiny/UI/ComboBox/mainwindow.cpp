#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for(int i = 0; i<10;i++){
        ui->comboBox->addItem(QString::number(i));
        ui->comboBox_2->addItem(QString::number(i));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    ui->label->setText(QString::number(ui->comboBox->currentText().toInt()+ui->comboBox_2->currentText().toInt()));
}

void MainWindow::on_action_2_triggered()
{
    ui->label->setText(QString::number(ui->comboBox->currentText().toInt()-ui->comboBox_2->currentText().toInt()));

}

void MainWindow::on_action_3_triggered()
{
    ui->label->setText(QString::number(ui->comboBox->currentText().toInt()*ui->comboBox_2->currentText().toInt()));

}

void MainWindow::on_action_4_triggered()
{
    if(ui->comboBox_2->currentText().toInt()!=0)
        ui->label->setText(QString::number(ui->comboBox->currentText().toInt()/ui->comboBox_2->currentText().toFloat()));
    else
        ui->label->setText("0");
}
