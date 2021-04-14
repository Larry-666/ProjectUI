#ifndef SIIRTO_H
#define SIIRTO_H

#include <QDialog>

namespace Ui {
class Siirto;
}

class Siirto : public QDialog
{
    Q_OBJECT

public:
    explicit Siirto(QWidget *parent = nullptr);
    ~Siirto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Siirto *ui;
};

#endif // SIIRTO_H
