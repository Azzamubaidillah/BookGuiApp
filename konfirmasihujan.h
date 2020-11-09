#ifndef KONFIRMASIHUJAN_H
#define KONFIRMASIHUJAN_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class KonfirmasiHujan;
}

class KonfirmasiHujan : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiHujan(QWidget *parent = nullptr);
    ~KonfirmasiHujan();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::KonfirmasiHujan *ui;
    TerimaKasih *TerimaKasih;

};

#endif // KONFIRMASIHUJAN_H
