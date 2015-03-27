#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pohlavi->setText(ui->muz->text());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_muz_toggled(bool checked)
{
    if(checked)
        ui->pohlavi->setText(ui->muz->text());
    else
        ui->pohlavi->setText(ui->zena->text());
}

void MainWindow::on_pushButton_2_clicked()
{
    QString temp;
    if(ui->muz->isChecked())
        temp = "Muz ";
    else \
        temp = "Zena ";
    temp += ui->lineEdit->text();
    temp += " ";
    temp += QString::number(ui->horizontalSlider->value());
    temp += " let";
    ui->label_2->setText(temp);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString temp;
    if(ui->muz2->isChecked())
        temp = "Muz";
    else
        temp = "Zena";
    temp += " ";
    temp += QString::number(ui->spinBox->value());
    temp += " let\n";
    temp += "Ma rad:\n";
    if(ui->kolektiv->isChecked())
        temp += " Kolektiv\n";
    if(ui->prace->isChecked())
        temp += " Prace\n";
    if(ui->sef->isChecked())
        temp += " Sef\n";
    if(ui->benefity->isChecked())
        temp += " Benefity\n";
    if(ui->plat->isChecked())
        temp += " Plat\n";
    /*
    if(ui->kolektiv->isChecked())
        temp += " Kolektiv";
        */
    temp += "Nema rad:\n";
    if(ui->platN->isChecked())
        temp += " Plat\n";
    if(ui->dostupnost->isChecked())
        temp += " Dostupnost\n";
    if(ui->kolektivN->isChecked())
        temp += " Kolektiv\n";
    if(ui->vse->isChecked())
        temp += " Vse\n";


    ui->vysledek->setText(temp);
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if(arg1<18)
        ui->pushButton_3->setEnabled(false);
    else
        ui->pushButton_3->setEnabled(true);
}

void MainWindow::on_a_valueChanged(double arg1)
{
    if(ui->radioButton->isChecked()){
        ui->obvod->setText(QString::number((ui->a->value()+ui->b->value())*2));
        ui->obsah->setText(QString::number(ui->a->value()*ui->b->value()));
    }
    else{
        ui->obvod->setText(QString::number(ui->a->value()*4));
        ui->obsah->setText(QString::number(ui->a->value()*ui->a->value()));
    }
}

void MainWindow::on_b_valueChanged(double arg1)
{
    if(ui->radioButton->isChecked()){
        ui->obvod->setText(QString::number((ui->a->value()+ui->b->value())*2));
        ui->obsah->setText(QString::number(ui->a->value()*ui->b->value()));
    }
    else{
        ui->obvod->setText(QString::number(ui->a->value()*4));
        ui->obsah->setText(QString::number(ui->a->value()*ui->a->value()));
    }
}
