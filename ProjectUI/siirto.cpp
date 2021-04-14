#include "siirto.h"
#include "ui_siirto.h"


Siirto::Siirto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Siirto)
{
    ui->setupUi(this);
}

Siirto::~Siirto()
{
    delete ui;
}

void Siirto::on_pushButton_clicked()
{
    this->close();

}
