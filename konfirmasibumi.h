#ifndef KONFIRMASIBUMI_H
#define KONFIRMASIBUMI_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class KonfirmasiBumi;
}

class KonfirmasiBumi : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiBumi(QWidget *parent = nullptr);
    ~KonfirmasiBumi();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::KonfirmasiBumi *ui;
    TerimaKasih *TerimaKasih;
};

#endif // KONFIRMASIBUMI_H
