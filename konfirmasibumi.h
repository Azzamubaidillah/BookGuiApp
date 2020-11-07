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

private:
    Ui::KonfirmasiBumi *ui;
    TerimaKasih *Terimakasih;
};

#endif // KONFIRMASIBUMI_H
