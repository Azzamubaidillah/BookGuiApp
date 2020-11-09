#ifndef KONFIRMASIPULANG_H
#define KONFIRMASIPULANG_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class KonfirmasiPulang;
}

class KonfirmasiPulang : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiPulang(QWidget *parent = nullptr);
    ~KonfirmasiPulang();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::KonfirmasiPulang *ui;
    TerimaKasih *TerimaKasih;

};

#endif // KONFIRMASIPULANG_H
