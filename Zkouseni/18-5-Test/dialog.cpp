#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

int Dialog::znamka()
{
    return ui->spinBox->value();
}

QString Dialog::predmet()
{
    return ui->lineEdit->text();
}
