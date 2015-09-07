#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Uloha 2
    int pocet = QInputDialog::getInt(this, "Uloha 2", "Dialog k uloze 2\nZadejte pocet cisel: ", 1, 1, 20);
    float prumer = 0;
    for(int i = 0; i<pocet; i++)
        prumer += (float)QInputDialog::getDouble(this, QString::number(i+1), "Zadejte " +QString::number(i+1) + " cislo: ");
    prumer = prumer/pocet;
    ui->label_3->setText("Prumer je: " + QString::number(prumer));
    //-------
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Uloha 1
void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->append("/"+ui->lineEdit->text()+ "/ /"+ ui->lineEdit_2->text()+"/");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->clear();
}
//--------
//Uloha 3
void MainWindow::on_pushButton_3_clicked()
{
    Dialog *d = new Dialog();
    if(d->exec()==d->Accepted)
    {
        ui->textBrowser_2->clear();
        for(int i=0; i<d->getNum(); i++)
        {
            QString temp = "";
            QString c = d->getChar();
            for(int j=0; j<i+1; j++)
                temp += c;
            ui->textBrowser_2->append(temp);
        }
    }
}
