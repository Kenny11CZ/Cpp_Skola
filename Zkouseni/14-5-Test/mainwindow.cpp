#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog.h"
#include "QString.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->label->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int vysledek = QInputDialog::getInt(this, "Zadej cislo", "Zadej cislo:", 0, 0, 10000);
    this->ui->label->setText(QString::number(vysledek));
    this->ui->textBrowser->clear();
    for(int i = 0; i<vysledek; i+=2)
        if(i!=0)
            this->ui->textBrowser->append(QString::number(i));
}
