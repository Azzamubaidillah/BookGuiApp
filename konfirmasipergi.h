#ifndef KONFIRMASIPERGI_H
#define KONFIRMASIPERGI_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class KonfirmasiPergi;
}

class KonfirmasiPergi : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiPergi(QWidget *parent = nullptr);
    ~KonfirmasiPergi();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::KonfirmasiPergi *ui;
    TerimaKasih *TerimaKasih;

};

#endif // KONFIRMASIPERGI_H
