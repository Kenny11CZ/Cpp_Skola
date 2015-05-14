#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog.h"
#include "QMessageBox.h"

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
    if(ui->lineEdit->text()!="")
    {
        int temp = QInputDialog::getInt(this, "Zadej cislo","Zadej cislo:");
        ui->textBrowser->setText("");
        for(int i = 0; i<temp; i++){
            ui->textBrowser->append(QString::number(i) + " " + ui->lineEdit->text());
        }
    }
    else
    {
        QMessageBox::information(this, "Title", "text");
    }

}
