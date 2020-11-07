#ifndef KONFIRMASIBUMI_H
#define KONFIRMASIBUMI_H

#include <QMainWindow>

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
};

#endif // KONFIRMASIBUMI_H
