#include "sisaankirjaus.h"
#include "ui_sisaankirjaus.h"
#include "menu.h"
#include <QMessageBox>

Sisaankirjaus::Sisaankirjaus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sisaankirjaus)
{
    ui->setupUi(this);
}

Sisaankirjaus::~Sisaankirjaus()
{
    delete ui;
}

void Sisaankirjaus::on_pushButton_clicked()
{
    QString tunnus = ui->lineEdit_Tunnus->text();

    if(tunnus == "test") {

        Menu kir;
        kir.setModal(true);
        kir.exec();
    }

    else {
        QMessageBox::warning(this, "Login", "Tunnus ei ole oikein");
    }
}
