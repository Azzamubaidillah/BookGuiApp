#ifndef KONFIRMASIMILEA_H
#define KONFIRMASIMILEA_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class KonfirmasiMilea;
}

class KonfirmasiMilea : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiMilea(QWidget *parent = nullptr);
    ~KonfirmasiMilea();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::KonfirmasiMilea *ui;
    TerimaKasih *TerimaKasih;

};

#endif // KONFIRMASIMILEA_H
