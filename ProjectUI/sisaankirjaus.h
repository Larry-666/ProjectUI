#ifndef SISAANKIRJAUS_H
#define SISAANKIRJAUS_H

#include <QDialog>

namespace Ui {
class Sisaankirjaus;
}

class Sisaankirjaus : public QDialog
{
    Q_OBJECT

public:
    explicit Sisaankirjaus(QWidget *parent = nullptr);
    ~Sisaankirjaus();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Sisaankirjaus *ui;
};

#endif // SISAANKIRJAUS_H
